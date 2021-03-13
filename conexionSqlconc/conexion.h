#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
ref class conexion
{
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	public : 
		conexion() ;
	
protected:
	void conectar() {
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "DESKTOP-1CPJ7G8\\SQLEXPRESS";
		st->InitialCatalog = "Registros";
		st->IntegratedSecurity=true;
		cn = gcnew SqlConnection(Convert::ToString(st));
	}
public:
	void Mostrar() {
		conectar();
		DataSet^ ds=gcnew DataSet();
		DataTable^ dt = gcnew DataTable();
		DataRow^ fila;

		SqlDataAdapter^ da= gcnew SqlDataAdapter("Select * From Mascotas", cn);//crear una instancia de query
		SqlCommandBuilder^ cmdbuilder = gcnew SqlCommandBuilder(da);//envio mi query
		da->Fill(dt);



	}

};

