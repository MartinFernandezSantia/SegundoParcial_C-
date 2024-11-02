#pragma once

namespace SegundoParcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VerTicket
	/// </summary>
	public ref class VerTicket : public System::Windows::Forms::Form
	{
	public:
		VerTicket(void)
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
		~VerTicket()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ descripcionTB;
	private:

	private:
	private: System::Windows::Forms::Label^ dniLabel;
	public: System::Windows::Forms::TextBox^ tituloTB;

	public:

	public:
	private:
	public:


	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ creadorTB;
	private:

	private:
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ TecnicoTB;
	public: System::Windows::Forms::TextBox^ estadoTB;
	private:
	public:

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->descripcionTB = (gcnew System::Windows::Forms::TextBox());
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->tituloTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->creadorTB = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TecnicoTB = (gcnew System::Windows::Forms::TextBox());
			this->estadoTB = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(68, 33);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 30);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Datos del Ticket";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(23, 328);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 15;
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
			this->descripcionTB->Location = System::Drawing::Point(27, 354);
			this->descripcionTB->Margin = System::Windows::Forms::Padding(4);
			this->descripcionTB->Multiline = true;
			this->descripcionTB->Name = L"descripcionTB";
			this->descripcionTB->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->descripcionTB->Size = System::Drawing::Size(340, 164);
			this->descripcionTB->TabIndex = 14;
			// 
			// dniLabel
			// 
			this->dniLabel->AutoSize = true;
			this->dniLabel->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->dniLabel->Location = System::Drawing::Point(22, 83);
			this->dniLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dniLabel->Name = L"dniLabel";
			this->dniLabel->Size = System::Drawing::Size(56, 22);
			this->dniLabel->TabIndex = 13;
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
			this->tituloTB->Location = System::Drawing::Point(26, 109);
			this->tituloTB->Margin = System::Windows::Forms::Padding(4);
			this->tituloTB->Name = L"tituloTB";
			this->tituloTB->Size = System::Drawing::Size(304, 30);
			this->tituloTB->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(22, 143);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 22);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Estado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(22, 208);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 22);
			this->label4->TabIndex = 22;
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
			this->creadorTB->Location = System::Drawing::Point(26, 234);
			this->creadorTB->Margin = System::Windows::Forms::Padding(4);
			this->creadorTB->Name = L"creadorTB";
			this->creadorTB->Size = System::Drawing::Size(304, 30);
			this->creadorTB->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(23, 268);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 22);
			this->label5->TabIndex = 24;
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
			this->TecnicoTB->Location = System::Drawing::Point(27, 294);
			this->TecnicoTB->Margin = System::Windows::Forms::Padding(4);
			this->TecnicoTB->Name = L"TecnicoTB";
			this->TecnicoTB->Size = System::Drawing::Size(303, 30);
			this->TecnicoTB->TabIndex = 23;
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
			this->estadoTB->Location = System::Drawing::Point(26, 169);
			this->estadoTB->Margin = System::Windows::Forms::Padding(4);
			this->estadoTB->Name = L"estadoTB";
			this->estadoTB->Size = System::Drawing::Size(304, 30);
			this->estadoTB->TabIndex = 25;
			// 
			// VerTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(397, 531);
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
			this->Name = L"VerTicket";
			this->Text = L"VerTicket";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
