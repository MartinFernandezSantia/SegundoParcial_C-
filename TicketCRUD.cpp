#pragma once

#include "pch.h";

#include "Usuario.cpp"
#include "Ticket.cpp"

#include "UsuarioCRUD.cpp"

#include "Connection.cpp"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


public ref class TicketCRUD {
private:
	Connection^ DB = gcnew Connection();
	MySqlConnection^ conn = DB->getConnection();
	UsuarioCRUD^ usuarioCRUD = gcnew UsuarioCRUD();
public:
	bool Crear(Ticket^ ticket) {
		try {
			this->DB->OpenConnection();

			String^ sql = "INSERT INTO tickets (titulo, descripcion, usuario_id) VALUES (@titulo, @descripcion, @usuarioId); SELECT LAST_INSERT_ID()";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@titulo", ticket->getTitulo());
			cmd->Parameters->AddWithValue("@descripcion", ticket->getDescripcion());
			cmd->Parameters->AddWithValue("@usuarioId", ticket->getCreador()->getId());

			int newId = Convert::ToInt32(cmd->ExecuteScalar());
			ticket->setId(newId);

			return newId > 0;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al crear Ticket: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}

		return false;
	}

	Ticket^ GetById(int id) {
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT t.id, t.titulo, t.descripcion, t.usuario_id, e.id, e.estado, a.usuario_id FROM tickets AS t LEFT JOIN (SELECT ticket_id, usuario_id, estado_id, id FROM asignaciones WHERE id IN (SELECT MAX(id) FROM asignaciones GROUP BY ticket_id) ) AS a ON t.id = a.ticket_id LEFT JOIN estados_tickets AS e ON a.estado_id = e.id WHERE t.id = @id ORDER BY t.id, a.id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", id);
			reader = cmd->ExecuteReader();

			if (reader->Read()) {
				int ticketID = reader->GetInt32(0);
				String^ titulo = reader->GetString(1);
				String^ descripcion = reader->GetString(2);
				Usuario^ creador = usuarioCRUD->GetByID(reader->GetInt32(3));
				Estado^ estado = nullptr;
				Usuario^ tecnico = nullptr;

				if (!reader->IsDBNull(4) && !reader->IsDBNull(5)) {
					estado = gcnew Estado(reader->GetInt32(4), reader->GetString(5));

				}
				if (!reader->IsDBNull(6)) {
					tecnico = usuarioCRUD->GetByID(reader->GetInt32(6));
				}

				Ticket^ ticket = gcnew Ticket(ticketID, titulo, descripcion, creador, estado, tecnico);
				
				return ticket;
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener ticket: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return nullptr;
	}
	
	List<Ticket^>^ GetAll() {
		List<Ticket^>^ tickets = gcnew List<Ticket^>();
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT t.id, t.titulo, t.descripcion, t.usuario_id, e.id, e.estado, a.usuario_id FROM tickets AS t LEFT JOIN (SELECT ticket_id, usuario_id, estado_id, id FROM asignaciones WHERE id IN (SELECT MAX(id) FROM asignaciones GROUP BY ticket_id) ) AS a ON t.id = a.ticket_id LEFT JOIN estados_tickets AS e ON a.estado_id = e.id ORDER BY t.id, a.id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			reader = cmd->ExecuteReader();

			while (reader->Read()) {
				int ticketID = reader->GetInt32(0);
				String^ titulo = reader->GetString(1);
				String^ descripcion = reader->GetString(2);
				Usuario^ creador = usuarioCRUD->GetByID(reader->GetInt32(3));
				Estado^ estado = nullptr;
				Usuario^ tecnico = nullptr;

				if (!reader->IsDBNull(4) && !reader->IsDBNull(5)) {
					estado = gcnew Estado(reader->GetInt32(4), reader->GetString(5));

				}
				if (!reader->IsDBNull(6)) {
					tecnico = usuarioCRUD->GetByID(reader->GetInt32(6));
				}

				Ticket^ ticket = gcnew Ticket(ticketID, titulo, descripcion, creador, estado, tecnico);
				tickets->Add(ticket);
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener tickets: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return tickets;
	}

	List<Ticket^>^ GetAllFromUsuario(int id) {
		List<Ticket^>^ tickets = gcnew List<Ticket^>();
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT t.id, t.titulo, t.descripcion, t.usuario_id, e.id, e.estado, a.usuario_id FROM tickets AS t LEFT JOIN (SELECT ticket_id, usuario_id, estado_id, id FROM asignaciones WHERE id IN (SELECT MAX(id) FROM asignaciones GROUP BY ticket_id) ) AS a ON t.id = a.ticket_id LEFT JOIN estados_tickets AS e ON a.estado_id = e.id WHERE t.usuario_id = @id ORDER BY t.id, a.id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", id);
			reader = cmd->ExecuteReader();

			while (reader->Read()) {
				int ticketID = reader->GetInt32(0);
				String^ titulo = reader->GetString(1);
				String^ descripcion = reader->GetString(2);
				Usuario^ creador = usuarioCRUD->GetByID(reader->GetInt32(3));
				Estado^ estado = nullptr;
				Usuario^ tecnico = nullptr;

				if (!reader->IsDBNull(4) && !reader->IsDBNull(5)) {
					estado = gcnew Estado(reader->GetInt32(4), reader->GetString(5));

				}
				if (!reader->IsDBNull(6)) {
					tecnico = usuarioCRUD->GetByID(reader->GetInt32(6));
				}

				Ticket^ ticket = gcnew Ticket(ticketID, titulo, descripcion, creador, estado, tecnico);
				tickets->Add(ticket);
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener tickets del usuario: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return tickets;
	}

	List<Ticket^>^ GetAllTakenById(int tecnicoId) {
		List<Ticket^>^ tickets = gcnew List<Ticket^>();
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT t.id, t.titulo, t.descripcion, t.usuario_id, e.id, e.estado, a.usuario_id FROM tickets AS t LEFT JOIN (SELECT ticket_id, usuario_id, estado_id, id FROM asignaciones WHERE id IN (SELECT MAX(id) FROM asignaciones GROUP BY ticket_id) ) AS a ON t.id = a.ticket_id LEFT JOIN estados_tickets AS e ON a.estado_id = e.id WHERE a.usuario_id = @id AND a.estado_id = 1 ORDER BY t.id, a.id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@id", tecnicoId);
			reader = cmd->ExecuteReader();

			while (reader->Read()) {
				int ticketID = reader->GetInt32(0);
				String^ titulo = reader->GetString(1);
				String^ descripcion = reader->GetString(2);
				Usuario^ creador = usuarioCRUD->GetByID(reader->GetInt32(3));
				Estado^ estado = nullptr;
				Usuario^ tecnico = nullptr;

				if (!reader->IsDBNull(4) && !reader->IsDBNull(5)) {
					estado = gcnew Estado(reader->GetInt32(4), reader->GetString(5));

				}
				if (!reader->IsDBNull(6)) {
					tecnico = usuarioCRUD->GetByID(reader->GetInt32(6));
				}

				Ticket^ ticket = gcnew Ticket(ticketID, titulo, descripcion, creador, estado, tecnico);
				tickets->Add(ticket);
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener tickets del tecnico: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}

		return tickets;
	}

	List<int>^ GetAllTecnicosFromTicket(int ticketId) {
		List<int>^ tecnicos = gcnew List<int>();
		MySqlDataReader^ reader = nullptr;

		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT usuario_id FROM asignaciones as a WHERE a.ticket_id = @ticketId GROUP BY usuario_id";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@ticketId", ticketId);
			reader = cmd->ExecuteReader();

			while (reader->Read()) {
				if (reader->IsDBNull(0)) continue;
				tecnicos->Add(reader->GetInt32(0));
			}
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al obtener tecnicos del ticket: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, reader);
		}
		return tecnicos;
	}

	bool updateTicket(int ticketId, int^ tecnicoId, int estadoId) {
		try {
			this->DB->OpenConnection();

			String^ sql = "INSERT INTO asignaciones (ticket_id, usuario_id, estado_id) VALUES (@ticketId, @usuarioId, @estadoId)";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@ticketId", ticketId);
			cmd->Parameters->AddWithValue("@usuarioId", tecnicoId);
			cmd->Parameters->AddWithValue("@estadoId", estadoId);

			return cmd->ExecuteNonQuery() > 0;
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al actualizar ticket: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
		return false;
	}

	bool wasReopend(int ticketId) {
		try {
			this->DB->OpenConnection();

			String^ sql = "SELECT 3 IN (SELECT estado_id FROM asignaciones WHERE ticket_id = @ticketId)";

			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->conn);
			cmd->Parameters->AddWithValue("@ticketId", ticketId);

			Object^ result = cmd->ExecuteScalar();

			return result != nullptr && Convert::ToBoolean(result);
		}
		catch (MySqlException^ e) {
			MessageBox::Show("Error al verificar si el ticket fue reabierto: " + e->Message);
		}
		finally {
			this->DB->CloseResources(this->conn, nullptr);
		}
		return false;
	}
};