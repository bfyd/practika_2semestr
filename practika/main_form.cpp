#include "main_form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	practic::main_form form1;
	Application::Run(% form1);
}

namespace practic 
{
	/*int generate_array()
	{
		std::ofstream out;
	}

	int open_arr_file()
	{


	}

	int open_arr_file()
	{


	}*/
	void openFileInNotepad(const std::string& filename) 
	{
		// ��������� ������� ��� �������� ����� � ��������
		std::string command = "notepad " + filename;

		// ��������� �������
		int result = system(command.c_str());

		// ��������� ��������� ���������� �������
		if (result != 0) {
			std::cerr << "�� ������� ������� ���� " << filename << " � ��������." << std::endl;
	}
}
}