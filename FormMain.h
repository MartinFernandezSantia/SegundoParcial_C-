#pragma once

namespace SegundoParcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; // Center the form
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	protected:
	public: System::Windows::Forms::TabControl^ tabControl1;
	private:
	public: System::Windows::Forms::TabPage^ tabPage1;


	private:

	public:






	private:

	private:

	private:
	public: System::Windows::Forms::TabPage^ tabPage3;
	public: System::Windows::Forms::DataGridView^ pendingTicketsTable;


	public:



	public: System::Windows::Forms::TabPage^ tabPage4;
	public: System::Windows::Forms::Label^ fallas;
	public: System::Windows::Forms::Label^ marcas;

	public:
	private:


	public:

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Button^ solicitarReabrirBtn;
	private:

	public: System::Windows::Forms::Button^ resolverBtn;
	private:

	public: System::Windows::Forms::DataGridView^ miPerfilTable;

	public:

	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	public: System::Windows::Forms::TabPage^ tabPage5;
	public: System::Windows::Forms::Button^ blanquearBtn;
	public: System::Windows::Forms::Button^ agregarUsuarioBtn;
	private:


	public: System::Windows::Forms::Button^ bloquearBtn;
	public: System::Windows::Forms::Button^ desbloquearBtn;




	public:

	public:





	public: System::Windows::Forms::TabPage^ tabPage6;
	public: System::Windows::Forms::ComboBox^ estadoComboBox;

	public:
	private:

	public:
	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Button^ reopenAdminBtn;
	private:

	public: System::Windows::Forms::DataGridView^ ticketsTable;

	public:
	private:

	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	public: System::Windows::Forms::TabPage^ tabPage7;
public: System::Windows::Forms::TreeView^ treeView;


public:
	private:

	public:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ optionsToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^ changePassTSMI;
private:
public: System::Windows::Forms::ToolStripMenuItem^ logoutTSMI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
public: System::Windows::Forms::DataGridView^ usuariosTable;
public: System::Windows::Forms::DataGridView^ trabajadorTicketsTable;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
public:
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TItulo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tecnico;
public: System::Windows::Forms::Button^ agregarTicketBtn;
public: System::Windows::Forms::Button^ reopenBtn;

public: System::Windows::Forms::Button^ finishedBtn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ id2;
public:
private: System::Windows::Forms::DataGridViewTextBoxColumn^ titulo2;
private: System::Windows::Forms::DataGridViewButtonColumn^ Column2;
public: System::Windows::Forms::Button^ updateNodesBtn;
private:

private:

private:

private:




