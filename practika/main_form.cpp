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
		// Формируем команду для открытия файла в блокноте
		std::string command = "notepad " + filename;

		// Выполняем команду
		int result = system(command.c_str());

		// Проверяем результат выполнения команды
		if (result != 0) {
			std::cerr << "Не удалось открыть файл " << filename << " в блокноте." << std::endl;
	}
}
}