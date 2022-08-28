#include "lampe.h"
using namespace Domotique;
Lampe::Lampe() 
{
	m_etat = false;
}
//---------------------
void Lampe::Eteindre()
{
	m_etat = false;
}
//---------------------
void Lampe::Allumer()
{
	m_etat = true;
}
//-----------------------
bool Lampe::EstAllumee()
{
	return m_etat;
}

