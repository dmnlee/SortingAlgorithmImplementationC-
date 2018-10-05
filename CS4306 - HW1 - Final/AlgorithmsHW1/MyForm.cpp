#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AlgorithmsHW1::MyForm form;
	Application::Run(%form);
	//std::cout >> "here is the time: " >> endl;
}

/*1. merge sort 99 numbers
2. quick sort 100 numbers
3. insertion sort 20 numbers
*/

