#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Instrument_DLL_Sample_CPP::Main form;
	Application::Run(f3orm);
}