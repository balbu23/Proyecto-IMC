#pragma once


namespace Proyecto_IMC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de form4
	/// </summary>
	public ref class form4 : public System::Windows::Forms::Form
	{
	public:
		form4(void)
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
		~form4()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		System::Windows::Forms::TextBox^ btn_nombre2;
		System::Windows::Forms::TextBox^ btn_edad;
		System::Windows::Forms::TextBox^ btn_altura;
		System::Windows::Forms::TextBox^ btn_peso;
		System::Windows::Forms::TextBox^ btn_imc;
		System::Windows::Forms::TextBox^ btn_categoria;
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_cancelar3;


	private: System::Windows::Forms::Button^ btn_guardar2;



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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_categoria = (gcnew System::Windows::Forms::TextBox());
			this->btn_imc = (gcnew System::Windows::Forms::TextBox());
			this->btn_peso = (gcnew System::Windows::Forms::TextBox());
			this->btn_altura = (gcnew System::Windows::Forms::TextBox());
			this->btn_edad = (gcnew System::Windows::Forms::TextBox());
			this->btn_nombre2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancelar3 = (gcnew System::Windows::Forms::Button());
			this->btn_guardar2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(241, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Categoria:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(46, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"IMC:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(241, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Peso(kg):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(46, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Altura(M):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(241, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Edad:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(46, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Nombre:";
			// 
			// btn_categoria
			// 
			this->btn_categoria->Location = System::Drawing::Point(241, 137);
			this->btn_categoria->Name = L"btn_categoria";
			this->btn_categoria->Size = System::Drawing::Size(135, 20);
			this->btn_categoria->TabIndex = 35;
			// 
			// btn_imc
			// 
			this->btn_imc->Location = System::Drawing::Point(46, 137);
			this->btn_imc->Name = L"btn_imc";
			this->btn_imc->Size = System::Drawing::Size(135, 20);
			this->btn_imc->TabIndex = 34;
			// 
			// btn_peso
			// 
			this->btn_peso->Location = System::Drawing::Point(241, 85);
			this->btn_peso->Name = L"btn_peso";
			this->btn_peso->Size = System::Drawing::Size(135, 20);
			this->btn_peso->TabIndex = 33;
			// 
			// btn_altura
			// 
			this->btn_altura->Location = System::Drawing::Point(49, 85);
			this->btn_altura->Name = L"btn_altura";
			this->btn_altura->Size = System::Drawing::Size(135, 20);
			this->btn_altura->TabIndex = 32;
			// 
			// btn_edad
			// 
			this->btn_edad->Location = System::Drawing::Point(244, 32);
			this->btn_edad->Name = L"btn_edad";
			this->btn_edad->Size = System::Drawing::Size(135, 20);
			this->btn_edad->TabIndex = 31;
			// 
			// btn_nombre2
			// 
			this->btn_nombre2->Location = System::Drawing::Point(49, 35);
			this->btn_nombre2->Name = L"btn_nombre2";
			this->btn_nombre2->Size = System::Drawing::Size(135, 20);
			this->btn_nombre2->TabIndex = 30;
			// 
			// btn_cancelar3
			// 
			this->btn_cancelar3->BackColor = System::Drawing::Color::Red;
			this->btn_cancelar3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar3->Location = System::Drawing::Point(273, 212);
			this->btn_cancelar3->Name = L"btn_cancelar3";
			this->btn_cancelar3->Size = System::Drawing::Size(82, 37);
			this->btn_cancelar3->TabIndex = 29;
			this->btn_cancelar3->Text = L"Cancelar";
			this->btn_cancelar3->UseVisualStyleBackColor = false;
			this->btn_cancelar3->Click += gcnew System::EventHandler(this, &form4::btn_cancelar1_Click);
			this->btn_cancelar3->MouseHover += gcnew System::EventHandler(this, &form4::btn_cancelar3_MouseHover);
			// 
			// btn_guardar2
			// 
			this->btn_guardar2->BackColor = System::Drawing::Color::SpringGreen;
			this->btn_guardar2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_guardar2->Location = System::Drawing::Point(46, 212);
			this->btn_guardar2->Name = L"btn_guardar2";
			this->btn_guardar2->Size = System::Drawing::Size(87, 32);
			this->btn_guardar2->TabIndex = 28;
			this->btn_guardar2->Text = L"Guardar";
			this->btn_guardar2->UseVisualStyleBackColor = false;
			this->btn_guardar2->Click += gcnew System::EventHandler(this, &form4::btn_guardar_Click);
			this->btn_guardar2->MouseHover += gcnew System::EventHandler(this, &form4::btn_guardar_MouseHover);
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(424, 261);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_categoria);
			this->Controls->Add(this->btn_imc);
			this->Controls->Add(this->btn_peso);
			this->Controls->Add(this->btn_altura);
			this->Controls->Add(this->btn_edad);
			this->Controls->Add(this->btn_nombre2);
			this->Controls->Add(this->btn_cancelar3);
			this->Controls->Add(this->btn_guardar2);
			this->Name = L"form4";
			this->Text = L"form4";
			this->Load += gcnew System::EventHandler(this, &form4::form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Datos Actualizados");
	this->Close();
}
private: System::Void btn_cancelar1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btn_guardar_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_guardar2, "Guardar Datos");
}
private: System::Void btn_cancelar3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_cancelar3, "Cancelar Operacion");
}
};
}
