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
