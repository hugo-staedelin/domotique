#include <iostream>

#include "lampe.h"
#include "minuterie.h"
#include "poussoir.h"

using namespace std;
using namespace Domotique;

int main(int argc, char* argv[])
{
cout<<"Simulation d'une minuterie \n";
char reponse;
Lampe maLampe;
Minuterie maMinuterie;
Poussoir monPoussoir;
int duree = 30000;

monPoussoir.Cabler((TRupteur*),&maLampe);
maMinuterie.Cabler(&maLampe);

maMinuterie.Regler(duree);
while(1)
{
bool etat = maLampe.EstAllumee();
string texte = (etat == true) ? "allumée" : "eteinte";
cout <<"La lampe est "<<etat<<endl;
cout <<"Taper <Enter> ... "<<endl;
reponse = cin.get();
monPoussoir.Impulser();
}

cout<<"Une touche ..."; cin.ignore(2);
}