private:
private:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->reopenBtn = (gcnew System::Windows::Forms::Button());
			this->finishedBtn = (gcnew System::Windows::Forms::Button());
			this->trabajadorTicketsTable = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TItulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tecnico = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->agregarTicketBtn = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pendingTicketsTable = (gcnew System::Windows::Forms::DataGridView());
			this->id2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->titulo2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->fallas = (gcnew System::Windows::Forms::Label());
			this->marcas = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->solicitarReabrirBtn = (gcnew System::Windows::Forms::Button());
			this->resolverBtn = (gcnew System::Windows::Forms::Button());
			this->miPerfilTable = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->blanquearBtn = (gcnew System::Windows::Forms::Button());
			this->agregarUsuarioBtn = (gcnew System::Windows::Forms::Button());
			this->bloquearBtn = (gcnew System::Windows::Forms::Button());
			this->desbloquearBtn = (gcnew System::Windows::Forms::Button());
			this->usuariosTable = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->estadoComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->reopenAdminBtn = (gcnew System::Windows::Forms::Button());
			this->ticketsTable = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->treeView = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePassTSMI = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutTSMI = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateNodesBtn = (gcnew System::Windows::Forms::Button());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trabajadorTicketsTable))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pendingTicketsTable))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->miPerfilTable))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usuariosTable))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ticketsTable))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->tabControl1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(708, 356);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(708, 386);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(708, 356);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->reopenBtn);
			this->tabPage1->Controls->Add(this->finishedBtn);
			this->tabPage1->Controls->Add(this->trabajadorTicketsTable);
			this->tabPage1->Controls->Add(this->agregarTicketBtn);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(700, 329);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Mis Tickets";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// reopenBtn
			// 
			this->reopenBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reopenBtn->BackColor = System::Drawing::Color::DarkCyan;
			this->reopenBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->reopenBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reopenBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->reopenBtn->Location = System::Drawing::Point(173, 7);
			this->reopenBtn->Margin = System::Windows::Forms::Padding(4);
			this->reopenBtn->Name = L"reopenBtn";
			this->reopenBtn->Size = System::Drawing::Size(146, 34);
			this->reopenBtn->TabIndex = 11;
			this->reopenBtn->Text = L"Reabrir";
			this->reopenBtn->UseVisualStyleBackColor = false;
			// 
			// finishedBtn
			// 
			this->finishedBtn->BackColor = System::Drawing::Color::Green;
			this->finishedBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->finishedBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finishedBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->finishedBtn->Location = System::Drawing::Point(9, 7);
			this->finishedBtn->Margin = System::Windows::Forms::Padding(4);
			this->finishedBtn->Name = L"finishedBtn";
			this->finishedBtn->Size = System::Drawing::Size(146, 34);
			this->finishedBtn->TabIndex = 10;
			this->finishedBtn->Text = L"Finalizar";
			this->finishedBtn->UseVisualStyleBackColor = false;
			// 
			// trabajadorTicketsTable
			// 
			this->trabajadorTicketsTable->AllowUserToAddRows = false;
			this->trabajadorTicketsTable->AllowUserToDeleteRows = false;
			this->trabajadorTicketsTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->trabajadorTicketsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->trabajadorTicketsTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID,
					this->TItulo, this->Estado, this->Tecnico
			});
			this->trabajadorTicketsTable->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->trabajadorTicketsTable->Location = System::Drawing::Point(3, 51);
			this->trabajadorTicketsTable->Name = L"trabajadorTicketsTable";
			this->trabajadorTicketsTable->ReadOnly = true;
			this->trabajadorTicketsTable->RowHeadersVisible = false;
			this->trabajadorTicketsTable->RowHeadersWidth = 51;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->trabajadorTicketsTable->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->trabajadorTicketsTable->RowTemplate->Height = 24;
			this->trabajadorTicketsTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->trabajadorTicketsTable->Size = System::Drawing::Size(694, 275);
			this->trabajadorTicketsTable->TabIndex = 8;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// TItulo
			// 
			this->TItulo->HeaderText = L"Titulo";
			this->TItulo->MinimumWidth = 6;
			this->TItulo->Name = L"TItulo";
			this->TItulo->ReadOnly = true;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->ReadOnly = true;
			// 
			// Tecnico
			// 
			this->Tecnico->HeaderText = L"Técnico asignado";
			this->Tecnico->MinimumWidth = 6;
			this->Tecnico->Name = L"Tecnico";
			this->Tecnico->ReadOnly = true;
			// 
			// agregarTicketBtn
			// 
			this->agregarTicketBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->agregarTicketBtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->agregarTicketBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->agregarTicketBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->agregarTicketBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->agregarTicketBtn->Location = System::Drawing::Point(547, 7);
			this->agregarTicketBtn->Margin = System::Windows::Forms::Padding(4);
			this->agregarTicketBtn->Name = L"agregarTicketBtn";
			this->agregarTicketBtn->Size = System::Drawing::Size(146, 34);
			this->agregarTicketBtn->TabIndex = 9;
			this->agregarTicketBtn->Text = L" Agregar ticket ";
			this->agregarTicketBtn->UseVisualStyleBackColor = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pendingTicketsTable);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(700, 329);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Tickets Pendientes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pendingTicketsTable
			// 
			this->pendingTicketsTable->AllowUserToAddRows = false;
			this->pendingTicketsTable->AllowUserToDeleteRows = false;
			this->pendingTicketsTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->pendingTicketsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->pendingTicketsTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->id2,
					this->titulo2, this->Column2
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->pendingTicketsTable->DefaultCellStyle = dataGridViewCellStyle7;
			this->pendingTicketsTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pendingTicketsTable->Location = System::Drawing::Point(3, 3);
			this->pendingTicketsTable->Name = L"pendingTicketsTable";
			this->pendingTicketsTable->ReadOnly = true;
			this->pendingTicketsTable->RowHeadersVisible = false;
			this->pendingTicketsTable->RowHeadersWidth = 51;
			this->pendingTicketsTable->RowTemplate->Height = 24;
			this->pendingTicketsTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->pendingTicketsTable->Size = System::Drawing::Size(694, 323);
			this->pendingTicketsTable->TabIndex = 0;
			// 
			// id2
			// 
			this->id2->HeaderText = L"ID";
			this->id2->MinimumWidth = 6;
			this->id2->Name = L"id2";
			this->id2->ReadOnly = true;
			// 
			// titulo2
			// 
			this->titulo2->HeaderText = L"Titulo";
			this->titulo2->MinimumWidth = 6;
			this->titulo2->Name = L"titulo2";
			this->titulo2->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tomar Ticket";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Text = L"Tomar";
			this->Column2->ToolTipText = L"Tomar";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->fallas);
			this->tabPage4->Controls->Add(this->marcas);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->solicitarReabrirBtn);
			this->tabPage4->Controls->Add(this->resolverBtn);
			this->tabPage4->Controls->Add(this->miPerfilTable);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(700, 329);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Mi Perfil";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// fallas
			// 
			this->fallas->AutoSize = true;
			this->fallas->Location = System::Drawing::Point(146, 298);
			this->fallas->Name = L"fallas";
			this->fallas->Size = System::Drawing::Size(14, 16);
			this->fallas->TabIndex = 13;
			this->fallas->Text = L"0";
			// 
			// marcas
			// 
			this->marcas->AutoSize = true;
			this->marcas->Location = System::Drawing::Point(146, 278);
			this->marcas->Name = L"marcas";
			this->marcas->Size = System::Drawing::Size(14, 16);
			this->marcas->TabIndex = 12;
			this->marcas->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::OrangeRed;
			this->label6->Location = System::Drawing::Point(6, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Cantidad de Fallas :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(6, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Cantidad de Marcas :";
			// 
			// solicitarReabrirBtn
			// 
			this->solicitarReabrirBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->solicitarReabrirBtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->solicitarReabrirBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->solicitarReabrirBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->solicitarReabrirBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->solicitarReabrirBtn->Location = System::Drawing::Point(393, 277);
			this->solicitarReabrirBtn->Margin = System::Windows::Forms::Padding(4);
			this->solicitarReabrirBtn->Name = L"solicitarReabrirBtn";
			this->solicitarReabrirBtn->Size = System::Drawing::Size(146, 36);
			this->solicitarReabrirBtn->TabIndex = 9;
			this->solicitarReabrirBtn->Text = L"Reabrir";
			this->solicitarReabrirBtn->UseVisualStyleBackColor = false;
			// 
			// resolverBtn
			// 
			this->resolverBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->resolverBtn->BackColor = System::Drawing::Color::Green;
			this->resolverBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resolverBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resolverBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->resolverBtn->Location = System::Drawing::Point(547, 277);
			this->resolverBtn->Margin = System::Windows::Forms::Padding(4);
			this->resolverBtn->Name = L"resolverBtn";
			this->resolverBtn->Size = System::Drawing::Size(146, 36);
			this->resolverBtn->TabIndex = 8;
			this->resolverBtn->Text = L"Resuelto";
			this->resolverBtn->UseVisualStyleBackColor = false;
			// 
			// miPerfilTable
			// 
			this->miPerfilTable->AllowUserToAddRows = false;
			this->miPerfilTable->AllowUserToDeleteRows = false;
			this->miPerfilTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->miPerfilTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->miPerfilTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->miPerfilTable->DefaultCellStyle = dataGridViewCellStyle8;
			this->miPerfilTable->Dock = System::Windows::Forms::DockStyle::Top;
			this->miPerfilTable->Location = System::Drawing::Point(3, 3);
			this->miPerfilTable->Name = L"miPerfilTable";
			this->miPerfilTable->ReadOnly = true;
			this->miPerfilTable->RowHeadersVisible = false;
			this->miPerfilTable->RowHeadersWidth = 51;
			this->miPerfilTable->RowTemplate->Height = 24;
			this->miPerfilTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->miPerfilTable->Size = System::Drawing::Size(694, 268);
			this->miPerfilTable->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Titulo";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Estado";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Creador";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->blanquearBtn);
			this->tabPage5->Controls->Add(this->agregarUsuarioBtn);
			this->tabPage5->Controls->Add(this->bloquearBtn);
			this->tabPage5->Controls->Add(this->desbloquearBtn);
			this->tabPage5->Controls->Add(this->usuariosTable);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(700, 329);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Usuarios";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// blanquearBtn
			// 
			this->blanquearBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->blanquearBtn->BackColor = System::Drawing::Color::DarkCyan;
			this->blanquearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->blanquearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blanquearBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->blanquearBtn->Location = System::Drawing::Point(161, 277);
			this->blanquearBtn->Margin = System::Windows::Forms::Padding(4);
			this->blanquearBtn->Name = L"blanquearBtn";
			this->blanquearBtn->Size = System::Drawing::Size(146, 36);
			this->blanquearBtn->TabIndex = 13;
			this->blanquearBtn->Text = L"Blanquear";
			this->blanquearBtn->UseVisualStyleBackColor = false;
			// 
			// agregarUsuarioBtn
			// 
			this->agregarUsuarioBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->agregarUsuarioBtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->agregarUsuarioBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->agregarUsuarioBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->agregarUsuarioBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->agregarUsuarioBtn->Location = System::Drawing::Point(7, 277);
			this->agregarUsuarioBtn->Margin = System::Windows::Forms::Padding(4);
			this->agregarUsuarioBtn->Name = L"agregarUsuarioBtn";
			this->agregarUsuarioBtn->Size = System::Drawing::Size(146, 36);
			this->agregarUsuarioBtn->TabIndex = 12;
			this->agregarUsuarioBtn->Text = L"Agregar";
			this->agregarUsuarioBtn->UseVisualStyleBackColor = false;
			// 
			// bloquearBtn
			// 
			this->bloquearBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bloquearBtn->BackColor = System::Drawing::Color::Maroon;
			this->bloquearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bloquearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bloquearBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bloquearBtn->Location = System::Drawing::Point(391, 277);
			this->bloquearBtn->Margin = System::Windows::Forms::Padding(4);
			this->bloquearBtn->Name = L"bloquearBtn";
			this->bloquearBtn->Size = System::Drawing::Size(146, 36);
			this->bloquearBtn->TabIndex = 11;
			this->bloquearBtn->Text = L"Bloquear";
			this->bloquearBtn->UseVisualStyleBackColor = false;
			// 
			// desbloquearBtn
			// 
			this->desbloquearBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->desbloquearBtn->BackColor = System::Drawing::Color::Green;
			this->desbloquearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->desbloquearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->desbloquearBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->desbloquearBtn->Location = System::Drawing::Point(545, 277);
			this->desbloquearBtn->Margin = System::Windows::Forms::Padding(4);
			this->desbloquearBtn->Name = L"desbloquearBtn";
			this->desbloquearBtn->Size = System::Drawing::Size(146, 36);
			this->desbloquearBtn->TabIndex = 10;
			this->desbloquearBtn->Text = L"Desbloquear";
			this->desbloquearBtn->UseVisualStyleBackColor = false;
			// 
			// usuariosTable
			// 
			this->usuariosTable->AllowUserToAddRows = false;
			this->usuariosTable->AllowUserToDeleteRows = false;
			this->usuariosTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->usuariosTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->usuariosTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->Column1, this->Column3
			});
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->usuariosTable->DefaultCellStyle = dataGridViewCellStyle9;
			this->usuariosTable->Dock = System::Windows::Forms::DockStyle::Top;
			this->usuariosTable->Location = System::Drawing::Point(3, 3);
			this->usuariosTable->MultiSelect = false;
			this->usuariosTable->Name = L"usuariosTable";
			this->usuariosTable->ReadOnly = true;
			this->usuariosTable->RowHeadersVisible = false;
			this->usuariosTable->RowHeadersWidth = 51;
			this->usuariosTable->RowTemplate->Height = 24;
			this->usuariosTable->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->usuariosTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->usuariosTable->ShowEditingIcon = false;
			this->usuariosTable->Size = System::Drawing::Size(694, 268);
			this->usuariosTable->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Rol";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Bloqueado";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Marcas";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fallas";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->estadoComboBox);
			this->tabPage6->Controls->Add(this->label9);
			this->tabPage6->Controls->Add(this->reopenAdminBtn);
			this->tabPage6->Controls->Add(this->ticketsTable);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(700, 329);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Tickets";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// estadoComboBox
			// 
			this->estadoComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->estadoComboBox->FormattingEnabled = true;
			this->estadoComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Todos", L"No atendido", L"Atendido", L"Resuelto",
					L"Reabierto", L"Finalizado"
			});
			this->estadoComboBox->Location = System::Drawing::Point(64, 285);
			this->estadoComboBox->Name = L"estadoComboBox";
			this->estadoComboBox->Size = System::Drawing::Size(121, 24);
			this->estadoComboBox->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 293);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Estado";
			// 
			// reopenAdminBtn
			// 
			this->reopenAdminBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->reopenAdminBtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->reopenAdminBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->reopenAdminBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reopenAdminBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->reopenAdminBtn->Location = System::Drawing::Point(547, 276);
			this->reopenAdminBtn->Margin = System::Windows::Forms::Padding(4);
			this->reopenAdminBtn->Name = L"reopenAdminBtn";
			this->reopenAdminBtn->Size = System::Drawing::Size(146, 36);
			this->reopenAdminBtn->TabIndex = 14;
			this->reopenAdminBtn->Text = L"Reabrir";
			this->reopenAdminBtn->UseVisualStyleBackColor = false;
			// 
			// ticketsTable
			// 
			this->ticketsTable->AllowUserToAddRows = false;
			this->ticketsTable->AllowUserToDeleteRows = false;
			this->ticketsTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ticketsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ticketsTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ticketsTable->DefaultCellStyle = dataGridViewCellStyle10;
			this->ticketsTable->Dock = System::Windows::Forms::DockStyle::Top;
			this->ticketsTable->Location = System::Drawing::Point(3, 3);
			this->ticketsTable->Name = L"ticketsTable";
			this->ticketsTable->ReadOnly = true;
			this->ticketsTable->RowHeadersVisible = false;
			this->ticketsTable->RowHeadersWidth = 51;
			this->ticketsTable->RowTemplate->Height = 24;
			this->ticketsTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ticketsTable->Size = System::Drawing::Size(694, 268);
			this->ticketsTable->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Titulo";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Creador";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Estado";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Tecnico";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->updateNodesBtn);
			this->tabPage7->Controls->Add(this->treeView);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(700, 327);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Notificaciones";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// treeView
			// 
			this->treeView->Dock = System::Windows::Forms::DockStyle::Top;
			this->treeView->Location = System::Drawing::Point(3, 3);
			this->treeView->Name = L"treeView";
			this->treeView->Size = System::Drawing::Size(694, 279);
			this->treeView->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->optionsToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(708, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->changePassTSMI,
					this->logoutTSMI
			});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(85, 26);
			this->optionsToolStripMenuItem->Text = L"Opciones";
			// 
			// changePassTSMI
			// 
			this->changePassTSMI->Name = L"changePassTSMI";
			this->changePassTSMI->Size = System::Drawing::Size(224, 26);
			this->changePassTSMI->Text = L"Cambiar contraseña";
			// 
			// logoutTSMI
			// 
			this->logoutTSMI->Name = L"logoutTSMI";
			this->logoutTSMI->Size = System::Drawing::Size(224, 26);
			this->logoutTSMI->Text = L"Cerrar sesión";
			// 
			// updateNodesBtn
			// 
			this->updateNodesBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->updateNodesBtn->BackColor = System::Drawing::Color::Green;
			this->updateNodesBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->updateNodesBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateNodesBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->updateNodesBtn->Location = System::Drawing::Point(550, 289);
			this->updateNodesBtn->Margin = System::Windows::Forms::Padding(4);
			this->updateNodesBtn->Name = L"updateNodesBtn";
			this->updateNodesBtn->Size = System::Drawing::Size(146, 36);
			this->updateNodesBtn->TabIndex = 9;
			this->updateNodesBtn->Text = L"Actualizar";
			this->updateNodesBtn->UseVisualStyleBackColor = false;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 386);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FormMain";
			this->Text = L"MyForm";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trabajadorTicketsTable))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pendingTicketsTable))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->miPerfilTable))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usuariosTable))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ticketsTable))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}

	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Verifica cuál pestaña está seleccionada
		switch (this->tabControl1->SelectedIndex) {
		case 0:  // Pestaña 1
			this->Size = System::Drawing::Size(680, 400);  // Tamaño personalizado para la pestaña 1
			break;
		case 1:  // Pestaña 2
			this->Size = System::Drawing::Size(270, 350);  // Tamaño personalizado para la pestaña 2
			break;
		case 2:  // Pestaña 3
			this->tabControl1->Size = System::Drawing::Size(500, 350);  // Tamaño personalizado para la pestaña 3
			break;
		default:
			break;
		}
	}
};
}
