#pragma once

namespace SegundoParcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class FormLogin : public System::Windows::Forms::Form
	{
	public:
		FormLogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ registerButton;
	protected:

	public: System::Windows::Forms::Button^ loginButton;
	public: System::Windows::Forms::TextBox^ dniInput;

	private: System::Windows::Forms::Label^ dniLabel;


	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ passwordInput;



	private: System::Windows::Forms::Label^ label3;



	public:
	private:

	private:



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->dniInput = (gcnew System::Windows::Forms::TextBox());
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->registerButton->Location = System::Drawing::Point(15, 235);
			this->registerButton->Margin = System::Windows::Forms::Padding(4);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(167, 39);
			this->registerButton->TabIndex = 4;
			this->registerButton->Text = L"Registrarse";
			this->registerButton->UseVisualStyleBackColor = false;
			// 
			// loginButton
			// 
			this->loginButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->loginButton->Location = System::Drawing::Point(202, 235);
			this->loginButton->Margin = System::Windows::Forms::Padding(4);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(167, 39);
			this->loginButton->TabIndex = 3;
			this->loginButton->Text = L"Iniciar sesión";
			this->loginButton->UseVisualStyleBackColor = false;
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
			this->dniInput->Location = System::Drawing::Point(15, 94);
			this->dniInput->Margin = System::Windows::Forms::Padding(4);
			this->dniInput->Name = L"dniInput";
			this->dniInput->Size = System::Drawing::Size(353, 30);
			this->dniInput->TabIndex = 1;
			// 
			// dniLabel
			// 
			this->dniLabel->AutoSize = true;
			this->dniLabel->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->dniLabel->Location = System::Drawing::Point(11, 66);
			this->dniLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dniLabel->Name = L"dniLabel";
			this->dniLabel->Size = System::Drawing::Size(57, 22);
			this->dniLabel->TabIndex = 3;
			this->dniLabel->Text = L"N° ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(11, 139);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Contraseña";
			// 
			// passwordInput
			// 
			this->passwordInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->passwordInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->passwordInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordInput->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->ForeColor = System::Drawing::SystemColors::Window;
			this->passwordInput->Location = System::Drawing::Point(16, 167);
			this->passwordInput->Margin = System::Windows::Forms::Padding(4);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->PasswordChar = '*';
			this->passwordInput->Size = System::Drawing::Size(353, 30);
			this->passwordInput->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(89, 22);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(221, 30);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Inicio de sesión";
			// 
			// FormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(379, 284);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->dniInput);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->registerButton);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormLogin";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};

}
