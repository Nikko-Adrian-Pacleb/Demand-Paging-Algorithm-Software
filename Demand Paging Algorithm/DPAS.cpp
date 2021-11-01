#include "DPAS.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DemandPagingAlgorithm::DPAS form;
	//--!!--
	
	Application::Run(% form);
}