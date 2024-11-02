#pragma once

#include "pch.h";
#include "Usuario.cpp"
#include "RolCRUD.cpp"
#include "Connection.cpp"

using namespace System::Windows::Forms;


public ref class Auth {
public:
	static Usuario^ logIn(int id, String^ password) {
		Connection^ DB = gcnew Connection();
		MySqlDataReader^ reader = nullptr;

		try {
			DB->OpenConnection();

			String^ sql = "SELECT usuarios.id, usuarios.rol_id, usuarios.bloqueado, "
				+ "fallas_y_marcas.num_fallas, fallas_y_marcas.num_marcas "
				+ "FROM usuarios "
				+ "LEFT JOIN fallas_y_marcas ON usuarios.id = fallas_y_marcas.usuario_id "
				+ "WHERE usuarios.id = @id AND usuarios.contraseña = @password";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, DB->getConnection());
			cmd->Parameters->AddWithValue("@id", id);
			cmd->Parameters->AddWithValue("@password", password);

			reader = cmd->ExecuteReader();
			if (reader->Read()) {
				RolCRUD^ rolCRUD = gcnew RolCRUD();

				int usuarioID = reader->GetInt32(0);
				Rol^ rol = rolCRUD->GetByID(reader->GetInt32(1));
				bool bloqueado = reader->GetBoolean(2);

				// Si el usuario esta bloqueado
				if (bloqueado) {
					MessageBox::Show("Lo sentimos, pero actualmente te encuentras bloqueado.\n Solicita el desbloqueo de tu cuenta al administrador para poder continuar");
					return nullptr;
				}

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
			DB->CloseResources(DB->getConnection(), reader);
		}

		return nullptr;
	}

	static bool updatePassword(int id, String^ currPass, String^ newPass) {
		Connection^ DB = gcnew Connection();

		try {
			DB->getConnection()->Open();

			String^ sql = "UPDATE usuarios SET contraseña = @newPass WHERE id = @id AND contraseña = @currPass";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, DB->getConnection());
			cmd->Parameters->AddWithValue("@id", id);
			cmd->Parameters->AddWithValue("@currPass", currPass);
			cmd->Parameters->AddWithValue("@newPass", newPass);
			int affectedRows = cmd->ExecuteNonQuery();

			if (affectedRows > 0) {
				return true;
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al modificar contraseña: " + e->Message);
		}
		finally {
			DB->CloseResources(DB->getConnection(), nullptr);
		}

		return false;
	}
};