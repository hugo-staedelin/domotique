#include "MyForm.h"

using namespace LumièresMaisonsGUI;
[STAThreadAttribute] 

int main(array<System::String ^> ^args) 
{ 
	// Créer la fenêtre principale et l'exécuter 
	Application::Run(gcnew MyForm()); 
	return 0; 
}