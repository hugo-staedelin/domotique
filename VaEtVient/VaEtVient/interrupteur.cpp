#include "interrupteur.h"
using namespace Domotique;
Interrupteur::Interrupteur() 
{
	m_recepteur = 0 /*NULL*/;
	m_position = false;
}
//-----------------------------
void Interrupteur::Fermer()
{
	m_position = true;
    if(m_recepteur) 
		m_recepteur->Allumer();
}
//-----------------------------
void Interrupteur::Ouvrir()
{
	m_position = false;
    if(m_recepteur) 
		m_recepteur->Eteindre();
}
//-----------------------------
bool Interrupteur::EstFerme()
{
	return m_position;
}
//------------------------------
void Interrupteur::Cabler( Lampe *dipole )
{
	m_recepteur = dipole;
}
