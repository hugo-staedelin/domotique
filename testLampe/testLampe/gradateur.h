//---------------------------------------------------------------------------
#pragma once
#include "trupteur.h"
namespace Domotique 
{
class Gradateur : public TRupteur
{
    private:
		int      m_luminosite;
	public:
    	Gradateur();
        void	Impulser();
		void    augmenteLuminosite();
		int   	IntensiteLuminosite();
};
}

