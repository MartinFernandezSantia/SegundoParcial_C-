#pragma once

namespace SegundoParcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CrearUsuario
	/// </summary>
	public ref class CrearUsuario : public System::Windows::Forms::Form
	{
	public:
		CrearUsuario(void)
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
		~CrearUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label1;

	private:

	public: System::Windows::Forms::Button^ crearBtn;
	public: System::Windows::Forms::ComboBox^ rolComboBox;
	private:


	private:

	private:
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->crearBtn = (gcnew System::Windows::Forms::Button());
			this->rolComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(31, 9);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 30);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Nuevo Usuario";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(108, 59);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 22);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Rol";
			// 
			// crearBtn
			// 
			this->crearBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->crearBtn->BackColor = System::Drawing::Color::Green;
			this->crearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->crearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crearBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->crearBtn->Location = System::Drawing::Point(36, 148);
			this->crearBtn->Margin = System::Windows::Forms::Padding(4);
			this->crearBtn->Name = L"crearBtn";
			this->crearBtn->Size = System::Drawing::Size(203, 39);
			this->crearBtn->TabIndex = 16;
			this->crearBtn->Text = L"Crear";
			this->crearBtn->UseVisualStyleBackColor = false;
			// 
			// rolComboBox
			// 
			this->rolComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->rolComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->rolComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rolComboBox->ForeColor = System::Drawing::SystemColors::Control;
			this->rolComboBox->FormattingEnabled = true;
			this->rolComboBox->Location = System::Drawing::Point(12, 94);
			this->rolComboBox->Name = L"rolComboBox";
			this->rolComboBox->Size = System::Drawing::Size(242, 24);
			this->rolComboBox->TabIndex = 15;
			// 
			// CrearUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(266, 200);
			this->Controls->Add(this->crearBtn);
			this->Controls->Add(this->rolComboBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Name = L"CrearUsuario";
			this->Text = L"CrearUsuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
