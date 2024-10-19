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
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;





	private: System::Windows::Forms::TabPage^ tabPage2;

	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	public:
	public: System::Windows::Forms::TextBox^ textBox2;
	private:
	private: System::Windows::Forms::Label^ label1;
	public:
	public: System::Windows::Forms::TextBox^ textBox1;
	private:
	private: System::Windows::Forms::Label^ label2;
	public:
	public: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	public:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TItulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tecnico;
	public: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ titulo2;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	public: System::Windows::Forms::Button^ button2;
	private:
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	public:




	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	public: System::Windows::Forms::Button^ button6;
	private:
	public: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TabPage^ tabPage6;
	public:

	private:

	public: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
public: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::TreeView^ treeView1;
public:

private:
	public:
	private:








	public:
	private:


	private:

	public:




	public:

	private:

	public:




	private:
	private:

	protected:



	protected:

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
			System::Windows::Forms::TreeNode^ treeNode53 = (gcnew System::Windows::Forms::TreeNode(L"Nodo0"));
			System::Windows::Forms::TreeNode^ treeNode54 = (gcnew System::Windows::Forms::TreeNode(L"Nodo1"));
			System::Windows::Forms::TreeNode^ treeNode55 = (gcnew System::Windows::Forms::TreeNode(L"Nodo2"));
			System::Windows::Forms::TreeNode^ treeNode56 = (gcnew System::Windows::Forms::TreeNode(L"Nodo3"));
			System::Windows::Forms::TreeNode^ treeNode57 = (gcnew System::Windows::Forms::TreeNode(L"Nodo4"));
			System::Windows::Forms::TreeNode^ treeNode58 = (gcnew System::Windows::Forms::TreeNode(L"Nodo0"));
			System::Windows::Forms::TreeNode^ treeNode59 = (gcnew System::Windows::Forms::TreeNode(L"Nodo1"));
			System::Windows::Forms::TreeNode^ treeNode60 = (gcnew System::Windows::Forms::TreeNode(L"Nodo2"));
			System::Windows::Forms::TreeNode^ treeNode61 = (gcnew System::Windows::Forms::TreeNode(L"Nodo3"));
			System::Windows::Forms::TreeNode^ treeNode62 = (gcnew System::Windows::Forms::TreeNode(L"Nodo4"));
			System::Windows::Forms::TreeNode^ treeNode63 = (gcnew System::Windows::Forms::TreeNode(L"Nodo5"));
			System::Windows::Forms::TreeNode^ treeNode64 = (gcnew System::Windows::Forms::TreeNode(L"Nodo6"));
			System::Windows::Forms::TreeNode^ treeNode65 = (gcnew System::Windows::Forms::TreeNode(L"Nodo7"));
			System::Windows::Forms::TreeNode^ treeNode66 = (gcnew System::Windows::Forms::TreeNode(L"Nodo8"));
			System::Windows::Forms::TreeNode^ treeNode67 = (gcnew System::Windows::Forms::TreeNode(L"Nodo9"));
			System::Windows::Forms::TreeNode^ treeNode68 = (gcnew System::Windows::Forms::TreeNode(L"Nodo10"));
			System::Windows::Forms::TreeNode^ treeNode69 = (gcnew System::Windows::Forms::TreeNode(L"Nodo11"));
			System::Windows::Forms::TreeNode^ treeNode70 = (gcnew System::Windows::Forms::TreeNode(L"Nodo12"));
			System::Windows::Forms::TreeNode^ treeNode71 = (gcnew System::Windows::Forms::TreeNode(L"Nodo13"));
			System::Windows::Forms::TreeNode^ treeNode72 = (gcnew System::Windows::Forms::TreeNode(L"Nodo14"));
			System::Windows::Forms::TreeNode^ treeNode73 = (gcnew System::Windows::Forms::TreeNode(L"Nodo15"));
			System::Windows::Forms::TreeNode^ treeNode74 = (gcnew System::Windows::Forms::TreeNode(L"Nodo16"));
			System::Windows::Forms::TreeNode^ treeNode75 = (gcnew System::Windows::Forms::TreeNode(L"Nodo17"));
			System::Windows::Forms::TreeNode^ treeNode76 = (gcnew System::Windows::Forms::TreeNode(L"Nodo18"));
			System::Windows::Forms::TreeNode^ treeNode77 = (gcnew System::Windows::Forms::TreeNode(L"Nodo19"));
			System::Windows::Forms::TreeNode^ treeNode78 = (gcnew System::Windows::Forms::TreeNode(L"Nodo20"));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TItulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tecnico = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->id2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->titulo2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(662, 353);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(654, 324);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Mis Tickets";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->registerButton, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.10256F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 85.89744F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(648, 318);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID, this->TItulo,
					this->Estado, this->Tecnico
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(642, 268);
			this->dataGridView1->TabIndex = 6;
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
			// registerButton
			// 
			this->registerButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->registerButton->BackColor = System::Drawing::Color::RoyalBlue;
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->registerButton->Location = System::Drawing::Point(498, 4);
			this->registerButton->Margin = System::Windows::Forms::Padding(4);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(146, 36);
			this->registerButton->TabIndex = 7;
			this->registerButton->Text = L" Agregar ticket ";
			this->registerButton->UseVisualStyleBackColor = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->passwordInput);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(654, 324);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modificar Contraseña";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(7, 19);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 30);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Modificar Contraseña";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(9, 291);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(306, 39);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(4, 214);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 22);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Confirmar contraseña";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(9, 242);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(306, 30);
			this->textBox2->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(4, 141);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 22);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Nueva contraseña";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(9, 169);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(306, 30);
			this->textBox1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(4, 65);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Contraseña actual";
			// 
			// passwordInput
			// 
			this->passwordInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordInput->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->ForeColor = System::Drawing::SystemColors::Window;
			this->passwordInput->Location = System::Drawing::Point(9, 93);
			this->passwordInput->Margin = System::Windows::Forms::Padding(4);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->PasswordChar = '*';
			this->passwordInput->Size = System::Drawing::Size(306, 30);
			this->passwordInput->TabIndex = 6;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(654, 324);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Tickets Pendientes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->id2, this->titulo2,
					this->Column2
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(648, 318);
			this->dataGridView2->TabIndex = 0;
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
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(654, 324);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Mi Perfil";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(146, 298);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(146, 278);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"0";
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
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(347, 278);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Reabrir";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(501, 278);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Resuelto";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView3->Location = System::Drawing::Point(3, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView3->Size = System::Drawing::Size(648, 268);
			this->dataGridView3->TabIndex = 7;
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
			this->tabPage5->Controls->Add(this->button7);
			this->tabPage5->Controls->Add(this->button6);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->button4);
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(654, 324);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Usuarios";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button7->BackColor = System::Drawing::Color::DarkCyan;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button7->Location = System::Drawing::Point(161, 278);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 36);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Blanquear";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button6->BackColor = System::Drawing::Color::RoyalBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button6->Location = System::Drawing::Point(7, 278);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 36);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Agregar";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::Maroon;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Location = System::Drawing::Point(345, 278);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 36);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Bloquear";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::Green;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Location = System::Drawing::Point(499, 278);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 36);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Desbloquear";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->Column1, this->Column3
			});
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView4->Location = System::Drawing::Point(3, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView4->Size = System::Drawing::Size(648, 268);
			this->dataGridView4->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Nro ID";
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
			this->tabPage6->Controls->Add(this->comboBox1);
			this->tabPage6->Controls->Add(this->label9);
			this->tabPage6->Controls->Add(this->button9);
			this->tabPage6->Controls->Add(this->dataGridView5);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(654, 324);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Tickets";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Todos", L"No atendido", L"Atendido", L"Resuelto",
					L"Reabierto", L"Finalizado"
			});
			this->comboBox1->Location = System::Drawing::Point(64, 285);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 17;
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
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackColor = System::Drawing::Color::RoyalBlue;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button9->Location = System::Drawing::Point(501, 277);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(146, 36);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Reabrir";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView5->Location = System::Drawing::Point(3, 3);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView5->Size = System::Drawing::Size(648, 268);
			this->dataGridView5->TabIndex = 13;
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
			this->tabPage7->Controls->Add(this->treeView1);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(654, 324);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Notificaciones";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Location = System::Drawing::Point(3, 3);
			this->treeView1->Name = L"treeView1";
			treeNode53->Name = L"Nodo0";
			treeNode53->Text = L"Nodo0";
			treeNode54->Name = L"Nodo1";
			treeNode54->Text = L"Nodo1";
			treeNode55->Name = L"Nodo2";
			treeNode55->Text = L"Nodo2";
			treeNode56->Name = L"Nodo3";
			treeNode56->Text = L"Nodo3";
			treeNode57->Name = L"Nodo4";
			treeNode57->Text = L"Nodo4";
			treeNode58->Name = L"Nodo0";
			treeNode58->Text = L"Nodo0";
			treeNode59->Name = L"Nodo1";
			treeNode59->Text = L"Nodo1";
			treeNode60->Name = L"Nodo2";
			treeNode60->Text = L"Nodo2";
			treeNode61->Name = L"Nodo3";
			treeNode61->Text = L"Nodo3";
			treeNode62->Name = L"Nodo4";
			treeNode62->Text = L"Nodo4";
			treeNode63->Name = L"Nodo5";
			treeNode63->Text = L"Nodo5";
			treeNode64->Name = L"Nodo6";
			treeNode64->Text = L"Nodo6";
			treeNode65->Name = L"Nodo7";
			treeNode65->Text = L"Nodo7";
			treeNode66->Name = L"Nodo8";
			treeNode66->Text = L"Nodo8";
			treeNode67->Name = L"Nodo9";
			treeNode67->Text = L"Nodo9";
			treeNode68->Name = L"Nodo10";
			treeNode68->Text = L"Nodo10";
			treeNode69->Name = L"Nodo11";
			treeNode69->Text = L"Nodo11";
			treeNode70->Name = L"Nodo12";
			treeNode70->Text = L"Nodo12";
			treeNode71->Name = L"Nodo13";
			treeNode71->Text = L"Nodo13";
			treeNode72->Name = L"Nodo14";
			treeNode72->Text = L"Nodo14";
			treeNode73->Name = L"Nodo15";
			treeNode73->Text = L"Nodo15";
			treeNode74->Name = L"Nodo16";
			treeNode74->Text = L"Nodo16";
			treeNode75->Name = L"Nodo17";
			treeNode75->Text = L"Nodo17";
			treeNode76->Name = L"Nodo18";
			treeNode76->Text = L"Nodo18";
			treeNode77->Name = L"Nodo19";
			treeNode77->Text = L"Nodo19";
			treeNode78->Name = L"Nodo20";
			treeNode78->Text = L"Nodo20";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(26) {
				treeNode53, treeNode54, treeNode55,
					treeNode56, treeNode57, treeNode58, treeNode59, treeNode60, treeNode61, treeNode62, treeNode63, treeNode64, treeNode65, treeNode66,
					treeNode67, treeNode68, treeNode69, treeNode70, treeNode71, treeNode72, treeNode73, treeNode74, treeNode75, treeNode76, treeNode77,
					treeNode78
			});
			this->treeView1->Size = System::Drawing::Size(648, 318);
			this->treeView1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 353);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabPage7->ResumeLayout(false);
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
