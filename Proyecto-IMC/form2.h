#pragma once
#include"form3.h"
#include"DB.h"


namespace Proyecto_IMC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Resumen de form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		form2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew A1();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_salir;
	private: System::Windows::Forms::Button^ btn_calcular;





	private: System::Windows::Forms::Button^ btn_db;
	private: System::Windows::Forms::TextBox^ evaluar1;







	private:A1^ data;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ evaluar2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::String^ textBox4Value;
	private: System::String^ textBox1Value;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btn_limpiar3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->btn_salir = (gcnew System::Windows::Forms::Button());
			this->btn_calcular = (gcnew System::Windows::Forms::Button());
			this->btn_db = (gcnew System::Windows::Forms::Button());
			this->evaluar1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->evaluar2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_limpiar3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_salir
			// 
			this->btn_salir->BackColor = System::Drawing::Color::Red;
			this->btn_salir->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_salir->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_salir->Location = System::Drawing::Point(12, 226);
			this->btn_salir->Name = L"btn_salir";
			this->btn_salir->Size = System::Drawing::Size(79, 30);
			this->btn_salir->TabIndex = 0;
			this->btn_salir->Text = L"Salir";
			this->btn_salir->UseVisualStyleBackColor = false;
			this->btn_salir->Click += gcnew System::EventHandler(this, &form2::btn_salir_Click);
			this->btn_salir->MouseHover += gcnew System::EventHandler(this, &form2::btn_salir_MouseHover);
			// 
			// btn_calcular
			// 
			this->btn_calcular->BackColor = System::Drawing::Color::DarkCyan;
			this->btn_calcular->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_calcular->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_calcular->Location = System::Drawing::Point(255, 226);
			this->btn_calcular->Name = L"btn_calcular";
			this->btn_calcular->Size = System::Drawing::Size(90, 30);
			this->btn_calcular->TabIndex = 1;
			this->btn_calcular->Text = L"Calcular";
			this->btn_calcular->UseVisualStyleBackColor = false;
			this->btn_calcular->Click += gcnew System::EventHandler(this, &form2::button1_Click);
			this->btn_calcular->MouseHover += gcnew System::EventHandler(this, &form2::btn_calcular_MouseHover);
			// 
			// btn_db
			// 
			this->btn_db->BackColor = System::Drawing::Color::LightSlateGray;
			this->btn_db->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_db->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_db->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_db->Location = System::Drawing::Point(134, 226);
			this->btn_db->Name = L"btn_db";
			this->btn_db->Size = System::Drawing::Size(77, 30);
			this->btn_db->TabIndex = 6;
			this->btn_db->Text = L"DB";
			this->btn_db->UseVisualStyleBackColor = false;
			this->btn_db->Click += gcnew System::EventHandler(this, &form2::button2_Click);
			this->btn_db->MouseHover += gcnew System::EventHandler(this, &form2::btn_db_MouseHover);
			// 
			// evaluar1
			// 
			this->evaluar1->Location = System::Drawing::Point(84, 165);
			this->evaluar1->Name = L"evaluar1";
			this->evaluar1->Size = System::Drawing::Size(58, 20);
			this->evaluar1->TabIndex = 10;
			this->evaluar1->TextChanged += gcnew System::EventHandler(this, &form2::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Aquamarine;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(357, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Altura(M):";
			// 
			// evaluar2
			// 
			this->evaluar2->Location = System::Drawing::Point(360, 165);
			this->evaluar2->Name = L"evaluar2";
			this->evaluar2->Size = System::Drawing::Size(48, 20);
			this->evaluar2->TabIndex = 15;
			this->evaluar2->TextChanged += gcnew System::EventHandler(this, &form2::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(193, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &form2::pictureBox1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Aquamarine;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(86, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Peso(kg):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(176, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"CALCULA EL IMC";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SeaGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(345, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SeaGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(37, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Teal;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(345, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 15);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Categoria:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Teal;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(37, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 15);
			this->label7->TabIndex = 22;
			this->label7->Text = L"IMC:";
			// 
			// btn_limpiar3
			// 
			this->btn_limpiar3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btn_limpiar3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_limpiar3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_limpiar3->Location = System::Drawing::Point(379, 226);
			this->btn_limpiar3->Name = L"btn_limpiar3";
			this->btn_limpiar3->Size = System::Drawing::Size(90, 30);
			this->btn_limpiar3->TabIndex = 23;
			this->btn_limpiar3->Text = L"Limpiar";
			this->btn_limpiar3->UseVisualStyleBackColor = false;
			this->btn_limpiar3->Click += gcnew System::EventHandler(this, &form2::btn_limpiar3_Click);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(505, 261);
			this->Controls->Add(this->btn_limpiar3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->evaluar2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->evaluar1);
			this->Controls->Add(this->btn_db);
			this->Controls->Add(this->btn_calcular);
			this->Controls->Add(this->btn_salir);
			this->Name = L"form2";
			this->Text = L"form2";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(this->textBox1Value);
		double b = Convert::ToDouble(this->textBox4Value);

		A1^ data = gcnew A1();
		double multipliedValue = data->multiplicar(a, a);
		this->textBox1Value= multipliedValue.ToString();

		int divisor = Int32::Parse(textBox4Value);
		double resultado = Math::Round (divisor / multipliedValue,2);

		this->textBox4Value = resultado.ToString();
		this->label2->Text = "Result: " + resultado.ToString();

		if (resultado < 18.5) {
			this->label1->Text = "Bajo peso";
		}
		else if (resultado >= 18.5 && resultado <= 24.9) {
			this->label1->Text = "Peso Normal";
		}
		else if (resultado >= 25 && resultado <= 29.9) {
			this->label1->Text = "Sobrepeso";
		}
		else if (resultado >= 30 && resultado <= 34.9) {
			this->label1->Text = "Obesidad I";
		}
		else if (resultado >= 35 && resultado <= 39.9) {
			this->label1->Text = "Obesidad II";
		}
		else if (resultado >= 40 && resultado <= 49.9) {
			this->label1->Text = "Obesidad III";
		}
		else if (resultado >= 50) {
			this->label1->Text = "Obesidad IV";
		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Proyecto_IMC::form3^ tercerform = gcnew Proyecto_IMC::form3();
	this->Visible = false;
	tercerform->ShowDialog();
	this->Visible = true;
}
private: System::Void form2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox4Value= evaluar1->Text;
}
private: System::Void btn_salir_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_salir, "Cancelar Operacion");
}
private: System::Void btn_db_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_db, "Data Base");
}
private: System::Void btn_calcular_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_calcular, "Calcular IMC");
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1Value = evaluar2->Text;
}
private: System::Void btn_limpiar3_Click(System::Object^ sender, System::EventArgs^ e) {
	LimpiarTextBox(evaluar1);
	LimpiarTextBox(evaluar2);
}
	   void LimpiarTextBox(System::Windows::Forms::TextBox^ textBox) {
		   textBox->Text = "";
	   }

};
}
