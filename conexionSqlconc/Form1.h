#pragma once
#include "conexion.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data;
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
	private: System::Windows::Forms::DataGridView^ dgMascotas;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ edad;
	private: System::Windows::Forms::Button^ btnMostrarMascotas;

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
			this->dgMascotas = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnMostrarMascotas = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgMascotas))->BeginInit();
			this->SuspendLayout();
			// 
			// dgMascotas
			// 
			this->dgMascotas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgMascotas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->codigo, this->nombre,
					this->edad
			});
			this->dgMascotas->Location = System::Drawing::Point(40, 164);
			this->dgMascotas->Name = L"dgMascotas";
			this->dgMascotas->Size = System::Drawing::Size(654, 263);
			this->dgMascotas->TabIndex = 0;
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"CODIGO";
			this->codigo->Name = L"codigo";
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"NOMBRE";
			this->nombre->Name = L"nombre";
			// 
			// edad
			// 
			this->edad->HeaderText = L"EDAD";
			this->edad->Name = L"edad";
			// 
			// btnMostrarMascotas
			// 
			this->btnMostrarMascotas->Location = System::Drawing::Point(40, 83);
			this->btnMostrarMascotas->Name = L"btnMostrarMascotas";
			this->btnMostrarMascotas->Size = System::Drawing::Size(75, 23);
			this->btnMostrarMascotas->TabIndex = 1;
			this->btnMostrarMascotas->Text = L"MOSTRAR";
			this->btnMostrarMascotas->UseVisualStyleBackColor = true;
			this->btnMostrarMascotas->Click += gcnew System::EventHandler(this, &Form1::btnMostrarMascotas_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 459);
			this->Controls->Add(this->btnMostrarMascotas);
			this->Controls->Add(this->dgMascotas);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgMascotas))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnMostrarMascotas_Click(System::Object^ sender, System::EventArgs^ e) {
		conexion data;

		/*int n=dgMascotas->Rows->Add();
		dgMascotas->Rows[n]->Cells[0]->Value = "GG";
		dgMascotas->Rows[n]->Cells[1]->Value = "GG2";*/
		data.Mostrar();
	}
};
}
