#pragma once
#include <thread>
#include <string>
#include <Windows.h>
#include "Help.h"



void Update_Gold();
void Sever_source(System::Object^ obj);
void Server_Run();
void Disconect_All_Server();
void Save();

namespace Server {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Server_form
	/// </summary>
	public ref class Server_form : public System::Windows::Forms::Form
	{
	public:
		
		
		Server_form(void)
		{
			std::thread update(Update_Gold);
			update.detach();
			std::thread run(Server_Run);
			run.detach();
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Thread^ server_source = gcnew Thread(gcnew ParameterizedThreadStart(&Sever_source));
			server_source->Start(this);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Server_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Client_status;




	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ Disconect_All;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Socket_ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Work;
	private: System::Windows::Forms::Label^ label1;
















	protected:

	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Server_form::typeid));
			this->Client_status = (gcnew System::Windows::Forms::DataGridView());
			this->Socket_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Work = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->Disconect_All = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Client_status))->BeginInit();
			this->SuspendLayout();
			// 
			// Client_status
			// 
			this->Client_status->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Client_status->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Socket_ID,
					this->Username, this->Status, this->Work
			});
			this->Client_status->Location = System::Drawing::Point(12, 76);
			this->Client_status->Name = L"Client_status";
			this->Client_status->ReadOnly = true;
			this->Client_status->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Client_status->Size = System::Drawing::Size(563, 218);
			this->Client_status->TabIndex = 0;
			this->Client_status->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Server_form::Client_status_CellContentClick);
			// 
			// Socket_ID
			// 
			this->Socket_ID->HeaderText = L"Socket ID";
			this->Socket_ID->Name = L"Socket_ID";
			this->Socket_ID->ReadOnly = true;
			// 
			// Username
			// 
			this->Username->HeaderText = L"Username";
			this->Username->Name = L"Username";
			this->Username->ReadOnly = true;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Status";
			this->Status->Name = L"Status";
			this->Status->ReadOnly = true;
			// 
			// Work
			// 
			this->Work->HeaderText = L"Work";
			this->Work->Name = L"Work";
			this->Work->ReadOnly = true;
			this->Work->Width = 210;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Server_form::backgroundWorker1_DoWork);
			// 
			// Disconect_All
			// 
			this->Disconect_All->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Disconect_All->Location = System::Drawing::Point(584, 76);
			this->Disconect_All->Name = L"Disconect_All";
			this->Disconect_All->Size = System::Drawing::Size(133, 30);
			this->Disconect_All->TabIndex = 1;
			this->Disconect_All->Text = L"Disconect all client";
			this->Disconect_All->UseVisualStyleBackColor = true;
			this->Disconect_All->Click += gcnew System::EventHandler(this, &Server_form::Disconect_All_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(41, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Server";
			// 
			// Server_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(729, 321);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Disconect_All);
			this->Controls->Add(this->Client_status);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Server_form";
			this->Text = L"Server";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Server_form::Server_form_Closed);
			this->Load += gcnew System::EventHandler(this, &Server_form::Server_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Client_status))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Server_form_Load(System::Object^ sender, System::EventArgs^ e) {
		Client_status->Rows->Add(15);
	}
	private: System::Void Client_status_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {

	}
	private: System::Void Disconect_All_Click(System::Object^ sender, System::EventArgs^ e) {
		Disconect_All_Server();
	}
	private: System::Void Server_form_Closed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Save();
		exit(0);
	}
};
}
