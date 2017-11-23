#include "MyForm.h"
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TCPP::MyForm form;
	Application::Run(%form);
}