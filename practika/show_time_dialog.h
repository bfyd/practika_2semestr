#pragma once
//#include "sort_array.h"

namespace practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for show_time_dialog
	/// </summary>
	public ref class show_time_dialog : public System::Windows::Forms::Form
	{
	public:
		show_time_dialog(float time)
		{
			InitializeComponent();
			time_textbox->Text = time.ToString();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~show_time_dialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ time_textbox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ time_ok_btn;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(show_time_dialog::typeid));
			this->time_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->time_ok_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// time_textbox
			// 
			this->time_textbox->Enabled = false;
			this->time_textbox->Location = System::Drawing::Point(163, 22);
			this->time_textbox->Name = L"time_textbox";
			this->time_textbox->Size = System::Drawing::Size(98, 20);
			this->time_textbox->TabIndex = 0;
			this->time_textbox->Tag = L"duration_ms";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(68, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"time elapsed";
			// 
			// time_ok_btn
			// 
			this->time_ok_btn->Location = System::Drawing::Point(123, 60);
			this->time_ok_btn->Name = L"time_ok_btn";
			this->time_ok_btn->Size = System::Drawing::Size(58, 22);
			this->time_ok_btn->TabIndex = 2;
			this->time_ok_btn->Text = L"OK";
			this->time_ok_btn->UseVisualStyleBackColor = true;
			this->time_ok_btn->Click += gcnew System::EventHandler(this, &show_time_dialog::time_ok_btn_Click);
			// 
			// show_time_dialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 91);
			this->Controls->Add(this->time_ok_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->time_textbox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"show_time_dialog";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"sorting completed";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void time_ok_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	};
}
