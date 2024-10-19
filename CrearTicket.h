#pragma once

namespace SegundoParcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CrearTicket
	/// </summary>
	public ref class CrearTicket : public System::Windows::Forms::Form
	{
	public:
		CrearTicket(void)
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
		~CrearTicket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ dniLabel;
	protected:
	public: System::Windows::Forms::TextBox^ dniInput;
	private:
	private: System::Windows::Forms::Label^ label1;
	public:
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Button^ registerButton;
	private:
	public: System::Windows::Forms::Button^ button1;
	public:
	private:

	public:

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
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->dniInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dniLabel
			// 
			this->dniLabel->AutoSize = true;
			this->dniLabel->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->dniLabel->Location = System::Drawing::Point(9, 54);
			this->dniLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dniLabel->Name = L"dniLabel";
			this->dniLabel->Size = System::Drawing::Size(56, 22);
			this->dniLabel->TabIndex = 5;
			this->dniLabel->Text = L"Titulo";
			// 
			// dniInput
			// 
			this->dniInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dniInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dniInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dniInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniInput->ForeColor = System::Drawing::SystemColors::Window;
			this->dniInput->Location = System::Drawing::Point(13, 80);
			this->dniInput->Margin = System::Windows::Forms::Padding(4);
			this->dniInput->Name = L"dniInput";
			this->dniInput->Size = System::Drawing::Size(346, 30);
			this->dniInput->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(9, 133);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Descripción";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(13, 159);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(349, 220);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(107, 9);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 30);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Nuevo Ticket";
			// 
			// registerButton
			// 
			this->registerButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->registerButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->registerButton->Location = System::Drawing::Point(13, 389);
			this->registerButton->Margin = System::Windows::Forms::Padding(4);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(167, 39);
			this->registerButton->TabIndex = 10;
			this->registerButton->Text = L"Cancelar";
			this->registerButton->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(195, 389);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 39);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// CrearTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(375, 441);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->dniInput);
			this->Name = L"CrearTicket";
			this->Text = L"CrearTicket";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
