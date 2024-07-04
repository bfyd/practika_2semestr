#pragma once

namespace practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for file_doesnot_exists
	/// </summary>
	public ref class sorted_file_doesnot_exists : public System::Windows::Forms::Form
	{
	public:
		sorted_file_doesnot_exists(void)
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
		~sorted_file_doesnot_exists()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ close_fdne;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->close_fdne = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// close_fdne
			// 
			this->close_fdne->Location = System::Drawing::Point(157, 97);
			this->close_fdne->Name = L"close_fdne";
			this->close_fdne->Size = System::Drawing::Size(31, 20);
			this->close_fdne->TabIndex = 0;
			this->close_fdne->Text = L"OK";
			this->close_fdne->UseVisualStyleBackColor = true;
			this->close_fdne->Click += gcnew System::EventHandler(this, &sorted_file_doesnot_exists::close_fdne_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(130, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"sorted file does not exist";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(90, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"please sort it first";
			// 
			// sorted_file_doesnot_exists
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(345, 129);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->close_fdne);
			this->Name = L"sorted_file_doesnot_exists";
			this->Text = L"error";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void close_fdne_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	};
}
