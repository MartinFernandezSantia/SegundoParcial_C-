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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; // Center the form
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

	protected:

	public: System::Windows::Forms::Button^ loginButton;
	public: System::Windows::Forms::TextBox^ idInput;


	private: System::Windows::Forms::Label^ dniLabel;


	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ passwordInput;



	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Button^ solicitarDesbloqueoBtn;
	private:

	private:

	private:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLogin::typeid));
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->idInput = (gcnew System::Windows::Forms::TextBox());
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->solicitarDesbloqueoBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->loginButton->Location = System::Drawing::Point(104, 232);
			this->loginButton->Margin = System::Windows::Forms::Padding(4);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(181, 39);
			this->loginButton->TabIndex = 3;
			this->loginButton->Text = L"Iniciar sesión";
			this->loginButton->UseVisualStyleBackColor = false;
			// 
			// idInput
			// 
			this->idInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->idInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->idInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->idInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idInput->ForeColor = System::Drawing::SystemColors::Window;
			this->idInput->Location = System::Drawing::Point(15, 94);
			this->idInput->Margin = System::Windows::Forms::Padding(4);
			this->idInput->Name = L"idInput";
			this->idInput->Size = System::Drawing::Size(353, 30);
			this->idInput->TabIndex = 1;
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
			// solicitarDesbloqueoBtn
			// 
			this->solicitarDesbloqueoBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->solicitarDesbloqueoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->solicitarDesbloqueoBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->solicitarDesbloqueoBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->solicitarDesbloqueoBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"solicitarDesbloqueoBtn.Image")));
			this->solicitarDesbloqueoBtn->Location = System::Drawing::Point(314, 13);
			this->solicitarDesbloqueoBtn->Margin = System::Windows::Forms::Padding(4);
			this->solicitarDesbloqueoBtn->Name = L"solicitarDesbloqueoBtn";
			this->solicitarDesbloqueoBtn->Size = System::Drawing::Size(52, 39);
			this->solicitarDesbloqueoBtn->TabIndex = 10;
			this->solicitarDesbloqueoBtn->UseVisualStyleBackColor = false;
			// 
			// FormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(379, 284);
			this->Controls->Add(this->solicitarDesbloqueoBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->idInput);
			this->Controls->Add(this->loginButton);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormLogin";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};

}
