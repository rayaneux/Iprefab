#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>

namespace MyProject {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreatePage
	/// </summary>
	public ref class CreatePage : public System::Windows::Forms::Form
	{

	public:
		String^ pageType;
		CreatePage(String^ playType)
		{
			this->pageType = playType;
			InitializeComponent();
			customHandleControls();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreatePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create Something";
			// 
			// CreatePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 494);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreatePage";
			this->Text = L"CreatePage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void customHandleControls() {
			if(pageType == "Clients") {
				this->label1->Text = L"Create Client";
			}
			if (pageType == "Personnel") {
				this->label1->Text = L"Create Personnel";
			}
		}

	};
}
