#pragma once

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "arr_file_doesnt_exist_warn.h"
#include "generate_dialog.h"
#include "sorted_file_doesnt_exist_warn.h"
#include "directory_doesnt_exist.h"
#include "show_time_dialog.h"
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main_form::typeid));
			this->open_sorted_file_button = (gcnew System::Windows::Forms::Button());
			this->open_array_file_button = (gcnew System::Windows::Forms::Button());
			this->sort_elements_button = (gcnew System::Windows::Forms::Button());
			this->generate_array_button = (gcnew System::Windows::Forms::Button());
			this->open_files_directory_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// open_sorted_file_button
			// 
			this->open_sorted_file_button->Location = System::Drawing::Point(252, 108);
			this->open_sorted_file_button->Name = L"open_sorted_file_button";
			this->open_sorted_file_button->Size = System::Drawing::Size(215, 23);
			this->open_sorted_file_button->TabIndex = 0;
			this->open_sorted_file_button->Text = L"open sorted file";
			this->open_sorted_file_button->UseVisualStyleBackColor = true;
			this->open_sorted_file_button->Click += gcnew System::EventHandler(this, &main_form::open_sorted_file_button_Click);
			// 
			// open_array_file_button
			// 
			this->open_array_file_button->Location = System::Drawing::Point(252, 56);
			this->open_array_file_button->Name = L"open_array_file_button";
			this->open_array_file_button->Size = System::Drawing::Size(215, 23);
			this->open_array_file_button->TabIndex = 1;
			this->open_array_file_button->Text = L"open array file";
			this->open_array_file_button->UseVisualStyleBackColor = true;
			this->open_array_file_button->Click += gcnew System::EventHandler(this, &main_form::open_array_file_button_Click);
			// 
			// sort_elements_button
			// 
			this->sort_elements_button->Location = System::Drawing::Point(12, 108);
			this->sort_elements_button->Name = L"sort_elements_button";
			this->sort_elements_button->Size = System::Drawing::Size(214, 23);
			this->sort_elements_button->TabIndex = 2;
			this->sort_elements_button->Text = L"sort elements";
			this->sort_elements_button->UseVisualStyleBackColor = true;
			this->sort_elements_button->Click += gcnew System::EventHandler(this, &main_form::sort_elements_button_Click);
			// 
			// generate_array_button
			// 
			this->generate_array_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->generate_array_button->Location = System::Drawing::Point(12, 56);
			this->generate_array_button->Name = L"generate_array_button";
			this->generate_array_button->Size = System::Drawing::Size(214, 23);
			this->generate_array_button->TabIndex = 3;
			this->generate_array_button->Text = L"generate array";
			this->generate_array_button->UseVisualStyleBackColor = true;
			this->generate_array_button->Click += gcnew System::EventHandler(this, &main_form::generate_array_button_Click);
			// 
			// open_files_directory_button
			// 
			this->open_files_directory_button->Location = System::Drawing::Point(252, 158);
			this->open_files_directory_button->Name = L"open_files_directory_button";
			this->open_files_directory_button->Size = System::Drawing::Size(215, 23);
			this->open_files_directory_button->TabIndex = 4;
			this->open_files_directory_button->Text = L"open directory";
			this->open_files_directory_button->UseVisualStyleBackColor = true;
			this->open_files_directory_button->Click += gcnew System::EventHandler(this, &main_form::open_files_directory_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(87, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Actions";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(335, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Files";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(257, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"By: Yurov, Vidyaev, Zhiganov";
			// 
			// main_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 231);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->open_files_directory_button);
			this->Controls->Add(this->generate_array_button);
			this->Controls->Add(this->sort_elements_button);
			this->Controls->Add(this->open_array_file_button);
			this->Controls->Add(this->open_sorted_file_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"main_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"arsorator";
			this->ResumeLayout(false);
			this->PerformLayout();

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
			arr_file_doesnt_exist_warn^ form4 = gcnew arr_file_doesnt_exist_warn();
			form4->ShowDialog();
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
			sorted_file_doesnt_exist_warn^ form5 = gcnew sorted_file_doesnt_exist_warn();
			form5->ShowDialog();
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
			directory_doesnt_exist^ form5 = gcnew directory_doesnt_exist();
			form5->ShowDialog();
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
					sorted_file_doesnt_exist_warn^ form8 = gcnew sorted_file_doesnt_exist_warn;
					form8->ShowDialog();
					return;
				}
				duration_ms = ((float)std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count())/1000;

				if (!save_array_to_file(sorted_filename, array, size))
				{
					sorted_file_doesnt_exist_warn^ form8 = gcnew sorted_file_doesnt_exist_warn;
					form8->ShowDialog();
					return;
				}
			}
			else
			{
				sorted_file_doesnt_exist_warn^ form8 = gcnew sorted_file_doesnt_exist_warn;
				form8->ShowDialog();
				return;
			}
			show_time_dialog^ form9 = gcnew show_time_dialog(duration_ms);
			form9->ShowDialog();
		}
		else 
		{
			arr_file_doesnt_exist_warn^ form6 = gcnew arr_file_doesnt_exist_warn;
			form6->ShowDialog();
		}
	}
};
}