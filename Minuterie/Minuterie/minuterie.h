#pragma once

#include "trupteur.h"
#include <windows.h>
const int TPS = 60000;

namespace Domotique
{
	class Minuterie : public TRupteur
{
private:

	int m_duree;
	HANDLE m_thread;

public:
	Minuterie();
	void Regler(int duree);
	void Impulser();
	static DWORD WINAPI tache (LPVOID arg);
};

}