#include "MyForm.h"
//#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

//[STAThread]
void main(array<String^>^ args) {

	AllocConsole();
	//freopen("CONOUT$", "w", stdout);
	//freopen("CONIN$", "r", stdin);

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	StartProject::MyForm frm;
	Application::Run(% frm);
}