#pragma once

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "arr_file_doesnt_exist_warn.h"
#include "done_dialog.h"
#include "generate_dialog.h"
#include "rewrite_arr_file_warn.h"
#include "rewrite_sorted_file_warn.h"
#include "sorted_file_doesnot_exists.h"
#include "directory_doesnt_exist.h"

namespace practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	namespace fs = std::filesystem;

	/// <summary>
	/// Summary for main_form
	/// </summary>
	public ref class main_form : public System::Windows::Forms::Form
	{
	public:
		main_form(void)
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
		~main_form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ open_sorted_file_button;
	protected:

	private: System::Windows::Forms::Button^ open_array_file_button;
	protected:

	private: System::Windows::Forms::Button^ sort_elements_button;

	private: System::Windows::Forms::Button^ generate_array_button;
	private: System::Windows::Forms::Button^ open_files_directory_button;



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
			this->open_sorted_file_button = (gcnew System::Windows::Forms::Button());
			this->open_array_file_button = (gcnew System::Windows::Forms::Button());
			this->sort_elements_button = (gcnew System::Windows::Forms::Button());
			this->generate_array_button = (gcnew System::Windows::Forms::Button());
			this->open_files_directory_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// open_sorted_file_button
			// 
			this->open_sorted_file_button->Location = System::Drawing::Point(358, 121);
			this->open_sorted_file_button->Name = L"open_sorted_file_button";
			this->open_sorted_file_button->Size = System::Drawing::Size(93, 23);
			this->open_sorted_file_button->TabIndex = 0;
			this->open_sorted_file_button->Text = L"open sorted file";
			this->open_sorted_file_button->UseVisualStyleBackColor = true;
			this->open_sorted_file_button->Click += gcnew System::EventHandler(this, &main_form::open_sorted_file_button_Click);
			// 
			// open_array_file_button
			// 
			this->open_array_file_button->Location = System::Drawing::Point(358, 78);
			this->open_array_file_button->Name = L"open_array_file_button";
			this->open_array_file_button->Size = System::Drawing::Size(93, 23);
			this->open_array_file_button->TabIndex = 1;
			this->open_array_file_button->Text = L"open array file";
			this->open_array_file_button->UseVisualStyleBackColor = true;
			this->open_array_file_button->Click += gcnew System::EventHandler(this, &main_form::open_array_file_button_Click);
			// 
			// sort_elements_button
			// 
			this->sort_elements_button->Location = System::Drawing::Point(43, 170);
			this->sort_elements_button->Name = L"sort_elements_button";
			this->sort_elements_button->Size = System::Drawing::Size(93, 23);
			this->sort_elements_button->TabIndex = 2;
			this->sort_elements_button->Text = L"sort elements";
			this->sort_elements_button->UseVisualStyleBackColor = true;
			// 
			// generate_array_button
			// 
			this->generate_array_button->Location = System::Drawing::Point(43, 121);
			this->generate_array_button->Name = L"generate_array_button";
			this->generate_array_button->Size = System::Drawing::Size(93, 23);
			this->generate_array_button->TabIndex = 3;
			this->generate_array_button->Text = L"generate array";
			this->generate_array_button->UseVisualStyleBackColor = true;
			this->generate_array_button->Click += gcnew System::EventHandler(this, &main_form::generate_array_button_Click);
			// 
			// open_files_directory_button
			// 
			this->open_files_directory_button->Location = System::Drawing::Point(358, 170);
			this->open_files_directory_button->Name = L"open_files_directory_button";
			this->open_files_directory_button->Size = System::Drawing::Size(107, 23);
			this->open_files_directory_button->TabIndex = 4;
			this->open_files_directory_button->Text = L"open files directory";
			this->open_files_directory_button->UseVisualStyleBackColor = true;
			this->open_files_directory_button->Click += gcnew System::EventHandler(this, &main_form::open_files_directory_button_Click);
			// 
			// main_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 331);
			this->Controls->Add(this->open_files_directory_button);
			this->Controls->Add(this->generate_array_button);
			this->Controls->Add(this->sort_elements_button);
			this->Controls->Add(this->open_array_file_button);
			this->Controls->Add(this->open_sorted_file_button);
			this->Name = L"main_form";
			this->Text = L"main_form";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void generate_array_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		generate_dialog^ form3 = gcnew generate_dialog();
		form3->ShowDialog();
	}
	private: System::Void open_array_file_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fs::path arr_filename = "D:\\prog\\practika\\text_files\\array.txt";
		if (fs::exists(arr_filename))
		{
			Process::Start("notepad.exe", gcnew String(arr_filename.string().c_str()));
		}
		else
		{
			arr_file_doesnt_exist_warn^ form4 = gcnew arr_file_doesnt_exist_warn();
			form4->ShowDialog();
		}
	}

	private: System::Void open_sorted_file_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fs::path sorted_filename = "D:\\prog\\practika\\text_files\\sorted.txt";
		if (fs::exists(sorted_filename))
		{
			Process::Start("notepad.exe", gcnew String(sorted_filename.string().c_str()));
		}
		else
		{
			sorted_file_doesnot_exists^ form5 = gcnew sorted_file_doesnot_exists();
			form5->ShowDialog();
		}
	}
	private: System::Void open_files_directory_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fs::path dir_path = "D:\\prog\\practika\\text_files\\";
		if (fs::exists(dir_path) && fs::is_directory(dir_path))
		{
			Process::Start("explorer.exe", gcnew String(dir_path.string().c_str()));
		}
		else 
		{
			directory_doesnt_exist^ form5 = gcnew directory_doesnt_exist();
			form5->ShowDialog();
		}
	}
};
}