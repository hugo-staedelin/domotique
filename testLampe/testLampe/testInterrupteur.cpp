#include <iostream>
#include "lampe.h"
#include "interrupteur.h"
using namespace std;
// using namespace Domotique;

int main()
{
	Domotique::Interrupteur		monInter;
	Domotique::Lampe			maLampe;
	char						reponse;

	monInter.Cabler(&maLampe);
	do
	{
		cout << "La lampe est ";
		bool etat = maLampe.EstAllumee();
		if (etat == true)
		cout << " allumee !" << endl;
		else cout << " eteinte !" << endl;
		
		//cout << " Taper <Entrer> pour changer l'etat ..." << endl; 
		cout << " Taper <Entrer> pour actionner l'interrupteur ..." << endl;
		reponse = cin.get();
		
		//	Activité 1
		//if (etat == true)	maLampe.Eteindre(); 
		//else				maLampe.Allumer();
		
		
		//	Activité 2
		

		if (reponse == 1) 
			etat = monInter.EstFerme();
		if (etat == true)
			monInter.Ouvrir();
		else
			monInter.Fermer();

	} while (reponse != 'q');
	return 0;
}
