#include "WinFormHeader.h"
#include "CodeHeader.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;

#define TEST_MODE 0

[STAThreadAttribute]
void main()
{
	if (!TEST_MODE)
	{
		Application::SetCompatibleTextRenderingDefault(false);
		Application::EnableVisualStyles();
		Guessthelanguage::WinForm form;
		Application::Run(% form);
	}
	else
	{
		Tests::testCall();
	}
}