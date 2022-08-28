//---------------------------------------------------------------------------
#pragma once
#include "trupteur.h"
namespace Domotique {
class Poussoir
{
    private:
        TRupteur	*m_rupteur;
	public:
    	Poussoir();
        void	Impulser();
		void	Cabler( TRupteur *recepteur );
};
}
