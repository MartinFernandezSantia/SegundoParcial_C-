#pragma once
#include "pch.h";

#include "Usuario.cpp"
#include "Notificacion.cpp"

#include "UsuarioCRUD.cpp"

#include "Connection.cpp"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

public ref class NotificacionCRUD {
private:
	Connection^ DB = gcnew Connection();
	MySqlConnection^ conn = DB->getConnection();
	UsuarioCRUD^ usuarioCRUD = gcnew UsuarioCRUD();
public:
	int Crear(Notificacion^ notificacion) {
		MySqlDataReader^ reader = nullptr;
		try
		{
			this->DB->OpenConnection();

			String^ sql = "SELECT * FROM notificaciones WHERE usuario_id = @remitente AND visto = FALSE AND mensaje LIKE @mensaje";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@remitente", notificacion->getRemitente()->getId());
			cmd->Parameters->AddWithValue("@mensaje", notificacion->getMensaje());
			reader = cmd->ExecuteReader();

			// Si la notificacion ya fue creada
			if (reader->Read()) return -1;
			reader->Close();

			sql = "INSERT INTO notificaciones (mensaje, usuario_id) VALUES (@mensaje, @remitente); SELECT LAST_INSERT_ID()";
			cmd->CommandText = sql;
			cmd->Parameters->Clear();
			cmd->Parameters->AddWithValue("@remitente", notificacion->getRemitente()->getId());
			cmd->Parameters->AddWithValue("@mensaje", notificacion->getMensaje());

			int newId = Convert::ToInt32(cmd->ExecuteScalar());
			notificacion->setId(newId);

			return newId > 0;
		}
		catch (MySqlException^ e)
		{
			MessageBox::Show("Error al crear notificacion: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}
		return false;
	}

	List<Notificacion^>^ GetAllNotSeen() {
		List<Notificacion^>^ notificaciones = gcnew List<Notificacion^>();
		MySqlDataReader^ reader = nullptr;
		try
		{
			this->DB->OpenConnection();

			String^ sql = "SELECT id, mensaje, usuario_id FROM notificaciones WHERE visto = FALSE";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			reader = cmd->ExecuteReader();

			while (reader->Read()) {
				int id = reader->GetInt32(0);
				String^ mensaje = reader->GetString(1);
				Usuario^ remitente = this->usuarioCRUD->GetByID(reader->GetInt32(2));

				Notificacion^ notificacion = gcnew Notificacion(id, mensaje, false, remitente);
				notificaciones->Add(notificacion);
			}
		}
		catch (MySqlException^ e)
		{
			MessageBox::Show("Error al obtener notificaciones: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}
		return notificaciones;
	}

	bool UpdateVisto(List<int>^ idList) {
		try
		{
			this->DB->OpenConnection();

			// Ensure the list is not empty
			if (idList->Count == 0)
				return false;

			// Prepare the base SQL query
			String^ sql = "UPDATE notificaciones SET visto = TRUE WHERE id IN (";

			// Create a list to hold the parameters
			List<String^>^ parameters = gcnew List<String^>();

			// Create a parameter for each ID
			for (int i = 0; i < idList->Count; i++) {
				String^ paramName = "@id" + i.ToString();
				parameters->Add(paramName);
				sql += paramName + (i < idList->Count - 1 ? ", " : "");
			}
			sql += ")";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);

			// Add parameters to the command
			for (int i = 0; i < idList->Count; i++) {
				cmd->Parameters->AddWithValue(parameters[i], idList[i]);
			}

			return cmd->ExecuteNonQuery() > 0;
		}
		catch (MySqlException^ e)
		{
			MessageBox::Show("Error al actualizar notificaciones: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
		return false;
	}

};