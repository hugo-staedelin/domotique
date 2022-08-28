#pragma once
namespace Domotique 
{
class Lampe
{
   protected:
    	bool	m_etat;
    public:
    	Lampe();
        virtual void	Eteindre();
        virtual void	Allumer();
        bool	EstAllumee();
};
}
