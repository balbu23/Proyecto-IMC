#pragma once
#include "form2.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ ConnectionString = "datasource=localhost; username=root; password=balbu325ena; database=IMC";
	private:MySqlConnection^ conn =gcnew MySqlConnection(ConnectionString);
	private: System::Windows::Forms::TextBox^ btn_entrar;
	private: System::Windows::Forms::TextBox^ btn_contra;

	private: System::Windows::Forms::Button^ btn_login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_entrar = (gcnew System::Windows::Forms::TextBox());
			this->btn_contra = (gcnew System::Windows::Forms::TextBox());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_entrar
			// 
			this->btn_entrar->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->btn_entrar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->btn_entrar->Location = System::Drawing::Point(56, 45);
			this->btn_entrar->Name = L"btn_entrar";
			this->btn_entrar->Size = System::Drawing::Size(167, 20);
			this->btn_entrar->TabIndex = 0;
			// 
			// btn_contra
			// 
			this->btn_contra->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->btn_contra->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->btn_contra->Location = System::Drawing::Point(56, 118);
			this->btn_contra->Name = L"btn_contra";
			this->btn_contra->PasswordChar = '*';
			this->btn_contra->Size = System::Drawing::Size(167, 20);
			this->btn_contra->TabIndex = 1;
			// 
			// btn_login
			// 
			this->btn_login->BackColor = System::Drawing::Color::CadetBlue;
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_login->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_login->Location = System::Drawing::Point(98, 185);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(81, 29);
			this->btn_login->TabIndex = 2;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = false;
			this->btn_login->Click += gcnew System::EventHandler(this, &Form1::btn_login_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SpringGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(53, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SpringGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(53, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->btn_contra);
			this->Controls->Add(this->btn_entrar);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {

	if (String::IsNullOrEmpty(btn_entrar->Text) || String::IsNullOrEmpty(btn_contra->Text)) {
		MessageBox::Show(L"Porfavor ingresa tu Usuario y Contraseña");
		return;
	}

	String^ sql = "select * from login where nombre ='" + btn_entrar->Text + "' and contraseña ='" + btn_contra->Text + "' ";
	MySqlCommand^ command = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ datareader;

	try {
		
		this->conn->Open();

		datareader = command->ExecuteReader();

		if (datareader->Read()) {
		
			MessageBox::Show(L"Bienvenido " + btn_entrar->Text);

		
			Proyecto_IMC::form2^ segundoform = gcnew Proyecto_IMC::form2();
			this->Visible = false;
			segundoform->ShowDialog();
			this->Visible = true;
		}
		else {
		
			MessageBox::Show(L"Usuario no existente");
		}

		this->conn->Close();

	}
	catch (Exception^ x) {
		
		MessageBox::Show(x->Message);

		this->conn->Close();
	}

	LimpiarTextBox(btn_entrar);
	LimpiarTextBox(btn_contra);
}
	   void LimpiarTextBox(System::Windows::Forms::TextBox^ textBox) {
		   textBox->Text = "";
	   }
};
}
