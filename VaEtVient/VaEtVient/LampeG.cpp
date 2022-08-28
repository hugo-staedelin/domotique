#include "LampeG.h"
using namespace Domotique;
LampeG::LampeG() 
{
	m_etat = false;
}
//---------------------
void LampeG::Eteindre()
{
	m_etat = false;
}
//---------------------
void LampeG::Allumer()
{
	m_etat = true;
}
//-----------------------
bool LampeG::EstAllumee()
{
	return m_etat;
}

