#pragma once
namespace Domotique 
{
class LampeG
{
   protected:
    	bool	m_etat;
    public:
    	Lampe();
        void	Eteindre();
        void	Allumer();
        bool	EstAllumee();
};
}
