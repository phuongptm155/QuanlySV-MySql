#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;
int main(array<System::String ^ > ^args)


{
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	DoAn1::MyForm f;
	System::Windows::Forms::Application::Run(%f);

	 return 0;
}
