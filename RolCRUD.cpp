#pragma once

#include "pch.h";
#include "Rol.cpp"
#include "Connection.cpp"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


public ref class RolCRUD {
private:
	Connection^ DB = gcnew Connection();
	MySqlConnection^ conn = DB->getConnection();
public:
	bool Crear(Rol^ rol) {
		try {
			this->DB->OpenConnection();

			String^ sql = "INSERT INTO roles (rol) VALUES (@rol); SELECT LAST_INSERT_ID()";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@rol", rol->getRol());

			int newId = Convert::ToInt32(cmd->ExecuteScalar());
			rol->setId(newId);

			return newId > 0;
		} 
		catch (MySqlException^ e) {
			MessageBox::Show("Error al crear rol: " + e->Message);
			return false;
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
	}

	bool Update(Rol^ rol) {
		try {
			this->DB->OpenConnection();

			String^ sql = "UPDATE roles SET rol = @rol WHERE id = @id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@rol", rol->getRol());
			cmd->Parameters->AddWithValue("@id", rol->getId());
			cmd->ExecuteNonQuery();

			return true;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al actualizar rol: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}

		return false;
	}

	bool DeleteByID(int id) {
		try {
			this->DB->OpenConnection();

			String^ sql = "DELETE FROM roles WHERE id = @id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", id);
			cmd->ExecuteNonQuery();

			return true;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al eliminar rol: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}

		return false;
	}

	Rol^ GetByID(int id) {
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT * FROM roles WHERE id = @id";
			
			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", id);

			reader = cmd->ExecuteReader();
			if (reader->Read()) {
				int rolID = reader->GetInt32(0);
				String^ rolName = reader->GetString(1);
				Rol^ rol = gcnew Rol(rolID, rolName);

				return rol;
			}
		} 
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener rol: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return nullptr;
	}

	List<Rol^>^ GetAll() {
		List<Rol^>^ roles = gcnew List<Rol^>();
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT * FROM roles";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			reader = cmd->ExecuteReader();

			while (reader->Read()) {
				int rolID = reader->GetInt32(0);
				String^ rolName = reader->GetString(1);
				Rol^ rol = gcnew Rol(rolID, rolName);

				roles->Add(rol);
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener roles: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return roles;
	}
};