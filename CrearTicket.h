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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; // Center the form
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
	public: System::Windows::Forms::TextBox^ tituloTB;
	private:
	protected:

	private:
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ descripcionTB;
	private:

	private:
	public:

	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Button^ crearTicketBtn;
	private:

	private:

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
			this->tituloTB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->descripcionTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->crearTicketBtn = (gcnew System::Windows::Forms::Button());
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
			// tituloTB
			// 
			this->tituloTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tituloTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tituloTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tituloTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tituloTB->ForeColor = System::Drawing::SystemColors::Window;
			this->tituloTB->Location = System::Drawing::Point(13, 80);
			this->tituloTB->Margin = System::Windows::Forms::Padding(4);
			this->tituloTB->Name = L"tituloTB";
			this->tituloTB->Size = System::Drawing::Size(346, 30);
			this->tituloTB->TabIndex = 4;
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
			// descripcionTB
			// 
			this->descripcionTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->descripcionTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->descripcionTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->descripcionTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripcionTB->ForeColor = System::Drawing::SystemColors::Window;
			this->descripcionTB->Location = System::Drawing::Point(13, 159);
			this->descripcionTB->Margin = System::Windows::Forms::Padding(4);
			this->descripcionTB->Multiline = true;
			this->descripcionTB->Name = L"descripcionTB";
			this->descripcionTB->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->descripcionTB->Size = System::Drawing::Size(349, 220);
			this->descripcionTB->TabIndex = 6;
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
			// crearTicketBtn
			// 
			this->crearTicketBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->crearTicketBtn->BackColor = System::Drawing::Color::Green;
			this->crearTicketBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->crearTicketBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crearTicketBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->crearTicketBtn->Location = System::Drawing::Point(13, 389);
			this->crearTicketBtn->Margin = System::Windows::Forms::Padding(4);
			this->crearTicketBtn->Name = L"crearTicketBtn";
			this->crearTicketBtn->Size = System::Drawing::Size(346, 39);
			this->crearTicketBtn->TabIndex = 11;
			this->crearTicketBtn->Text = L"Crear";
			this->crearTicketBtn->UseVisualStyleBackColor = false;
			// 
			// CrearTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(375, 441);
			this->Controls->Add(this->crearTicketBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->descripcionTB);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->tituloTB);
			this->Name = L"CrearTicket";
			this->Text = L"CrearTicket";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
