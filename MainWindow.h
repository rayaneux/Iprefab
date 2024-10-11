#pragma once
#include "Clients.h"
#include "Personnel.h"

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ navBar;
	private: System::Windows::Forms::Button^ clientBtn;
	protected:

	private: System::Windows::Forms::Panel^ contentPanel;
	private: System::Windows::Forms::Button^ personnelBtn;


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
			this->navBar = (gcnew System::Windows::Forms::Panel());
			this->clientBtn = (gcnew System::Windows::Forms::Button());
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->personnelBtn = (gcnew System::Windows::Forms::Button());
			this->navBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// navBar
			// 
			this->navBar->Controls->Add(this->personnelBtn);
			this->navBar->Controls->Add(this->clientBtn);
			this->navBar->Dock = System::Windows::Forms::DockStyle::Left;
			this->navBar->Location = System::Drawing::Point(0, 0);
			this->navBar->Name = L"navBar";
			this->navBar->Size = System::Drawing::Size(200, 556);
			this->navBar->TabIndex = 0;
			// 
			// clientBtn
			// 
			this->clientBtn->Location = System::Drawing::Point(12, 141);
			this->clientBtn->Name = L"clientBtn";
			this->clientBtn->Size = System::Drawing::Size(182, 47);
			this->clientBtn->TabIndex = 0;
			this->clientBtn->Text = L"Clients";
			this->clientBtn->UseVisualStyleBackColor = true;
			this->clientBtn->Click += gcnew System::EventHandler(this, &MainWindow::clientBtn_Click);
			// 
			// contentPanel
			// 
			this->contentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contentPanel->Location = System::Drawing::Point(200, 0);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(658, 556);
			this->contentPanel->TabIndex = 1;
			// 
			// personnelBtn
			// 
			this->personnelBtn->Location = System::Drawing::Point(12, 206);
			this->personnelBtn->Name = L"personnelBtn";
			this->personnelBtn->Size = System::Drawing::Size(182, 47);
			this->personnelBtn->TabIndex = 1;
			this->personnelBtn->Text = L"Personnel";
			this->personnelBtn->UseVisualStyleBackColor = true;
			this->personnelBtn->Click += gcnew System::EventHandler(this, &MainWindow::personnelBtn_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 556);
			this->Controls->Add(this->contentPanel);
			this->Controls->Add(this->navBar);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->navBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		#pragma endregion
		private: System::Void clientBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			Clients^ myClientPage = gcnew Clients();
			myClientPage->TopLevel = false;
			contentPanel->Controls->Clear();
			contentPanel->Controls->Add(myClientPage);
			myClientPage->Show();
		}

		private: System::Void personnelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			Personnel^ personnelPage = gcnew Personnel();
			personnelPage->TopLevel = false;
			contentPanel->Controls->Clear();
			contentPanel->Controls->Add(personnelPage);
			personnelPage->Show();
		}
};
}
