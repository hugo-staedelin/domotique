#include "poussoir.h"
using namespace Domotique;
Poussoir::Poussoir() 
{
	m_rupteur = 0;
}
//---------------------------------------------------------------------------
void Poussoir::Cabler(TRupteur *rupteur)
{
	m_rupteur = rupteur;
}
//---------------------------------------------------------------------------
void Poussoir::Impulser()
{
	if(m_rupteur) // sécurité pour association
	m_rupteur->Impulser();
}
//---------------------------------------------------------------------------
