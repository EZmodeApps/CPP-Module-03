#include "ClapTrap.h"
#include "ScavTrap.h"

int	main()
{
	ClapTrap clap("Clap_test");
	ScavTrap scav("Scav_test");
	clap.attack("Clap_target");
	scav.attack("Scav_target");
	scav.guardGate();

	return (0);
}
