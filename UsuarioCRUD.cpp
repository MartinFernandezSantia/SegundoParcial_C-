#pragma once

#include "pch.h";
#include "Usuario.cpp"
#include "RolCRUD.cpp"
#include "Connection.cpp"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


public ref class UsuarioCRUD {
private:
	Connection^ DB = gcnew Connection();
	MySqlConnection^ conn = DB->getConnection();
	RolCRUD^ rolCRUD = gcnew RolCRUD();
public:
	bool Crear(Usuario^ usuario) {
		try {
			this->DB->OpenConnection();

			// Inicio de la transaccion
			MySqlCommand^ cmd = gcnew MySqlCommand("START TRANSACTION;", this->conn);
			cmd->ExecuteNonQuery();

			// Insert en tabla usuarios
			String^ sql = "INSERT INTO usuarios (rol_id, contraseña) VALUES (@rol, @password);";
			cmd->CommandText = sql;

			int rolId = usuario->getRol()->getId();
			cmd->Parameters->AddWithValue("@rol", rolId);
			cmd->Parameters->AddWithValue("@password", rolId.ToString());
			cmd->ExecuteNonQuery();

			// Obtengo el ID del nuevo usuario
			cmd->CommandText = "SELECT LAST_INSERT_ID();";
			int newId = Convert::ToInt32(cmd->ExecuteScalar());
			usuario->setId(newId);
			usuario->setBloqueado(false);

			// Si es un Tecnico
			if (usuario->getRol()->getId() == 2) {
				// Insert en tabla fallas_y_marcas
				String^ sqlFallasMarcas = "INSERT INTO fallas_y_marcas (usuario_id) VALUES (@usuario_id);";
				cmd->CommandText = sqlFallasMarcas;
				cmd->Parameters->Clear();  // Clear previous parameters
				cmd->Parameters->AddWithValue("@usuario_id", newId);
				cmd->ExecuteNonQuery();
			}

			// Ejecuto la transaccion
			cmd->CommandText = "COMMIT;";
			cmd->ExecuteNonQuery();

			// Seteo la contraseña = id
			this->ResetPassword(newId);

			return true;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al crear usuario: " + e->Message);

			// Rollback de la transaccion
			MySqlCommand^ rollbackCmd = gcnew MySqlCommand("ROLLBACK;", this->conn);
			rollbackCmd->ExecuteNonQuery();

			return false;
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
	}

	Usuario^ GetByID(int id) {
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT usuarios.id, usuarios.rol_id, usuarios.bloqueado, "
				+ "fallas_y_marcas.num_fallas, fallas_y_marcas.num_marcas "
				+ "FROM usuarios "
				+ "LEFT JOIN fallas_y_marcas ON usuarios.id = fallas_y_marcas.usuario_id "
				+ "WHERE usuarios.id = @id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", id);
			reader = cmd->ExecuteReader();

			if (reader->Read()) {
				int usuarioID = reader->GetInt32(0);
				Rol^ rol = this->rolCRUD->GetByID(reader->GetInt32(1));
				bool bloqueado = reader->GetBoolean(2);

				Usuario^ usuario = gcnew Usuario(usuarioID, rol, bloqueado);

				// Agregar fallas y marcas si es Tecnico
				if (rol->getId() == 2 && !reader->IsDBNull(3) && !reader->IsDBNull(4)) {
					usuario->setFallas(reader->GetInt32(3));
					usuario->setMarcas(reader->GetInt32(4));
				}

				return usuario;
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener usuario: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return nullptr;
	}

	List<Usuario^>^ GetAll() {
		List<Usuario^>^ usuarios = gcnew List<Usuario^>();
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT usuarios.id, usuarios.rol_id, usuarios.bloqueado, "
				+ "fallas_y_marcas.num_fallas, fallas_y_marcas.num_marcas "
				+ "FROM usuarios "
				+ "LEFT JOIN fallas_y_marcas ON usuarios.id = fallas_y_marcas.usuario_id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			reader = cmd->ExecuteReader();

			while (reader->Read()) {
				int usuarioID = reader->GetInt32(0);
				Rol^ rol = this->rolCRUD->GetByID(reader->GetInt32(1));
				bool bloqueado = reader->GetBoolean(2);

				Usuario^ usuario = gcnew Usuario(usuarioID, rol, bloqueado);

				// Agregar fallas y marcas si es Tecnico
				if (rol->getId() == 2 && !reader->IsDBNull(3) && !reader->IsDBNull(4)) {
					usuario->setFallas(reader->GetInt32(3));
					usuario->setMarcas(reader->GetInt32(4));
				}

				usuarios->Add(usuario);
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener usuarios: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return usuarios;
	}

	bool UpdateBloqueado(int id, bool bloqueado) {
		try {
			this->DB->OpenConnection();

			String^ sql = "UPDATE usuarios SET bloqueado = @bloqueado WHERE id = @id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", id);
			cmd->Parameters->AddWithValue("@bloqueado", bloqueado);
			
			int rowsAffected = cmd->ExecuteNonQuery();

			return rowsAffected > 0;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al modificar bloqueo de usuario: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}

		return false;
	}

	bool ResetPassword(int id) {
		try {
			this->DB->OpenConnection();

			String^ sql = "UPDATE usuarios SET contraseña = id WHERE id = @id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", id);

			int rowsAffected = cmd->ExecuteNonQuery();

			return rowsAffected > 0;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al blanquear la contraseña del usuario: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
		return false;
	}

	bool UpdateMarcasYFallas(Usuario^ tecnico) {
		try {
			this->DB->OpenConnection();

			String^ sql = "UPDATE fallas_y_marcas SET num_fallas = @fallas, num_marcas = @marcas WHERE usuario_id = @id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", tecnico->getId());
			cmd->Parameters->AddWithValue("@fallas", tecnico->getFallas());
			cmd->Parameters->AddWithValue("@marcas", tecnico->getMarcas());

			int rowsAffected = cmd->ExecuteNonQuery();

			if (rowsAffected > 0 && tecnico->getFallas() >= 3) {
				sql = "UPDATE usuarios SET bloqueado = TRUE WHERE id = @id";

				cmd = gcnew MySqlCommand(sql, this->conn);
				cmd->Parameters->AddWithValue("@id", tecnico->getId());

				return cmd->ExecuteNonQuery() > 0;
			}

			return rowsAffected > 0;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al actualizar las marcas y fallas del tecnico: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
		return false;
	}

	int takenTickets(int tecnicoId) {
		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT COUNT(*) FROM (SELECT MAX(id) AS latest_id FROM asignaciones GROUP BY ticket_id) AS latest_assignments JOIN asignaciones AS a ON a.id = latest_assignments.latest_id WHERE a.usuario_id = @tecnicoId AND a.estado_id = 1";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@tecnicoId", tecnicoId);

			int tickets = Convert::ToInt32(cmd->ExecuteScalar());

			return tickets;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al verificar cantidad de tickets tomados: " + e->Message);
			return -1;
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
	}
};