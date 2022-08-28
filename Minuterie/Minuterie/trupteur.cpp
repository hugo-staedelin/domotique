//---------------------------------------------------------------------------
#include "trupteur.h"
using namespace Domotique;
TRupteur::TRupteur() 
{
	m_etat = false;
}
//---------------------------------------------------------------------------
void TRupteur::Cabler(Lampe *dipole)
{
	m_recepteur = dipole;
}
//---------------------------------------------------------------------------
void TRupteur::Impulser()
{
	if(m_etat == false)
	m_etat = true;
	else m_etat = false;
	if(m_recepteur && m_etat)
	{
		if(this->m_etat)
		m_recepteur->Allumer();
		else
		m_recepteur->Eteindre();
	}
}
//---------------------------------------------------------------------------
bool	TRupteur::EstActionne(  )
{
	return m_etat;
}