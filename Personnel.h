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
	/// Summary for Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ personnelLbl;
	private: System::Windows::Forms::Button^ createBtn;
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Panel^ personnelContentPanel;
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
			this->personnelLbl = (gcnew System::Windows::Forms::Label());
			this->createBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->personnelContentPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// personnelLbl
			// 
			this->personnelLbl->AutoSize = true;
			this->personnelLbl->Location = System::Drawing::Point(12, 9);
			this->personnelLbl->Name = L"personnelLbl";
			this->personnelLbl->Size = System::Drawing::Size(54, 13);
			this->personnelLbl->TabIndex = 0;
			this->personnelLbl->Text = L"Personnel";
			// 
			// createBtn
			// 
			this->createBtn->Location = System::Drawing::Point(12, 37);
			this->createBtn->Name = L"createBtn";
			this->createBtn->Size = System::Drawing::Size(75, 23);
			this->createBtn->TabIndex = 2;
			this->createBtn->Text = L"Create";
			this->createBtn->UseVisualStyleBackColor = true;
			this->createBtn->Click += gcnew System::EventHandler(this, &Personnel::createBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(93, 37);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(75, 23);
			this->modifyBtn->TabIndex = 4;
			this->modifyBtn->Text = L"Modify";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &Personnel::modifyBtn_Click_1);
			// 
			// personnelContentPanel
			// 
			this->personnelContentPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->personnelContentPanel->Location = System::Drawing::Point(0, 79);
			this->personnelContentPanel->Name = L"personnelContentPanel";
			this->personnelContentPanel->Size = System::Drawing::Size(612, 415);
			this->personnelContentPanel->TabIndex = 5;
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 494);
			this->Controls->Add(this->personnelContentPanel);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->createBtn);
			this->Controls->Add(this->personnelLbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

		

		private: System::Void createBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			CreatePage^ myCreatePage = gcnew CreatePage("Personnel");
			myCreatePage->TopLevel = false;
			personnelContentPanel->Controls->Clear();
			personnelContentPanel->Controls->Add(myCreatePage);
			myCreatePage->Show();
		}

		private: System::Void modifyBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
			ModifyPage^ myModifyPage = gcnew ModifyPage("Personnel");
			myModifyPage->TopLevel = false;
			personnelContentPanel->Controls->Clear();
			personnelContentPanel->Controls->Add(myModifyPage);
			myModifyPage->Show();
		}
};
}
