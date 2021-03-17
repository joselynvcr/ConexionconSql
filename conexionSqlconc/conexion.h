#pragma once
#include <string>
#include <vector>
#include "Mascotas.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
using namespace std;
ref class conexion
{
	SqlConnection^ cn;
	//SqlConnectionStringBuilder^ st;
	public: 
		conexion() {};
	
protected:
	void conectar() {
		//st = gcnew SqlConnectionStringBuilder();
		//st->DataSource = "DESKTOP-B14EN9G\\RYZEN7";
		//st->InitialCatalog = "Registros";
		//st->IntegratedSecurity=true;
		string cadenaConexion = "Data Source=DESKTOP-B14EN9G\\RYZEN7;Initial Catalog=Registros;Integrated Security=True";
		//String^ _cadenaConexion = gcnew String(cadenaConexion.c_str());
		cn = gcnew SqlConnection(gcnew String(cadenaConexion.c_str()));
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

		vector<Mascotas>mascotas;


	}

};

