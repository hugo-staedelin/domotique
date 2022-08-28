#include <iostream>
#include "lampe.h"
#include "commutateur.h"

using namespace std;
using namespace Domotique;

int main(int argc, char* argv[])
{
	cout << "simulation d'un va et vient " << endl;
	Lampe       maLampe;
	Commutateur mInter1;
	Commutateur mInter2;
	int			no;
	// Association par cablage
	mInter1.Cabler(&mInter2,&maLampe);
	mInter2.Cabler(&mInter1,&maLampe);

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

