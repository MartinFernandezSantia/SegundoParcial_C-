#pragma once
#include "pch.h"
#include <iostream>

#include "FormLogin.h"
#include "FormMain.h"
#include "FormChangePass.h"
#include "CrearUsuario.h"
#include "CrearTicket.h"
#include "VerTicket.h"
#include "VerTicketAdmin.h"

#include "Auth.cpp"
#include "Usuario.cpp"
#include "Rol.cpp"
#include "Ticket.cpp"
#include "Notificacion.cpp"

#include "UsuarioCRUD.cpp"
#include "RolCRUD.cpp"
#include "TicketCRUD.cpp"
#include "NotificacionCRUD.cpp"

using namespace SegundoParcial;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


public ref class Controller {
private:
	Usuario^ usuario;

	UsuarioCRUD^ usuarioCRUD;
	RolCRUD^ rolCRUD;
	TicketCRUD^ ticketCRUD;
	NotificacionCRUD^ notificacionCRUD;


	FormLogin^ formLogin;
	FormMain^ formMain;
	FormChangePass^ formChangePass;
	CrearUsuario^ formCrearUsuario;
	CrearTicket^ formCrearTicket;
	VerTicket^ formVerTicket;
	VerTicketAdmin^ formVerTicketAdmin;

	bool closeChangePassForm = true;
	bool closeCrearUsuarioForm = false;
	bool closeCrearTicketForm = false;
	bool closeVerTicketForm = false;
	bool closeVerTicketAdminForm = false;

	List<int>^ notificacionesIds;
public:
	// Constructor
	Controller() {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		// CRUDS
		this->usuarioCRUD = gcnew UsuarioCRUD();
		this->rolCRUD = gcnew RolCRUD();
		this->ticketCRUD = gcnew TicketCRUD();
		this->notificacionCRUD = gcnew NotificacionCRUD();

		// FormLogin
		this->formLogin = gcnew FormLogin();	
		this->formLogin->loginButton->Click += gcnew System::EventHandler(this, &Controller::login);
		this->formLogin->solicitarDesbloqueoBtn->Click += gcnew System::EventHandler(this, &Controller::solicitarDesbloqueo);
		this->formLogin->FormClosing += gcnew FormClosingEventHandler(this, &Controller::closeApp);


		// FormChangePass
		this->formChangePass = gcnew FormChangePass();
		this->formChangePass->updatePassBtn->Click += gcnew System::EventHandler(this, &Controller::changePassword);
		this->formChangePass->FormClosing += gcnew FormClosingEventHandler(this, &Controller::onCloseFormChangePass);


		
		Application::Run(this->formLogin);
	}
	/// <summary>
	/// Funcionalidad asociada al formulario para Iniciar Sesión. Permite el inicio de sesión de los usuarios.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void login(System::Object^ sender, System::EventArgs^ e) {
		try {
			int id = Convert::ToInt32(this->formLogin->idInput->Text);
			String^ password = this->formLogin->passwordInput->Text;

			this->usuario = Auth::logIn(id, password);

			if (this->usuario == nullptr) {
				MessageBox::Show(this->formLogin, "Id y/o contraseña incorrectos.");
				return;
			}

			this->formLogin->idInput->Text = "";
			this->formLogin->passwordInput->Text = "";

			if (id.ToString() == password) {
				MessageBox::Show(this->formLogin, "Porfavor, ingrese una nueva contraseña");
				this->formLogin->Hide();
				this->formChangePass->Show();
				return;
			}

			this->formLogin->Hide();
			this->openFormMain();
			closeChangePassForm = false;
		}
		catch (System::FormatException^ e) {
			MessageBox::Show(this->formLogin, "Los tipos de datos son incorrectos.");
		}
	}
	/// <summary>
	/// Muestra el formulario para cambiar la contraseña.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void showFormChangePass(System::Object^ sender, System::EventArgs^ e) {
		if (this->formChangePass != nullptr) {
			this->formChangePass->Show();
		}
	}
	/// <summary>
	/// Funcionalidad asociada al formulario para cambiar la contraseña. Modifica la contraseña del usuario actualmente logueado.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void changePassword(System::Object^ sender, System::EventArgs^ e) {
		String^ currentPass = this->formChangePass->currentPassTB->Text;
		String^ newPass = this->formChangePass->newPassTB->Text;
		String^ newPass2 = this->formChangePass->newPass2TB->Text;

		if (newPass != newPass2) {
			MessageBox::Show(this->formMain, "Las contraseñas no coinciden");
			return;
		}

		if (!Auth::updatePassword(usuario->getId(), currentPass, newPass)) {
			MessageBox::Show(this->formMain, "No se ha podido modificar la contraseña");
			return;
		}

		this->formChangePass->currentPassTB->Text = "";
		this->formChangePass->newPassTB->Text = "";
		this->formChangePass->newPass2TB->Text = "";

		MessageBox::Show(this->formChangePass, "Se ha modificado la contraseña exitosamente.\nPorfavor inicie sesión nuevamente");
		this->logout(sender, e);
	}
	/// <summary>
	/// Carga, abre y muestra el formulario principal. Dependiento del rol del usuario algunas Tabs seran removidas
	/// </summary>
	/// <returns></returns>
	Void openFormMain() {
		if (this->formMain == nullptr) {
			this->formMain = gcnew FormMain();
		}

		switch (usuario->getRol()->getId())
		{
		case 1 : // Admin
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage1);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage3);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage4);
			this->loadUsuariosTab(nullptr, nullptr);
			this->loadTicketsTab(nullptr, nullptr);
			this->loadNotificacionesTab();
			break;
		case 2: // Tecnico
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage1);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage5);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage6);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage7);
			this->loadTicketsPendientesTab();
			this->loadMiPerfil();
			break;
		case 3: // Trabajador
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage3);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage4);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage5);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage6);
			this->formMain->tabControl1->TabPages->Remove(this->formMain->tabPage7);
			this->loadMyTicketsTab(nullptr, nullptr);
			break;
		}

		// ToolStripMenuItems
		this->formMain->changePassTSMI->Click += gcnew System::EventHandler(this, &Controller::showFormChangePass);
		this->formMain->logoutTSMI->Click += gcnew System::EventHandler(this, &Controller::logout);

		this->formMain->FormClosing += gcnew FormClosingEventHandler(this, &Controller::closeApp);

		this->formMain->Show();
		MessageBox::Show(this->formMain, "Bienvenido/a");
	}
	/// <summary>
	/// Cierra la sesión del usuario actualmente logueado
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void logout(System::Object^ sender, System::EventArgs^ e) {
		if (this->formChangePass != nullptr) {
			this->formChangePass->Hide();
		}
		if (this->formMain != nullptr) {
			delete this->formMain;
			this->formMain = nullptr;
		}
		this->formLogin->Show();
	}
	/// <summary>
	/// Permite que se cierren aquellos formularios cuyo comportamiento al ser cerrados ha sido modificado
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void closeApp(Object^ sender, FormClosingEventArgs^ e) {
		if (this->formChangePass != nullptr) {
			closeChangePassForm = true;
		}
		if (this->formCrearUsuario != nullptr) {
			closeCrearUsuarioForm = true;
		}
		if (this->formCrearTicket != nullptr) {
			closeCrearTicketForm = true;
		}
		if (this->formVerTicket != nullptr) {
			closeVerTicketForm = true;
		}
		if (this->formVerTicketAdmin != nullptr) {
			closeVerTicketAdminForm = true;
		}

		Application::Exit();
	}
	/// <summary>
	/// Modifica el comportamiento al cerrar el formulario para cambiar la contraseña.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void onCloseFormChangePass(Object^ sender, FormClosingEventArgs^ e) {
		if (!closeChangePassForm) {
			e->Cancel = true;
			this->formChangePass->Hide();
		}
	}

	/// <summary>
	/// Modifica el comportamiento al cerrar el formulario para crear usuarios.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void onCloseFormCrearUsuario(Object^ sender, FormClosingEventArgs^ e) {
		if (!closeCrearUsuarioForm) {
			e->Cancel = true;
			this->formCrearUsuario->Hide();
		}
	}
	/// <summary>
	/// Carga el Tab pertinente a Usuarios.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void loadUsuariosTab(Object^ sender, FormClosingEventArgs^ e) {
		this->updateUsuariosTable();

		this->formMain->bloquearBtn->Tag = true;
		this->formMain->desbloquearBtn->Tag = false;

		this->formMain->bloquearBtn->Click += gcnew System::EventHandler(this, &Controller::bloquearUsuario);
		this->formMain->desbloquearBtn->Click += gcnew System::EventHandler(this, &Controller::bloquearUsuario);
		this->formMain->blanquearBtn->Click += gcnew System::EventHandler(this, &Controller::resetPassword);
		this->formMain->agregarUsuarioBtn->Click += gcnew System::EventHandler(this, &Controller::showCrearUsuarioForm);
	}

	/// <summary>
	/// Actualiza la tabla de usuarios.
	/// </summary>
	/// <returns></returns>
	Void updateUsuariosTable() {
		List<Usuario^>^ usuarios = this->usuarioCRUD->GetAll();

		// Elimino todas las filas de la tabla
		this->formMain->usuariosTable->Rows->Clear();

		for each (Usuario^ usuario in usuarios) {
			// Si el usuario != del usuario logueado
			if (usuario->getId() != this->usuario->getId()) {
				this->formMain->usuariosTable->Rows->Add(
					usuario->getId(),
					usuario->getRol()->getRol(),
					usuario->getBloqueado() ? "Si" : "No",
					usuario->getRol()->getId() != 2 ? "-" : usuario->getMarcas().ToString(),
					usuario->getRol()->getId() != 2 ? "-" : usuario->getFallas().ToString()
				);
			}
		}
	}

	/// <summary>
	/// Dependiendo del Tag (con valor = true || false) del elemento asociado, se bloqueara o desbloqueara al usuario.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void bloquearUsuario(Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		if (btn == nullptr) {
			return;
		}

		bool bloquear = safe_cast<bool>(btn->Tag);

		if (this->formMain->usuariosTable->SelectedRows->Count > 0) {

			int usuarioId = (int) this->formMain->usuariosTable->SelectedRows[0]->Cells[0]->Value;

			if (this->usuarioCRUD->UpdateBloqueado(usuarioId, bloquear)) {
				this->formMain->usuariosTable->SelectedRows[0]->Cells[2]->Value = bloquear ? "Si" : "No";

				if (!bloquear) {
					Usuario^ usuario = this->usuarioCRUD->GetByID(usuarioId);
					usuario->setFallas(0);
					this->usuarioCRUD->UpdateMarcasYFallas(usuario);
				}
			}
			else {
				MessageBox::Show(this->formMain, "No se ha podido modificar el bloqueo del usuario seleccionado");
			}
		}
	}
	/// <summary>
	/// Actualiza la contraseña de un usuario para que sea igual a su ID.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void resetPassword(Object^ sender, System::EventArgs^ e) {
		if (this->formMain->usuariosTable->SelectedRows->Count > 0) {

			int usuarioId = (int)this->formMain->usuariosTable->SelectedRows[0]->Cells[0]->Value;

			if (this->usuarioCRUD->ResetPassword(usuarioId)) {
				MessageBox::Show(this->formMain, "Contraseña blanqueada exitosamente");
			}
			else {
				MessageBox::Show(this->formMain, "No se ha podido blanquear la contraseña del usuario seleccionado");
			}
		}
	}
	/// <summary>
	/// Carga y muestra el formulario para crear usuarios.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void showCrearUsuarioForm(Object^ sender, System::EventArgs^ e) {
		if (this->formCrearUsuario == nullptr) {
			this->formCrearUsuario = gcnew CrearUsuario();
		}

		this->formCrearUsuario->rolComboBox->Items->Clear();

		for each (Rol ^ rol in this->rolCRUD->GetAll()) {
			this->formCrearUsuario->rolComboBox->Items->Add(rol->getRol());
		}

		this->formCrearUsuario->crearBtn->Click += gcnew System::EventHandler(this, &Controller::createUsuario);
		this->formCrearUsuario->FormClosing += gcnew FormClosingEventHandler(this, &Controller::onCloseFormCrearUsuario);

		this->formCrearUsuario->Show();
	}
	/// <summary>
	/// Funcionalidad asociada al formulario para crear usuarios. Toma el rol asignado, crea un nuevo usuario y actualiza la tabla pertinente.
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	Void createUsuario(Object^ sender, System::EventArgs^ e) {
		if (this->formCrearUsuario->rolComboBox->SelectedItem != nullptr) {
			String^ selectedRol = safe_cast<String^>(this->formCrearUsuario->rolComboBox->SelectedItem);

			for each (Rol ^ rol in this->rolCRUD->GetAll()) {
				if (rol->getRol() == selectedRol) {
					Usuario^ newUsuario = gcnew Usuario();
					newUsuario->setRol(rol);
					bool created = this->usuarioCRUD->Crear(newUsuario);

					if (created) {
						this->updateUsuariosTable();
						MessageBox::Show(this->formCrearUsuario, "El usuario ha sido creado exitosamente");
						return;
					}
				}
			}
		}
		MessageBox::Show(this->formCrearUsuario, "No se ha podido crear el usuario");
	}

	Void loadTicketsTab(Object^ sender, System::EventArgs^ e) {
		this->updateTicketsTable();

		this->formMain->reopenAdminBtn->Tag = true;
		this->formMain->reopenAdminBtn->Click += gcnew System::EventHandler(this, &Controller::reopenTicket);

		this->formMain->estadoComboBox->SelectedIndex = 0;
		this->formMain->estadoComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Controller::filterTicketsByEstado);

		this->formMain->ticketsTable->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Controller::openVerTicketAdmin);

	}

	Void updateTicketsTable() {
		List<Ticket^>^ tickets = this->ticketCRUD->GetAll();

		// Elimino todas las filas de la tabla
		this->formMain->ticketsTable->Rows->Clear();

		for each (Ticket^ ticket in tickets) {
			this->formMain->ticketsTable->Rows->Add(
				ticket->getId(),
				ticket->getTitulo(),
				ticket->getCreador()->getId(),
				ticket->getEstado() != nullptr ? ticket->getEstado()->getNombre() : "No Atendido",
				ticket->getTecnico() != nullptr ? ticket->getTecnico()->getId().ToString() : "No asignado"
			);
		}

		this->formMain->ticketsTable->ClearSelection();
	}

	Void showCrearTicketForm(Object^ sender, System::EventArgs^ e) {
		if (this->formCrearTicket == nullptr) {
			this->formCrearTicket = gcnew CrearTicket();
		}

		this->formCrearTicket->crearTicketBtn->Click += gcnew System::EventHandler(this, &Controller::createTicket);
		this->formCrearTicket->FormClosing += gcnew FormClosingEventHandler(this, &Controller::onCloseFormCrearTicket);
		this->formCrearTicket->Show();
	}

	Void createTicket(Object^ sender, System::EventArgs^ e) {
		String^ titulo = this->formCrearTicket->tituloTB->Text;
		String^ descripcion = this->formCrearTicket->descripcionTB->Text;

		Ticket^ newTicket = gcnew Ticket(titulo, descripcion, this->usuario);
		if (this->ticketCRUD->Crear(newTicket)) {
			MessageBox::Show(this->formCrearTicket, "Ticket creado exitosamente!");
			this->formCrearTicket->tituloTB->Text = "";
			this->formCrearTicket->descripcionTB->Text = "";
			this->updateTrabajadorTicketTable();
		}
		else {
			MessageBox::Show(this->formCrearTicket, "No se ha podido crear el ticket.");
		}
	}

	Void onCloseFormCrearTicket(Object^ sender, FormClosingEventArgs^ e) {
		if (!closeCrearTicketForm) {
			e->Cancel = true;
			this->formCrearTicket->Hide();
		}
	}

	Void reopenTicket(Object^ sender, System::EventArgs^ e) {
		// Determinar el botón que llama y el origen de las filas seleccionadas
		Button^ btn = dynamic_cast<Button^>(sender);
		bool isAdmin = safe_cast<bool>(btn->Tag);
		auto selectedRows = isAdmin ? this->formMain->ticketsTable->SelectedRows : this->formMain->trabajadorTicketsTable->SelectedRows;

		// Validar si hay filas seleccionadas
		if (selectedRows->Count == 0) return;

		// Obtener el ID del ticket y el ID del técnico asignado
		int ticketId = (int)selectedRows[0]->Cells[0]->Value;
		int tecnicoId;

		try {
			// Obtener el ID del técnico desde la última celda
			tecnicoId = Convert::ToInt32(selectedRows[0]->Cells[selectedRows[0]->Cells->Count - 1]->Value);
		}
		catch (System::FormatException^) {
			MessageBox::Show(this->formMain, "El ticket ya se encuentra abierto");
			return;
		}

		// Verificar que el ticket esté marcado como "Resuelto" si no es admin
		if (!isAdmin && selectedRows[0]->Cells[2]->Value->ToString() != "Resuelto") {
			MessageBox::Show(this->formMain, "Por favor, espere a que el ticket haya sido marcado como 'Resuelto' por el técnico asignado.");
			return;
		}

		// Intentar actualizar el estado del ticket
		if (!ticketCRUD->updateTicket(ticketId, nullptr, 3)) {
			MessageBox::Show(this->formMain, "No se ha podido reabrir el ticket");
			return;
		}

		Usuario^ tecnico = this->usuarioCRUD->GetByID(tecnicoId);

		// Actualizar marcas y fallas, y tablas de los Tickets
		if (isAdmin) {
			// Comportamiento para Admin
			if (tecnico->getMarcas() == 1) {
				tecnico->setMarcas(0);
				tecnico->setFallas(tecnico->getFallas() + 1);
			}
			else {
				tecnico->setMarcas(1);
			}
			this->updateTicketsTable();
		}
		else {
			// Comportamiento para Trabajador
			tecnico->setFallas(tecnico->getFallas() + 1);
			this->updateTrabajadorTicketTable();
		}

		// Si el Tecnico no esta bloqueado
		if (tecnico->getFallas() <= 3 && tecnico->getBloqueado() == false) {
			// Si no se pudieron actualizar las marcas y fallas
			if (!this->usuarioCRUD->UpdateMarcasYFallas(tecnico)) {
				MessageBox::Show(this->formMain, "No se ha podido actualizar las fallas del técnico");
				return;
			}
			// Bloquear Tecnico si llego a las 3 fallas
			if (tecnico->getFallas() == 3) {
				this->usuarioCRUD->UpdateBloqueado(tecnicoId, true);
			}
			// Actualizar tabla de usuarios si usuario logueado es Admin
			if (isAdmin) {
				this->updateUsuariosTable();
			}
		}
		MessageBox::Show(this->formMain, "Ticket reabierto");
	}


	Void filterTicketsByEstado(Object^ sender, System::EventArgs^ e) {
		List<Ticket^>^ tickets = this->ticketCRUD->GetAll();
		int selectedIndex = this->formMain->estadoComboBox->SelectedIndex;

		// 1 = No Atendido
		if (selectedIndex == 1) {
			// Elimino todos los tickets no esten "No atendidos"
			for (int i = tickets->Count - 1; i >= 0; i--) { 
				if (tickets[i]->getEstado() != nullptr) {
					tickets->RemoveAt(i);
				}
			}
		}

		if (selectedIndex > 1) {
			// Elimino todos los tickets no atendidos y con estado diferente al seleccionado
			for (int i = tickets->Count - 1; i >= 0; i--) {
				if (tickets[i]->getEstado() == nullptr || tickets[i]->getEstado()->getId() != selectedIndex - 1) {
					tickets->RemoveAt(i);
				}
			}
		}

		// Limpio la tabla y actualizo con los datos filtrados
		this->formMain->ticketsTable->Rows->Clear();
		
		for each (Ticket ^ ticket in tickets) {
			this->formMain->ticketsTable->Rows->Add(
				ticket->getId(),
				ticket->getTitulo(),
				ticket->getCreador()->getId(),
				ticket->getEstado() != nullptr ? ticket->getEstado()->getNombre() : "No Atendido",
				ticket->getTecnico() != nullptr ? ticket->getTecnico()->getId().ToString() : "No asignado"
			);
		}

		this->formMain->ticketsTable->ClearSelection();
	}

	Void loadMyTicketsTab(Object^ sender, System::EventArgs^ e) {
		this->formMain->reopenBtn->Tag = false;
		
		this->formMain->agregarTicketBtn->Click += gcnew System::EventHandler(this, &Controller::showCrearTicketForm);
		this->formMain->reopenBtn->Click += gcnew System::EventHandler(this, &Controller::reopenTicket);
		this->formMain->finishedBtn->Click += gcnew System::EventHandler(this, &Controller::finishTicket);

		this->formMain->trabajadorTicketsTable->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Controller::takePendingTicket);


		this->updateTrabajadorTicketTable();
	}

	Void updateTrabajadorTicketTable() {
		List<Ticket^>^ tickets = this->ticketCRUD->GetAllFromUsuario(this->usuario->getId());

		this->formMain->trabajadorTicketsTable->Rows->Clear();

		for each (Ticket ^ ticket in tickets) {
			// No mostrar aquellos tickets que estan finalizados
			if (ticket->getEstado() != nullptr) {
				if (ticket->getEstado()->getId() == 4) {
					continue;
				}
			}

			this->formMain->trabajadorTicketsTable->Rows->Add(
				ticket->getId(),
				ticket->getTitulo(),
				ticket->getEstado() != nullptr ? ticket->getEstado()->getNombre() : "No Atendido",
				ticket->getTecnico() != nullptr ? ticket->getTecnico()->getId().ToString() : "No asignado"
			);
		}
		this->formMain->trabajadorTicketsTable->ClearSelection();
	}
	
	Void finishTicket(Object^ sender, System::EventArgs^ e) {
		auto selectedRows = this->formMain->trabajadorTicketsTable->SelectedRows;

		if (selectedRows->Count > 0) {
			try {
				int ticketId = Convert::ToInt32(selectedRows[0]->Cells[0]->Value);
				String^ estado = selectedRows[0]->Cells[2]->Value->ToString();

				// Si el ticket aun no esta resuelto
				if (estado != "Resuelto") {
					MessageBox::Show(this->formMain, "Por favor, espere a que el ticket haya sido marcado como 'Resuelto'.");
					return;
				}

				int tecnicoId = Convert::ToInt32(selectedRows[0]->Cells[3]->Value);
				Usuario^ tecnico = this->usuarioCRUD->GetByID(tecnicoId);


				// Si no se pudo actualizar el ticket
				if (!this->ticketCRUD->updateTicket(ticketId, tecnicoId, 4)) {
					MessageBox::Show(this->formMain, "No se ha podido marcar el Ticket como finalizado.");
					return;
				}

				// Si el tecnico resolvio un ticket reabierto y tenia fallas, se le descuenta 1
				if (this->ticketCRUD->wasReopend(ticketId) && tecnico->getFallas() > 0) {
					tecnico->setFallas(tecnico->getFallas() - 1);
					this->usuarioCRUD->UpdateMarcasYFallas(tecnico);
				}

				this->updateTrabajadorTicketTable();
				MessageBox::Show(this->formMain, "Nos alegra que tu inconveniente haya sido solucionado.");
			}
			catch (FormatException^ e) {
				MessageBox::Show(this->formMain, "Ha ocurrido un error al intentar marcar el ticket como finalizado: " + e->Message);
				return;
			}

		}
	}

	Void loadTicketsPendientesTab() {
		this->updateTicketsPendientesTable();
		this->formMain->pendingTicketsTable->CellClick += gcnew DataGridViewCellEventHandler(this, &Controller::takePendingTicket);
	}

	Void updateTicketsPendientesTable() {
		List<Ticket^>^ tickets = this->ticketCRUD->GetAll();

		this->formMain->pendingTicketsTable->Rows->Clear();

		for each (Ticket ^ ticket in tickets) {
			// No mostrar aquellos tickets que estan tomados
			if (ticket->getEstado() == nullptr || ticket->getEstado()->getId() == 3) {
				this->formMain->pendingTicketsTable->Rows->Add(
					ticket->getId(),
					ticket->getTitulo(),
					"Tomar"
				);
			}
		}

		this->formMain->pendingTicketsTable->ClearSelection();
	}

	Void takePendingTicket(Object^ sender, DataGridViewCellEventArgs^ e) {
		// Check if the click is in the button column 
		int buttonColumnIndex = 2;
		if (e->ColumnIndex == buttonColumnIndex && e->RowIndex >= 0) {
			// Retrieve the button cell value or perform the desired action
			int rowIndex = e->RowIndex;
			int ticketId = (int) this->formMain->pendingTicketsTable->Rows[rowIndex]->Cells[0]->Value;
			int takenTickets = this->usuarioCRUD->takenTickets(this->usuario->getId());

			if (takenTickets == -1) return;

			if (takenTickets >= 3) {
				MessageBox::Show(this->formMain, "Ya ha alcanzado el limite de Tickets que puede atender al mismo tiempo.");
				return;
			}

			if (!this->ticketCRUD->updateTicket(ticketId, this->usuario->getId(), 1)) {
				MessageBox::Show(this->formMain, "No se ha podido tomar el ticket.");
				return;
			}

			this->updateTicketsPendientesTable();
			this->updateMiPerfilTable();
		}
		else if (e->RowIndex >= 0) {
			this->openVerTicket(sender, e);
		}

	}

	Void openVerTicket(Object^ sender, DataGridViewCellEventArgs^ e) {
		DataGridView^ table = dynamic_cast<DataGridView^>(sender);

		if (this->formVerTicket == nullptr) {
			this->formVerTicket = gcnew VerTicket();
			this->formVerTicket->FormClosing += gcnew FormClosingEventHandler(this, &Controller::onCloseVerTicket);
		}

		if (e->RowIndex >= 0) {
			int ticketId = Convert::ToInt32(table->Rows[e->RowIndex]->Cells[0]->Value);
			Ticket^ ticket = this->ticketCRUD->GetById(ticketId);

			// Seteo los campos
			this->formVerTicket->tituloTB->Text = ticket->getTitulo();
			this->formVerTicket->estadoTB->Text = ticket->getEstado() != nullptr ? ticket->getEstado()->getNombre() : "No atendido";
			this->formVerTicket->creadorTB->Text = ticket->getCreador()->getId().ToString();
			this->formVerTicket->TecnicoTB->Text = ticket->getTecnico() != nullptr ? ticket->getTecnico()->getId().ToString() : "No asignado";
			this->formVerTicket->descripcionTB->Text = ticket->getDescripcion();

			this->formVerTicket->Show();
		}

	}

	Void onCloseVerTicket(Object^ sender, FormClosingEventArgs^ e) {
		if (!closeVerTicketForm) {
			e->Cancel = true;
			this->formVerTicket->Hide();
		}
	}

	Void onCloseVerTicketAdmin(Object^ sender, FormClosingEventArgs^ e) {
		if (!closeVerTicketAdminForm) {
			e->Cancel = true;
			this->formVerTicketAdmin->Hide();
		}
	}

	Void loadMiPerfil() {
		this->updateMiPerfilTable();

		this->formMain->marcas->Text = this->usuario->getMarcas().ToString();
		this->formMain->fallas->Text = this->usuario->getFallas().ToString();

		this->formMain->miPerfilTable->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Controller::openVerTicket);
		this->formMain->resolverBtn->Click += gcnew System::EventHandler(this, &Controller::resolverTicket);
		this->formMain->solicitarReabrirBtn->Click += gcnew System::EventHandler(this, &Controller::solicitarReabrirTicket);

	}

	Void updateMiPerfilTable() {
		List<Ticket^>^ tickets = this->ticketCRUD->GetAllTakenById(this->usuario->getId());

		this->formMain->miPerfilTable->Rows->Clear();

		for each (Ticket ^ ticket in tickets) {
			if (ticket->getEstado())

			this->formMain->miPerfilTable->Rows->Add(
				ticket->getId(),
				ticket->getTitulo(),
				ticket->getEstado()->getNombre(),
				ticket->getCreador()->getId()
			);
		}
	}

	Void resolverTicket(Object^ sender, System::EventArgs^ e) {
		auto selectedRows = this->formMain->miPerfilTable->SelectedRows;

		if (selectedRows->Count > 0) {
			int ticketId = (int) selectedRows[0]->Cells[0]->Value;
			
			if (!this->ticketCRUD->updateTicket(ticketId, this->usuario->getId(), 2)) {
				MessageBox::Show(this->formMain, "No se pudo marcar el ticket como resuelto");
				return;
			}

			MessageBox::Show(this->formMain, "¡Felicitaciones por resolver un ticket!");
			this->updateMiPerfilTable();
		}

	}

	Void solicitarDesbloqueo(Object^ sender, System::EventArgs^ e) {
		try {
			int id = Convert::ToInt32(this->formLogin->idInput->Text);
			Usuario^ usuario = this->usuarioCRUD->GetByID(id);

			// Si no existe un usuario con el ID ingresado
			if (usuario == nullptr) {
				MessageBox::Show(this->formLogin, "No existe un usuario con el ID proporcionado");
				return;
			}

			// Si el usuario no se encuentra bloqueado
			if (usuario->getBloqueado() != true) {
				MessageBox::Show(this->formLogin, "Usted no se encuentra bloqueado en este momento");
				return;
			}

			String^ mensaje = "Nueva solicitud de desbloqueo: ID n° " + id.ToString();
			Notificacion^ notificacion = gcnew Notificacion(mensaje, usuario);
			int created = this->notificacionCRUD->Crear(notificacion);

			if (created == 1) {
				MessageBox::Show(this->formLogin, "Se ha enviado una solicitud de desbloqueo al administrador");
			}
			else if (created == -1) {
				MessageBox::Show(this->formLogin, "La solicitud ya fue enviada, porfavor espere hasta que su cuenta sea desbloqueada");
			}
			else {
				MessageBox::Show(this->formLogin, "No se ha podido enviar una solicitud de desbloqueo al administrado");
			}
		}
		catch (FormatException^ e) {
			MessageBox::Show(this->formLogin, "Porfavor ingrese su ID en el campo correspondiente para solicitar el desbloqueo de su cuenta.");
		}
	}

	Void solicitarReabrirTicket(Object^ sender, System::EventArgs^ e) {
		auto selectedRows = this->formMain->miPerfilTable->SelectedRows;

		if (selectedRows->Count > 0) {
			int ticketId = (int)selectedRows[0]->Cells[0]->Value;
			String^ mensaje = "Técnico " + this->usuario->getId().ToString() + " solicita reabrir el ticket con ID " + ticketId.ToString();
			Notificacion^ notificacion = gcnew Notificacion(mensaje, this->usuario);
			int created = this->notificacionCRUD->Crear(notificacion);

			if (created == 0) {
				MessageBox::Show(this->formMain, "No se pudo realizar la solicitud para reabrir el ticket");
				return;
			}
			else if (created == -1) {
				MessageBox::Show(this->formMain, "La solicitud ya fue realizada, porfavor espere a que el administrado la atienda");
				return;
			}
			else {
				MessageBox::Show(this->formMain, "Se ha solicitado al administrador que reabra el ticket seleccionado");
			}
		}
	}

	Void loadNotificacionesTab() {
		if (this->notificacionesIds == nullptr) {
			this->notificacionesIds = gcnew List<int>();
		}

		this->updateNodeTree();
		this->formMain->treeView->NodeMouseDoubleClick += gcnew TreeNodeMouseClickEventHandler(this, &Controller::changeNodeStatus);
		this->formMain->updateNodesBtn->Click += gcnew System::EventHandler(this, &Controller::updateNotificaciones);
	}

	Void updateNodeTree() {
		this->formMain->treeView->Nodes->Clear();

		for each (Notificacion ^ notificacion in this->notificacionCRUD->GetAllNotSeen()) {
			// Creo el nodo, modifico el color del mensaje y añado ID de la notificacion como Tag
			TreeNode^ node = gcnew TreeNode(notificacion->getMensaje());
			node->ForeColor = Color::Gray;
			node->Tag = notificacion->getId();

			// Añado el nodo al TreeView
			this->formMain->treeView->Nodes->Add(node);
		}
	}

	Void changeNodeStatus(Object^ sender, TreeNodeMouseClickEventArgs^ e) {
		// Dependiendo del color del nodo pasa a visto o no visto
		if (e->Node->ForeColor == Color::Green) {
			e->Node->ForeColor = Color::Gray;
			this->notificacionesIds->Remove((int)e->Node->Tag);
		}
		else if (e->Node->ForeColor == Color::Gray) {
			e->Node->ForeColor = Color::Green;
			this->notificacionesIds->Add((int)e->Node->Tag);
		}
	}

	Void updateNotificaciones(Object^ sender, System::EventArgs^ e) {
		this->notificacionCRUD->UpdateVisto(this->notificacionesIds);
		this->notificacionesIds->Clear();

		this->updateNodeTree();
	}

	Void openVerTicketAdmin(Object^ sender, DataGridViewCellEventArgs^ e) {
		DataGridView^ table = dynamic_cast<DataGridView^>(sender);

		if (this->formVerTicketAdmin == nullptr) {
			this->formVerTicketAdmin = gcnew VerTicketAdmin();
			this->formVerTicketAdmin->FormClosing += gcnew FormClosingEventHandler(this, &Controller::onCloseVerTicketAdmin);
		}

		if (e->RowIndex >= 0) {
			int ticketId = Convert::ToInt32(table->Rows[e->RowIndex]->Cells[0]->Value);
			Ticket^ ticket = this->ticketCRUD->GetById(ticketId);
			List<int>^ tecnicosPrevios = this->ticketCRUD->GetAllTecnicosFromTicket(ticketId);
			if (ticket->getTecnico() != nullptr) tecnicosPrevios->Remove(ticket->getTecnico()->getId());

			// Seteo los campos
			this->formVerTicketAdmin->tituloTB->Text = ticket->getTitulo();
			this->formVerTicketAdmin->estadoTB->Text = ticket->getEstado() != nullptr ? ticket->getEstado()->getNombre() : "No atendido";
			this->formVerTicketAdmin->reopenedCB->Checked = this->ticketCRUD->wasReopend(ticketId);
			this->formVerTicketAdmin->creadorTB->Text = ticket->getCreador()->getId().ToString();
			this->formVerTicketAdmin->TecnicoTB->Text = ticket->getTecnico() != nullptr ? ticket->getTecnico()->getId().ToString() : "No asignado";
			this->formVerTicketAdmin->descripcionTB->Text = ticket->getDescripcion();

			this->formVerTicketAdmin->tecnicosComboBox->Items->Clear();
			for each (int tecnico in tecnicosPrevios) {
				if (ticket->getTecnico() != nullptr && ticket->getTecnico()->getId() == tecnico) continue;

				this->formVerTicketAdmin->tecnicosComboBox->Items->Add(tecnico);
			}

			this->formVerTicketAdmin->Show();
		}

	}

};