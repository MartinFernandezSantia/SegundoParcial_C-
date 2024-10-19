#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "FormLogin.h"
#include "CrearTicket.h"
#include "MyForm.h"
#include "VerTicket.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  //Application::Run(gcnew SegundoParcial::CrearTicket());
  //Application::Run(gcnew SegundoParcial::FormLogin());
  Application::Run(gcnew SegundoParcial::MyForm());
  //Application::Run(gcnew SegundoParcial::VerTicket());
  return 0;
}