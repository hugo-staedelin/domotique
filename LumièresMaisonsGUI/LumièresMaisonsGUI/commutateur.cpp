#include "commutateur.h"
using namespace Domotique;

Commutateur::Commutateur() 
{
	m_position = false;
	m_recepteur = 0;
	m_associe = 0;
}

//---------------------------------------------------------------------------
 void Commutateur::Cabler( Commutateur *autre, Lampe *dipole )
{
	m_associe = autre;
	m_recepteur = dipole;
}
//---------------------------------------------------------------------------
void Commutateur::Basculer()
{
	if(m_position == false) m_position = true;
	else m_position = false;
	if(m_recepteur && m_associe)
	{
		if(this->m_position == m_associe->m_position) m_recepteur->Allumer();
		else m_recepteur->Eteindre();
	}
}