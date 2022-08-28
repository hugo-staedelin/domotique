// Telerupteur.cpp : définit le point d'entrée pour l'application console.
//

#include <iostream>

//#include "lampe.h"
#include "led.h"
#include "trupteur.h"
#include "poussoir.h"

using namespace std;
using namespace Domotique;

int main(int argc, char* argv[])
{
	cout << "simulation d'un telerupteur " << endl;
//	Lampe    maLampe;
	Led    maLampe;
	TRupteur monTelerupteur;
	Poussoir monPoussoir1;
	Poussoir monPoussoir2;

	monPoussoir1.Cabler( &monTelerupteur);
	monPoussoir2.Cabler( &monTelerupteur);
	monTelerupteur.Cabler( (Lampe *)&maLampe);

	while (1)
	{
		int no; cout << " poussoir(1) poussoir(2) ?" ; cin >> no;
		if (no == 1)  monPoussoir1.Impulser () ;
		else          monPoussoir1.Impulser () ;
		if (maLampe.EstAllumee() == true)
			cout << "La lampe est allumee " << endl;
		else
			cout << "La lampe est eteinte " << endl;
	}

	cout << "une touche ... "; cin.ignore (2);
	return 0;
}

