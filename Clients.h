#pragma once
#include "CreatePage.h"
#include "ModifyPage.h"

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Clients
	/// </summary>
	public ref class Clients : public System::Windows::Forms::Form
	{
	public:
		Clients(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Clients()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ clientsLbl;
	private: System::Windows::Forms::Button^ createBtn;
	private: System::Windows::Forms::Panel^ clientsContentPanel;
	private: System::Windows::Forms::Button^ modifyBtn;
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
			this->clientsLbl = (gcnew System::Windows::Forms::Label());
			this->createBtn = (gcnew System::Windows::Forms::Button());
			this->clientsContentPanel = (gcnew System::Windows::Forms::Panel());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// clientsLbl
			// 
			this->clientsLbl->AutoSize = true;
			this->clientsLbl->Location = System::Drawing::Point(11, 9);
			this->clientsLbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->clientsLbl->Name = L"clientsLbl";
			this->clientsLbl->Size = System::Drawing::Size(38, 13);
			this->clientsLbl->TabIndex = 0;
			this->clientsLbl->Text = L"Clients";
			// 
			// createBtn
			// 
			this->createBtn->Location = System::Drawing::Point(12, 38);
			this->createBtn->Name = L"createBtn";
			this->createBtn->Size = System::Drawing::Size(75, 23);
			this->createBtn->TabIndex = 1;
			this->createBtn->Text = L"Create";
			this->createBtn->UseVisualStyleBackColor = true;
			this->createBtn->Click += gcnew System::EventHandler(this, &Clients::createBtn_Click);
			// 
			// clientsContentPanel
			// 
			this->clientsContentPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->clientsContentPanel->Location = System::Drawing::Point(0, 82);
			this->clientsContentPanel->Name = L"clientsContentPanel";
			this->clientsContentPanel->Size = System::Drawing::Size(550, 324);
			this->clientsContentPanel->TabIndex = 2;
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(93, 38);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(75, 23);
			this->modifyBtn->TabIndex = 3;
			this->modifyBtn->Text = L"Modify";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &Clients::modifyBtn_Click);
			// 
			// Clients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 406);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->clientsContentPanel);
			this->Controls->Add(this->createBtn);
			this->Controls->Add(this->clientsLbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Clients";
			this->Text = L"Clients";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	#pragma endregion
		private: System::Void createBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			CreatePage^ myCreatePage = gcnew CreatePage("Clients");
			myCreatePage->TopLevel = false;
			clientsContentPanel->Controls->Clear();
			clientsContentPanel->Controls->Add(myCreatePage);
			myCreatePage->Show();
		}

		private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			ModifyPage^ myModifyPage = gcnew ModifyPage("Clients");
			myModifyPage->TopLevel = false;
			clientsContentPanel->Controls->Clear();
			clientsContentPanel->Controls->Add(myModifyPage);
			myModifyPage->Show();
		}
};
}
