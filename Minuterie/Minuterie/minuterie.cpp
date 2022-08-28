#include <iostream>
#include "minuterie.h"

using namespace std;
using namespace Domotique;

Minuterie::Minuterie()  : TRupteur()
{
	m_duree = 0;
	m_thread = CreateThread(NULL, 0, tache, this, CREATE_SUSPENDED, NULL);
}
Minuterie::Regler()
{

}
Minuterie::Impulser()
{

}

DWORD WINAPI Minuterie::tache(LPVOID arg)
{
	cout<<"Tache:demarrage "<<endl;
	Minuterie* ptr = (Minuterie*)arg;
	while(1)
	{
		Sleep(ptr->m_duree);
		ptr->m_recepteur->Eteindre();
		ptr->m_etat = false;
		cout<<" La lampe s eteint"<<endl;
		SuspendThread(ptr->m_thread);
	}
}