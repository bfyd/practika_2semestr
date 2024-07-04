#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "sort_array.h"

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


	private: System::Windows::Forms::Label^ label1;
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
			this->text_size = (gcnew System::Windows::Forms::TextBox());
			this->text_from = (gcnew System::Windows::Forms::TextBox());
			this->generate_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_to = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// text_size
			// 
			this->text_size->Location = System::Drawing::Point(35, 80);
			this->text_size->Name = L"text_size";
			this->text_size->Size = System::Drawing::Size(100, 20);
			this->text_size->TabIndex = 0;
			this->text_size->Text = L"100";
			this->text_size->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &generate_dialog::text_size_KeyDown);
			// 
			// text_from
			// 
			this->text_from->Location = System::Drawing::Point(204, 54);
			this->text_from->Name = L"text_from";
			this->text_from->Size = System::Drawing::Size(100, 20);
			this->text_from->TabIndex = 1;
			this->text_from->Text = L"0";
			this->text_from->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &generate_dialog::text_from_KeyDown);
			// 
			// generate_button
			// 
			this->generate_button->Location = System::Drawing::Point(131, 130);
			this->generate_button->Name = L"generate_button";
			this->generate_button->Size = System::Drawing::Size(75, 23);
			this->generate_button->TabIndex = 2;
			this->generate_button->Text = L"generate";
			this->generate_button->UseVisualStyleBackColor = true;
			this->generate_button->Click += gcnew System::EventHandler(this, &generate_dialog::generate_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"enter generation parameters";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"number of elements";
			// 
			// text_to
			// 
			this->text_to->Location = System::Drawing::Point(204, 99);
			this->text_to->Name = L"text_to";
			this->text_to->Size = System::Drawing::Size(100, 20);
			this->text_to->TabIndex = 5;
			this->text_to->Text = L"10";
			this->text_to->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &generate_dialog::text_to_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(204, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"range";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(204, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"from";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(204, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"to";
			// 
			// generate_dialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 174);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text_to);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->generate_button);
			this->Controls->Add(this->text_from);
			this->Controls->Add(this->text_size);
			this->Name = L"generate_dialog";
			this->Text = L"generate_dialog";
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
				// TODO: array file does not exist error
			}
		}
		else 
		{
			// TODO: array file does not exist error
		}
		this->Close();
	}

	private: System::Void text_size_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if (e->KeyCode == Keys::Enter)
		{
			std::string temp = marshal_string(text_from->Text);
			array_size = stoi(temp, nullptr, 10);
		}
	}

	private: System::Void text_from_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if (e->KeyCode == Keys::Enter)
		{
			std::string temp = marshal_string(text_from->Text);
			array_from = stoi(temp, nullptr, 10);
		}
	}

	private: System::Void text_to_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if (e->KeyCode == Keys::Enter)
		{
			std::string temp = marshal_string(text_from->Text);
			array_to = stoi(temp, nullptr, 10);
		}
	}
};
}
