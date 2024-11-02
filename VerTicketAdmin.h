#pragma once

namespace SegundoParcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VerTicketAdmin
	/// </summary>
	public ref class VerTicketAdmin : public System::Windows::Forms::Form
	{
	public:
		VerTicketAdmin(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; // Center the form
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VerTicketAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::CheckBox^ reopenedCB;
	private:

	public: System::Windows::Forms::ComboBox^ tecnicosComboBox;
	private:
	protected:


	private:
	private: System::Windows::Forms::Label^ label6;
	public:
	public: System::Windows::Forms::TextBox^ estadoTB;
	private:
	private: System::Windows::Forms::Label^ label5;
	public:
	public: System::Windows::Forms::TextBox^ TecnicoTB;
	private:
	private: System::Windows::Forms::Label^ label4;
	public:
	public: System::Windows::Forms::TextBox^ creadorTB;
	private:
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ descripcionTB;
	private:
	private: System::Windows::Forms::Label^ dniLabel;
	public:
	public: System::Windows::Forms::TextBox^ tituloTB;
	private:

	protected:

	public:

	private:

	public:

	private:

	public:



	private:

	public:



	private:

	public:
	public:
	private:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->reopenedCB = (gcnew System::Windows::Forms::CheckBox());
			this->tecnicosComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->estadoTB = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TecnicoTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->creadorTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->descripcionTB = (gcnew System::Windows::Forms::TextBox());
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->tituloTB = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(36, 355);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 22);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Tecnicos Previos";
			// 
			// reopenedCB
			// 
			this->reopenedCB->AutoSize = true;
			this->reopenedCB->Enabled = false;
			this->reopenedCB->Location = System::Drawing::Point(41, 215);
			this->reopenedCB->Name = L"reopenedCB";
			this->reopenedCB->Size = System::Drawing::Size(18, 17);
			this->reopenedCB->TabIndex = 54;
			this->reopenedCB->UseVisualStyleBackColor = true;
			// 
			// tecnicosComboBox
			// 
			this->tecnicosComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tecnicosComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->tecnicosComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tecnicosComboBox->ForeColor = System::Drawing::SystemColors::Control;
			this->tecnicosComboBox->FormattingEnabled = true;
			this->tecnicosComboBox->Location = System::Drawing::Point(37, 380);
			this->tecnicosComboBox->Name = L"tecnicosComboBox";
			this->tecnicosComboBox->Size = System::Drawing::Size(242, 24);
			this->tecnicosComboBox->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(36, 190);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 22);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Reabierto";
			// 
			// estadoTB
			// 
			this->estadoTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->estadoTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->estadoTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->estadoTB->Enabled = false;
			this->estadoTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->estadoTB->ForeColor = System::Drawing::SystemColors::Window;
			this->estadoTB->Location = System::Drawing::Point(38, 156);
			this->estadoTB->Margin = System::Windows::Forms::Padding(4);
			this->estadoTB->Name = L"estadoTB";
			this->estadoTB->Size = System::Drawing::Size(304, 30);
			this->estadoTB->TabIndex = 51;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(34, 295);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 22);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Técnico asignado";
			// 
			// TecnicoTB
			// 
			this->TecnicoTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TecnicoTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TecnicoTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TecnicoTB->Enabled = false;
			this->TecnicoTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TecnicoTB->ForeColor = System::Drawing::SystemColors::Window;
			this->TecnicoTB->Location = System::Drawing::Point(37, 321);
			this->TecnicoTB->Margin = System::Windows::Forms::Padding(4);
			this->TecnicoTB->Name = L"TecnicoTB";
			this->TecnicoTB->Size = System::Drawing::Size(303, 30);
			this->TecnicoTB->TabIndex = 49;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(34, 235);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 22);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Creador";
			// 
			// creadorTB
			// 
			this->creadorTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->creadorTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->creadorTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->creadorTB->Enabled = false;
			this->creadorTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creadorTB->ForeColor = System::Drawing::SystemColors::Window;
			this->creadorTB->Location = System::Drawing::Point(38, 261);
			this->creadorTB->Margin = System::Windows::Forms::Padding(4);
			this->creadorTB->Name = L"creadorTB";
			this->creadorTB->Size = System::Drawing::Size(304, 30);
			this->creadorTB->TabIndex = 47;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(34, 130);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 22);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Estado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(80, 20);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 30);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Datos del Ticket";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(34, 407);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Descripción";
			// 
			// descripcionTB
			// 
			this->descripcionTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->descripcionTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->descripcionTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->descripcionTB->Enabled = false;
			this->descripcionTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripcionTB->ForeColor = System::Drawing::SystemColors::Window;
			this->descripcionTB->Location = System::Drawing::Point(38, 433);
			this->descripcionTB->Margin = System::Windows::Forms::Padding(4);
			this->descripcionTB->Multiline = true;
			this->descripcionTB->Name = L"descripcionTB";
			this->descripcionTB->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->descripcionTB->Size = System::Drawing::Size(340, 164);
			this->descripcionTB->TabIndex = 43;
			// 
			// dniLabel
			// 
			this->dniLabel->AutoSize = true;
			this->dniLabel->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->dniLabel->Location = System::Drawing::Point(34, 70);
			this->dniLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dniLabel->Name = L"dniLabel";
			this->dniLabel->Size = System::Drawing::Size(56, 22);
			this->dniLabel->TabIndex = 42;
			this->dniLabel->Text = L"Titulo";
			// 
			// tituloTB
			// 
			this->tituloTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tituloTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tituloTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tituloTB->Enabled = false;
			this->tituloTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tituloTB->ForeColor = System::Drawing::SystemColors::Window;
			this->tituloTB->Location = System::Drawing::Point(38, 96);
			this->tituloTB->Margin = System::Windows::Forms::Padding(4);
			this->tituloTB->Name = L"tituloTB";
			this->tituloTB->Size = System::Drawing::Size(304, 30);
			this->tituloTB->TabIndex = 41;
			// 
			// VerTicketAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(412, 618);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->reopenedCB);
			this->Controls->Add(this->tecnicosComboBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->estadoTB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TecnicoTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->creadorTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->descripcionTB);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->tituloTB);
			this->Name = L"VerTicketAdmin";
			this->Text = L"VerTicketAdmin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
