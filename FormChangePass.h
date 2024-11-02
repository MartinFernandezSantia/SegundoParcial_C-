#pragma once

namespace SegundoParcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestForm
	/// </summary>
	public ref class FormChangePass : public System::Windows::Forms::Form
	{
	public:
		FormChangePass(void)
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
		~FormChangePass()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ opt1ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Button^ updatePassBtn;
	private:
	private: System::Windows::Forms::Label^ label3;
	public:
	public: System::Windows::Forms::TextBox^ newPass2TB;
	private:
	private: System::Windows::Forms::Label^ label1;
	public:
	public: System::Windows::Forms::TextBox^ newPassTB;
	private:
	private: System::Windows::Forms::Label^ label2;
	public:
	public: System::Windows::Forms::TextBox^ currentPassTB;
	private:




	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->opt1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->updatePassBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->newPass2TB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->newPassTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->currentPassTB = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opt1ToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(112, 28);
			// 
			// opt1ToolStripMenuItem
			// 
			this->opt1ToolStripMenuItem->Name = L"opt1ToolStripMenuItem";
			this->opt1ToolStripMenuItem->Size = System::Drawing::Size(111, 24);
			this->opt1ToolStripMenuItem->Text = L"Opt1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(13, 9);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 30);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Modificar Contraseña";
			// 
			// updatePassBtn
			// 
			this->updatePassBtn->BackColor = System::Drawing::Color::Green;
			this->updatePassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->updatePassBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updatePassBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->updatePassBtn->Location = System::Drawing::Point(15, 281);
			this->updatePassBtn->Margin = System::Windows::Forms::Padding(4);
			this->updatePassBtn->Name = L"updatePassBtn";
			this->updatePassBtn->Size = System::Drawing::Size(306, 39);
			this->updatePassBtn->TabIndex = 20;
			this->updatePassBtn->Text = L"Confirmar";
			this->updatePassBtn->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(10, 204);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 22);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Confirmar contraseña";
			// 
			// newPass2TB
			// 
			this->newPass2TB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->newPass2TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->newPass2TB->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->newPass2TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newPass2TB->ForeColor = System::Drawing::SystemColors::Window;
			this->newPass2TB->Location = System::Drawing::Point(15, 232);
			this->newPass2TB->Margin = System::Windows::Forms::Padding(4);
			this->newPass2TB->Name = L"newPass2TB";
			this->newPass2TB->PasswordChar = '*';
			this->newPass2TB->Size = System::Drawing::Size(306, 30);
			this->newPass2TB->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(10, 131);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 22);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Nueva contraseña";
			// 
			// newPassTB
			// 
			this->newPassTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->newPassTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->newPassTB->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->newPassTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newPassTB->ForeColor = System::Drawing::SystemColors::Window;
			this->newPassTB->Location = System::Drawing::Point(15, 159);
			this->newPassTB->Margin = System::Windows::Forms::Padding(4);
			this->newPassTB->Name = L"newPassTB";
			this->newPassTB->PasswordChar = '*';
			this->newPassTB->Size = System::Drawing::Size(306, 30);
			this->newPassTB->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(10, 55);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 22);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Contraseña actual";
			// 
			// currentPassTB
			// 
			this->currentPassTB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->currentPassTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->currentPassTB->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->currentPassTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentPassTB->ForeColor = System::Drawing::SystemColors::Window;
			this->currentPassTB->Location = System::Drawing::Point(15, 83);
			this->currentPassTB->Margin = System::Windows::Forms::Padding(4);
			this->currentPassTB->Name = L"currentPassTB";
			this->currentPassTB->PasswordChar = '*';
			this->currentPassTB->Size = System::Drawing::Size(306, 30);
			this->currentPassTB->TabIndex = 14;
			// 
			// FormChangePass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(333, 341);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->updatePassBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->newPass2TB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->newPassTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->currentPassTB);
			this->Name = L"FormChangePass";
			this->Text = L"TestForm";
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
