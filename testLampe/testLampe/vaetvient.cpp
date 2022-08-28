// VaEtVient.cpp : définit le point d'entrée pour l'application console.
//

#include <iostream>
#include "lampe.h"
#include "commutateur.h"

using namespace std;
using namespace Domotique;

int main(int argc, char* argv[])
{
	cout << "simulation d'un va et vient " << endl;
	Lampe         maLampe;
	Commutateur mInter1;
	Commutateur mInter2;

	int no;

	// **** Faire le cablage

	while (1)
	{
		cout << " Entrez le commutateur " ; cin >> no;
		switch (no)
		{
			case 1: mInter1.Basculer (); break;
			case 2: mInter2.Basculer (); break;
		}
		cout << "Lampe ";
        if( maLampe.EstAllumee() )
              	cout << " allumee!" << endl;
        else
        	    cout << " eteinte!" << endl;
	}
	
	cout << "une touche ... "; cin.ignore (1);
	return 0;
}

