//---------------------------------------------------------------------------
#include "gradateur.h"

using namespace Domotique;

Gradateur::Gradateur()  : TRupteur ()
{
	m_etat        = false;
	m_recepteur   = 0;
	m_luminosite  = 0;
}
//---------------------------------------------------------------------------
void Gradateur::Impulser()
{
	if (m_recepteur)
		if (m_etat == true || m_luminosite ==  0)
		{
			m_etat = false;
			m_recepteur->Eteindre();
		}
		else
		{
			m_etat = true;
			m_recepteur->Allumer();
		}
}
//---------------------------------------------------------------------------
void    Gradateur::augmenteLuminosite()
{
	if (m_luminosite < 100)		m_luminosite += 10;
	if (m_luminosite > 0)
	{
		m_etat      = true;
		m_recepteur->Allumer();
	}
	else
		m_etat		 = false;
}
//------------------------------------------------------------
int   	Gradateur::IntensiteLuminosite()
{
     return m_luminosite;
}
