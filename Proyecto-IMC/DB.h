#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;


ref class DB
{
private: String^ conncetionstring;
	   MySqlConnection^ conn;

public:
	DB();
	DataTable^ getData();
	void abrirconexion();
	void cerrarconexion();
	void insertar(String^, String^, String^, String^, String^, String^);
	void modificar(String^, String^, String^, String^, String^, String^,String^);
	void eliminarDB(String^);
	

};

ref class A1 {
public:
	double multiplicar(double a, double b);

private:
	double connectionState;
};

