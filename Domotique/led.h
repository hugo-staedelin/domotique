#pragma once
#include "lampe.h"
#include <wiringPi.h>

namespace Domotique {
class Led: public Lampe
{
    private:
		int        m_pin;
    public:
    	Led  ();
        void	Eteindre();
        void	Allumer();
};
}
