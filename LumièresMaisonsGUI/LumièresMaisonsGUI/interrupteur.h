#include "lampe.h"
namespace Domotique 
{
class Interrupteur
{
    private:
    	bool	m_position;
		Lampe	*m_recepteur;
	public:
    	Interrupteur();
        void	Cabler( Lampe *dipole );
        void	Fermer();
        void	Ouvrir();
        bool	EstFerme();
};

}