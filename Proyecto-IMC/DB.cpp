#include "pch.h"
#include "DB.h"




DB::DB() {

	this->conncetionstring = "datasource=localhost; username=root; password=balbu325ena; database=IMC";
	this->conn = gcnew MySqlConnection(this->conncetionstring);
}

void DB::abrirconexion() {

	this->conn->Open();
}

void DB::cerrarconexion() {
	this->conn->Close();
}

DataTable^ DB::getData() {
	String^ sql = "select * from usuarios";
	MySqlCommand^ cursor =gcnew MySqlCommand(sql,this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::insertar(String^ n, String^ e, String^ p, String^ a, String^ i,String^c ) {
	String^ sql = "insert into usuarios(nombre, edad , altura ,peso, imc, categoria) values ('" + n + "','" + e + "','"+a+"','"+p+"','"+i+"','"+c+"')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::modificar(String^ n, String^ e, String^ a, String^ p, String^ i, String^ c, String^ ref) {
	String^ sql = "update usuarios set nombre='" + n + "',edad='" + e + "',altura='" + a + "',peso='" + p + "',imc='" + i + "',categoria='" + c + "' where nombre='"+ref+"' ";
	MySqlCommand^ cursor =gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
void DB::eliminarDB(String^ nombre) {
	String^ sql = "delete from usuarios where nombre='"+nombre+"'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Registro eliminado");
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}


double A1:: multiplicar(double a, double b) {

	double resultado;

	resultado = a * b;

	return resultado;

}
