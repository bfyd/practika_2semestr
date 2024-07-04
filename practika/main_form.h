#pragma once

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "done_dialog.h"
#include "generate_dialog.h"
#include "sort_array.h"
#include <chrono>

namespace practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	namespace fs = std::filesystem;

	const std::string array_filename = "array.txt";
	const std::string sorted_filename = "sorted.txt";
	float duration_ms;
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
			this->open_sorted_file_button->Location = System::Drawing::Point(178, 91);
			this->open_sorted_file_button->Name = L"open_sorted_file_button";
			this->open_sorted_file_button->Size = System::Drawing::Size(93, 23);
			this->open_sorted_file_button->TabIndex = 0;
			this->open_sorted_file_button->Text = L"open sorted file";
			this->open_sorted_file_button->UseVisualStyleBackColor = true;
			this->open_sorted_file_button->Click += gcnew System::EventHandler(this, &main_form::open_sorted_file_button_Click);
			// 
			// open_array_file_button
			// 
			this->open_array_file_button->Location = System::Drawing::Point(178, 39);
			this->open_array_file_button->Name = L"open_array_file_button";
			this->open_array_file_button->Size = System::Drawing::Size(93, 23);
			this->open_array_file_button->TabIndex = 1;
			this->open_array_file_button->Text = L"open array file";
			this->open_array_file_button->UseVisualStyleBackColor = true;
			this->open_array_file_button->Click += gcnew System::EventHandler(this, &main_form::open_array_file_button_Click);
			// 
			// sort_elements_button
			// 
			this->sort_elements_button->Location = System::Drawing::Point(43, 91);
			this->sort_elements_button->Name = L"sort_elements_button";
			this->sort_elements_button->Size = System::Drawing::Size(93, 23);
			this->sort_elements_button->TabIndex = 2;
			this->sort_elements_button->Text = L"sort elements";
			this->sort_elements_button->UseVisualStyleBackColor = true;
			this->sort_elements_button->Click += gcnew System::EventHandler(this, &main_form::sort_elements_button_Click);
			// 
			// generate_array_button
			// 
			this->generate_array_button->Location = System::Drawing::Point(43, 39);
			this->generate_array_button->Name = L"generate_array_button";
			this->generate_array_button->Size = System::Drawing::Size(93, 23);
			this->generate_array_button->TabIndex = 3;
			this->generate_array_button->Text = L"generate array";
			this->generate_array_button->UseVisualStyleBackColor = true;
			this->generate_array_button->Click += gcnew System::EventHandler(this, &main_form::generate_array_button_Click);
			// 
			// open_files_directory_button
			// 
			this->open_files_directory_button->Location = System::Drawing::Point(178, 141);
			this->open_files_directory_button->Name = L"open_files_directory_button";
			this->open_files_directory_button->Size = System::Drawing::Size(93, 23);
			this->open_files_directory_button->TabIndex = 4;
			this->open_files_directory_button->Text = L"open directory";
			this->open_files_directory_button->UseVisualStyleBackColor = true;
			this->open_files_directory_button->Click += gcnew System::EventHandler(this, &main_form::open_files_directory_button_Click);
			// 
			// main_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 206);
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
		fs::path filename = array_filename;
		if (fs::exists(filename))
		{
			Process::Start("notepad.exe", gcnew String(filename.string().c_str()));
		}
		else
		{
			// TODO: array file does not exist error
		}
	}

	private: System::Void open_sorted_file_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fs::path filename = sorted_filename;
		if (fs::exists(filename))
		{
			Process::Start("notepad.exe", gcnew String(filename.string().c_str()));
		}
		else
		{
			// TODO: sorted file does not exist error
		}
	}
	private: System::Void open_files_directory_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fs::path dir_path = fs::current_path();
		if (fs::exists(dir_path) && fs::is_directory(dir_path))
		{
			Process::Start("explorer.exe", gcnew String(dir_path.string().c_str()));
		}
		else 
		{
			// TODO: dir does not exist error
		}
	}

	private: System::Void sort_elements_button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		fs::path filename = array_filename;
		if (fs::exists(filename))
		{
			int32_t* array = nullptr;
			size_t size = 0;

			if (read_array_from_file(array_filename, array, size))
			{
				bool result = false;
				std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
				result = sort_array(array, size);
				std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
				if (!result)
				{
					// TODO: sort error
				}
				duration_ms = ((float)std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count())/1000;

				if (!save_array_to_file(sorted_filename, array, size))
				{
					// TODO: sort error
				}
			}
			else
			{
				// TODO: sort error
			}
			// TODO: show time elapsed
		}
		else 
		{
			// TODO: array does not exist error
		}
	}
};
}