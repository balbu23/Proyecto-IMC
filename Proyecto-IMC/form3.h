#pragma once
#include"DB.h"
#include"form4.h"


namespace Proyecto_IMC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de form3
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		form3(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data =gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ btn_nombre2;
	private: System::Windows::Forms::TextBox^ btn_edad;
	private: System::Windows::Forms::TextBox^ btn_altura;
	private: System::Windows::Forms::TextBox^ btn_peso;
	private: System::Windows::Forms::TextBox^ btn_imc;

	protected:






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::DataGridView^ btn_grid;

	private:DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label_delete;
	private: System::Windows::Forms::Button^ btn_cancelar2;
	private: System::Windows::Forms::Button^ btn_limpiar;
	private: System::Windows::Forms::TextBox^ btn_categoria;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;










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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btn_nombre2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_edad = (gcnew System::Windows::Forms::TextBox());
			this->btn_altura = (gcnew System::Windows::Forms::TextBox());
			this->btn_peso = (gcnew System::Windows::Forms::TextBox());
			this->btn_imc = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->btn_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->label_delete = (gcnew System::Windows::Forms::Label());
			this->btn_cancelar2 = (gcnew System::Windows::Forms::Button());
			this->btn_limpiar = (gcnew System::Windows::Forms::Button());
			this->btn_categoria = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_nombre2
			// 
			this->btn_nombre2->Location = System::Drawing::Point(620, 32);
			this->btn_nombre2->Name = L"btn_nombre2";
			this->btn_nombre2->Size = System::Drawing::Size(135, 20);
			this->btn_nombre2->TabIndex = 0;
			this->btn_nombre2->TextChanged += gcnew System::EventHandler(this, &form3::textBox1_TextChanged);
			// 
			// btn_edad
			// 
			this->btn_edad->Location = System::Drawing::Point(782, 32);
			this->btn_edad->Name = L"btn_edad";
			this->btn_edad->Size = System::Drawing::Size(135, 20);
			this->btn_edad->TabIndex = 1;
			this->btn_edad->TextChanged += gcnew System::EventHandler(this, &form3::textBox2_TextChanged);
			// 
			// btn_altura
			// 
			this->btn_altura->Location = System::Drawing::Point(620, 90);
			this->btn_altura->Name = L"btn_altura";
			this->btn_altura->Size = System::Drawing::Size(135, 20);
			this->btn_altura->TabIndex = 2;
			// 
			// btn_peso
			// 
			this->btn_peso->Location = System::Drawing::Point(782, 90);
			this->btn_peso->Name = L"btn_peso";
			this->btn_peso->Size = System::Drawing::Size(135, 20);
			this->btn_peso->TabIndex = 3;
			this->btn_peso->TextChanged += gcnew System::EventHandler(this, &form3::textBox4_TextChanged);
			// 
			// btn_imc
			// 
			this->btn_imc->Location = System::Drawing::Point(620, 148);
			this->btn_imc->Name = L"btn_imc";
			this->btn_imc->Size = System::Drawing::Size(135, 20);
			this->btn_imc->TabIndex = 4;
			this->btn_imc->TextChanged += gcnew System::EventHandler(this, &form3::btn_imc_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(617, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nombre:";
			this->label1->Click += gcnew System::EventHandler(this, &form3::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(779, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Edad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(617, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Altura(M):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(779, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Peso(kg):";
			this->label4->Click += gcnew System::EventHandler(this, &form3::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(617, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"IMC:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(779, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Categoria:";
			this->label6->Click += gcnew System::EventHandler(this, &form3::label6_Click);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::SpringGreen;
			this->btn_guardar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_guardar->ForeColor = System::Drawing::Color::Black;
			this->btn_guardar->Location = System::Drawing::Point(474, 213);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(100, 35);
			this->btn_guardar->TabIndex = 12;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &form3::button1_Click);
			this->btn_guardar->MouseHover += gcnew System::EventHandler(this, &form3::btn_guardar_MouseHover);
			// 
			// btn_grid
			// 
			this->btn_grid->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->btn_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->btn_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->btn_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::PowderBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Chocolate;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->btn_grid->DefaultCellStyle = dataGridViewCellStyle2;
			this->btn_grid->GridColor = System::Drawing::Color::Azure;
			this->btn_grid->Location = System::Drawing::Point(2, 16);
			this->btn_grid->Name = L"btn_grid";
			this->btn_grid->ReadOnly = true;
			this->btn_grid->RowHeadersVisible = false;
			this->btn_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->btn_grid->Size = System::Drawing::Size(609, 173);
			this->btn_grid->TabIndex = 13;
			this->btn_grid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &form3::btn_grid_CellClick);
			this->btn_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &form3::btn_grid_CellContentClick);
			this->btn_grid->DoubleClick += gcnew System::EventHandler(this, &form3::btn_grid_DoubleClick);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btn_eliminar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_eliminar->ForeColor = System::Drawing::Color::Black;
			this->btn_eliminar->Location = System::Drawing::Point(661, 214);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(94, 35);
			this->btn_eliminar->TabIndex = 14;
			this->btn_eliminar->Text = L"Eliminar un registro";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &form3::btn_eliminar_Click);
			this->btn_eliminar->MouseHover += gcnew System::EventHandler(this, &form3::btn_eliminar_MouseHover);
			// 
			// label_delete
			// 
			this->label_delete->AutoSize = true;
			this->label_delete->BackColor = System::Drawing::Color::Honeydew;
			this->label_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_delete->ForeColor = System::Drawing::Color::Black;
			this->label_delete->Location = System::Drawing::Point(763, 222);
			this->label_delete->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_delete->Name = L"label_delete";
			this->label_delete->Size = System::Drawing::Size(0, 19);
			this->label_delete->TabIndex = 30;
			this->label_delete->Click += gcnew System::EventHandler(this, &form3::label7_Click);
			// 
			// btn_cancelar2
			// 
			this->btn_cancelar2->BackColor = System::Drawing::Color::Tomato;
			this->btn_cancelar2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_cancelar2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_cancelar2->ForeColor = System::Drawing::Color::Black;
			this->btn_cancelar2->Location = System::Drawing::Point(62, 213);
			this->btn_cancelar2->Name = L"btn_cancelar2";
			this->btn_cancelar2->Size = System::Drawing::Size(100, 35);
			this->btn_cancelar2->TabIndex = 16;
			this->btn_cancelar2->Text = L"Regresar";
			this->btn_cancelar2->UseVisualStyleBackColor = false;
			this->btn_cancelar2->Click += gcnew System::EventHandler(this, &form3::button1_Click_1);
			this->btn_cancelar2->MouseHover += gcnew System::EventHandler(this, &form3::btn_cancelar2_MouseHover);
			// 
			// btn_limpiar
			// 
			this->btn_limpiar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_limpiar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_limpiar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold));
			this->btn_limpiar->ForeColor = System::Drawing::Color::Black;
			this->btn_limpiar->Location = System::Drawing::Point(273, 213);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(100, 35);
			this->btn_limpiar->TabIndex = 17;
			this->btn_limpiar->Text = L"Limpiar Datos";
			this->btn_limpiar->UseVisualStyleBackColor = false;
			this->btn_limpiar->Click += gcnew System::EventHandler(this, &form3::button2_Click);
			this->btn_limpiar->MouseHover += gcnew System::EventHandler(this, &form3::btn_limpiar_MouseHover);
			// 
			// btn_categoria
			// 
			this->btn_categoria->Location = System::Drawing::Point(782, 148);
			this->btn_categoria->Name = L"btn_categoria";
			this->btn_categoria->Size = System::Drawing::Size(135, 20);
			this->btn_categoria->TabIndex = 31;
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(929, 261);
			this->Controls->Add(this->btn_categoria);
			this->Controls->Add(this->btn_limpiar);
			this->Controls->Add(this->btn_cancelar2);
			this->Controls->Add(this->label_delete);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->btn_grid);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_imc);
			this->Controls->Add(this->btn_peso);
			this->Controls->Add(this->btn_altura);
			this->Controls->Add(this->btn_edad);
			this->Controls->Add(this->btn_nombre2);
			this->ForeColor = System::Drawing::Color::Chocolate;
			this->Name = L"form3";
			this->Text = L"form3";
			this->Load += gcnew System::EventHandler(this, &form3::form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->data->abrirconexion();
	this->data->insertar(this->btn_nombre2->Text, this->btn_edad->Text,this->btn_peso->Text,this->btn_altura->Text,this->btn_imc->Text,this->btn_categoria->Text);
	this->data->cerrarconexion();
	this->consulta();

	MessageBox::Show(L"Registro Insertado");
}
private: System::Void form3_Load(System::Object^ sender, System::EventArgs^ e) {
	this->consulta();

}public: void consulta() {
	this->data->abrirconexion();
	this->btn_grid->DataSource = this->data->getData();
	this->data->cerrarconexion();
}

private: System::Void btn_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {


	if (btn_grid->SelectedRows->Count > 0 && btn_grid->SelectedRows[0]->Cells->Count > 0)
	{
		int rowIndex = btn_grid->SelectedRows[0]->Index;

		String^ nombre = Convert::ToString(btn_grid->SelectedRows[0]->Cells[0]->Value);
		String^ edad = Convert::ToString(btn_grid->SelectedRows[0]->Cells[1]->Value);
		String^ altura = Convert::ToString(btn_grid->SelectedRows[0]->Cells[2]->Value);
		String^ peso = Convert::ToString(btn_grid->SelectedRows[0]->Cells[3]->Value);
		String^ imc = Convert::ToString(btn_grid->SelectedRows[0]->Cells[4]->Value);
		String^ categoria = Convert::ToString(btn_grid->SelectedRows[0]->Cells[5]->Value);

		Proyecto_IMC::form4^ form = gcnew Proyecto_IMC::form4();

		form->btn_nombre2->Text = nombre;
		form->btn_edad->Text = edad;
		form->btn_altura->Text = altura;
		form->btn_peso->Text = peso;
		form->btn_imc->Text = imc;
		form->btn_categoria->Text = categoria;
		form->ShowDialog();
	
			btn_grid->Rows[rowIndex]->Cells[0]->Value = form->btn_nombre2->Text;
			btn_grid->Rows[rowIndex]->Cells[1]->Value = form->btn_edad->Text;
			btn_grid->Rows[rowIndex]->Cells[2]->Value = form->btn_altura->Text;
			btn_grid->Rows[rowIndex]->Cells[3]->Value = form->btn_peso->Text;
			btn_grid->Rows[rowIndex]->Cells[4]->Value = form->btn_imc->Text;
			btn_grid->Rows[rowIndex]->Cells[5]->Value = form->btn_categoria->Text;


			DB^ data = gcnew DB();
			data->abrirconexion();
			data->modificar(form->btn_nombre2->Text, form->btn_edad->Text,form->btn_altura->Text, form->btn_peso->Text, form->btn_imc->Text, form->btn_categoria->Text, nombre); 
			data->cerrarconexion();
			this->consulta();

	}
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (btn_grid->SelectedRows->Count > 0 && btn_grid->SelectedRows[0]->Cells->Count > 0)
	{
		String^ nombre = Convert::ToString(btn_grid->SelectedRows[0]->Cells[0]->Value);
		DB^ data = gcnew DB();
		data->abrirconexion();
		data->eliminarDB(nombre);
		data->cerrarconexion();
		this->consulta();
	}
	
	


}
private: System::Void btn_grid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (btn_grid->SelectedRows->Count > 0 && btn_grid->SelectedRows[0]->Cells->Count > 0)
	{
		String^ nombre = Convert::ToString(btn_grid->SelectedRows[0]->Cells[0]->Value);
		// Resto del código aquí...
		label_delete->Text = ": " + nombre;
	}	
	

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	LimpiarTextBox(btn_nombre2);
	LimpiarTextBox(btn_altura);
	LimpiarTextBox(btn_edad);
	LimpiarTextBox(btn_imc);
	LimpiarTextBox(btn_peso);
	LimpiarTextBox(btn_categoria);

	// Enfocar el primer TextBox para que el usuario pueda escribir nuevamente
	btn_nombre2->Focus();
	
}
	   void LimpiarTextBox(System::Windows::Forms::TextBox^ textBox) {
		   textBox->Text = "";
	   }
private: System::Void btn_limpiar_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_limpiar, "Limpiar datos");
}
private: System::Void btn_guardar_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_guardar, "Guardar Datos");
}
private: System::Void btn_cancelar2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_cancelar2, "Cancelar Operacion");
}
private: System::Void btn_eliminar_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(btn_eliminar, "Eliminar Datos");
}
private: System::Void btn_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btn_imc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
