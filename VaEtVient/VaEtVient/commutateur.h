#include "lampe.h"
namespace Domotique
{
class Commutateur	// utilisable dans un circuit va-et-vient
{
    private:
    	bool	m_position;
        Commutateur	*m_associe;
        Lampe	*m_recepteur;
	public:
    	Commutateur();
        void	Cabler( Commutateur *autre, Lampe *dipole );
        void	Basculer();
};
}

