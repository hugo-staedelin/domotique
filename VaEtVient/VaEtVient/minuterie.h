//---------------------------------------------------------------------------
#pragma once
#include "trupteur.h"
#ifdef WIN32
   #include <windows.h>
#else
   #include <stdio.h>
   #include <pthread.h>
   #include <semaphore.h>
#endif

const int TPS = 60000;

namespace Domotique 
{
class Minuterie: public TRupteur
{
    private:
	int     m_duree;
#ifdef WIN32
	HANDLE  m_thread;
#else
	pthread_t  m_thread;
        sem_t      m_sema;
#endif
	public:
    	Minuterie();
        void	Impulser();
		void	Regler(int duree);
	private:
#ifdef WIN32
	static DWORD WINAPI tache(LPVOID arg);
#else
	static void * tache (void *arg);
#endif
};
}

