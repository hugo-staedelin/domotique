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
// A completer 
}
//---------------------------------------------------------------------------
void TRupteur::Impulser()
{
	// A completer 
}
//---------------------------------------------------------------------------
bool	TRupteur::EstActionne(  )
{
	return m_etat;
}