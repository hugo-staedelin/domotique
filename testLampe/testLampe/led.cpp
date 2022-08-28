
#include "led.h"
#include <iostream>
using namespace Domotique;
Led::Led(  ) : Lampe ()
{
	wiringPiSetupGpio (); // numéros logiques des broches GPIO ex 4 = broche 7
	m_pin      = 18;
	pinMode (m_pin, OUTPUT) ;
}
//------------------------
void Led::Eteindre()
{
	m_etat = false;
	std::cout << "led.cpp:Eteindre " << std::endl;
	digitalWrite (m_pin, LOW) ;
}
//----------------------------
void Led::Allumer()
{
     m_etat = true;
	 std::cout << "led.cpp:Allumer " << std::endl;
	 digitalWrite (m_pin, HIGH) ;	
}

