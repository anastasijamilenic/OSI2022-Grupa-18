#include "MyForm.h"
#include "RegistrationForm.h"
#include "ChangePasswordForm.h"
#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	hotelOSI::MyForm form;
	Application::Run(% form);
}
