//---------------------------------------------------------------------------
#include <iostream>
#include "minuterie.h"
using namespace std;
using namespace Domotique;
//---------------------------------------------------------------------------
Minuterie::Minuterie(): TRupteur()
{
	m_duree = TPS;
#ifdef WIN32
	m_thread = CreateThread(NULL, 0, tache, this, CREATE_SUSPENDED, NULL);
#else
	pthread_create(&m_thread, NULL, this->tache, this);
	sem_init(&m_sema, 0, 0);
#endif 
}

//---------------------------------------------------------------------------
void	Minuterie::Regler( int duree )
{
	m_duree = duree;
}
//---------------------------------------------------------------------------
void Minuterie::Impulser()
{
	cout << "Minuterie.cpp:Impulser" << endl;
	if (m_recepteur)
	{
			m_etat   = true;
			m_recepteur->Allumer();
#ifdef WIN32
			ResumeThread   (m_thread);
#else
                        sem_post(&m_sema);
#endif
	}
}
//---------------------------------------------------------------------------
#ifdef WIN32
 DWORD WINAPI Minuterie::tache(LPVOID arg)
#else
 void * Minuterie::tache (void *arg)
#endif
 {

	cout << "tache:demarrage " << endl;
	Minuterie* ptr = (Minuterie*)arg;
	while (1)
	{
#ifndef WIN32
		sem_wait(&ptr->m_sema);
		sleep( ptr->m_duree / 1000);
#else
		Sleep(ptr->m_duree);
#endif
		ptr->m_recepteur->Eteindre();
		ptr->m_etat   = false;
		cout << "La lampe s eteint " << endl;
#ifdef WIN32
		SuspendThread(ptr->m_thread);
#endif
	}
}
