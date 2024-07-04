#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "sort_array.h"
#include "generation_error.h"
#include "arr_file_doesnt_exist_warn.h"

namespace practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	std::string marshal_string(String^ s);

	/// <summary>
	/// Summary for generate_dialog
	/// </summary>
	public ref class generate_dialog : public System::Windows::Forms::Form
	{
	public:
		generate_dialog(void)
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
		~generate_dialog()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		size_t array_size;
		int array_from;
		int array_to;
	protected:

	private: System::Windows::Forms::TextBox^ text_from;
	private: System::Windows::Forms::TextBox^ text_to;
	private: System::Windows::Forms::TextBox^ text_size;

	private: System::Windows::Forms::Button^ generate_button;
	protected:



	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(generate_dialog::typeid));
			this->text_size = (gcnew System::Windows::Forms::TextBox());
			this->text_from = (gcnew System::Windows::Forms::TextBox());
			this->generate_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_to = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// text_size
			// 
			this->text_size->Location = System::Drawing::Point(30, 47);
			this->text_size->Name = L"text_size";
			this->text_size->Size = System::Drawing::Size(140, 20);
			this->text_size->TabIndex = 0;
			this->text_size->Text = L"100";
			// 
			// text_from
			// 
			this->text_from->Location = System::Drawing::Point(212, 47);
			this->text_from->Name = L"text_from";
			this->text_from->Size = System::Drawing::Size(143, 20);
			this->text_from->TabIndex = 1;
			this->text_from->Text = L"0";
			// 
			// generate_button
			// 
			this->generate_button->Location = System::Drawing::Point(155, 121);
			this->generate_button->Name = L"generate_button";
			this->generate_button->Size = System::Drawing::Size(75, 23);
			this->generate_button->TabIndex = 2;
			this->generate_button->Text = L"generate";
			this->generate_button->UseVisualStyleBackColor = true;
			this->generate_button->Click += gcnew System::EventHandler(this, &generate_dialog::generate_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(30, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"number of elements";
			// 
			// text_to
			// 
			this->text_to->Location = System::Drawing::Point(212, 92);
			this->text_to->Name = L"text_to";
			this->text_to->Size = System::Drawing::Size(143, 20);
			this->text_to->TabIndex = 5;
			this->text_to->Text = L"10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(256, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"range";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(209, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"from";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(209, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"to";
			// 
			// generate_dialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 156);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text_to);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->generate_button);
			this->Controls->Add(this->text_from);
			this->Controls->Add(this->text_size);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"generate_dialog";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"enter generation parameters";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void generate_button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		std::string temp = marshal_string(text_size->Text);
		array_size = stoi(temp, nullptr, 10);

		temp = marshal_string(text_from->Text);
		array_from = stoi(temp, nullptr, 10);

		temp = marshal_string(text_to->Text);
		array_to = stoi(temp, nullptr, 10);

		if (array_size) 
		{
			if (!generate_array_to_file("array.txt", array_from, array_to, array_size))
			{
				arr_file_doesnt_exist_warn^ form7 = gcnew arr_file_doesnt_exist_warn;
				form7->ShowDialog();
			}
		}
		else 
		{
			generation_error^ form7 = gcnew generation_error;
			form7->ShowDialog();
			return;
		}
		this->Close();
	}
};
}
