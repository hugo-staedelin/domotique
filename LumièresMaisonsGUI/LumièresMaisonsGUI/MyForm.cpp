#include "MyForm.h"

using namespace Lumi�resMaisonsGUI;
[STAThreadAttribute] 

int main(array<System::String ^> ^args) 
{ 
	// Cr�er la fen�tre principale et l'ex�cuter 
	Application::Run(gcnew MyForm()); 
	return 0; 
}