#pragma once
#include <string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   
			  
			   
			   this->linkLabel1->BackColor = System::Drawing::Color::White; // linkLabel1 solo la imagen asi que no importa hasta donde se
			   this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			   this->linkLabel1->Location = System::Drawing::Point(42, 21);
			   this->linkLabel1->Name = L"linkLabel1";
			   this->linkLabel1->Size = System::Drawing::Size(685, 40);
			   this->linkLabel1->TabIndex = 8;
			   this->linkLabel1->TabStop = true;
			   this->linkLabel1->Text = L"SISTEMA DE PARQUEOS 2024 LATINO";
			   this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   
			   
			   // esto tambien pal button1 tambien sus caracteristcas
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(252, 145);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(197, 40);
			   this->button1->TabIndex = 12;
			   this->button1->Text = L"BUSCAR VEHICULO";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			  

			   this->button2->Location = System::Drawing::Point(252, 221);//esto pal button2 tambien caracteristicas
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(197, 40);
			   this->button2->TabIndex = 13;
			   this->button2->Text = L"AGREGAR VEHICULO";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			  
			   
			   this->button3->Location = System::Drawing::Point(252, 304);//esta wea es del button3 sus caracteristicas
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(197, 40);
			   this->button3->TabIndex = 14;
			   this->button3->Text = L"DISTRIBUCION VEHICULOS";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			  

			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::White;
			   this->ClientSize = System::Drawing::Size(743, 504);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->linkLabel1);
			   this->Name = L"Form1";
			   this->Text = L"Form1";
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // el boton 1 es de buscar veh�culo todo esto de abajito el show igual
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Form^ buscarVehiculo = gcnew Form();
		buscarVehiculo->Text = "Buscar Veh�culo";
		buscarVehiculo->Size = System::Drawing::Size(400, 300);
		buscarVehiculo->Show();//<<<<<--------
	}
		   // el boton 2 es de agregar veh�culo abajito tambien ahi esta el show
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Form^ agregarVehiculo = gcnew Form();
		agregarVehiculo->Text = "Agregar Veh�culo";
		agregarVehiculo->Size = System::Drawing::Size(400, 300);
		agregarVehiculo->Show();//<<<<<------------
	}


		   // el boton 3 es de distribuci�n veh�culos :v
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Form^ distribucionVehiculos = gcnew Form();
		distribucionVehiculos->Text = "Distribuci�n de Veh�culos";
		distribucionVehiculos->Size = System::Drawing::Size(400, 300);
		distribucionVehiculos->Show();// esta weadita de show nomas crea la otra pestana
	}

	};
}

