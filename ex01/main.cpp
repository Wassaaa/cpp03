#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "Creating ClapTrap object:\n";
	ClapTrap claptrap("Titus");
	std::cout << "Creating ScavTrap object:\n";
	ScavTrap scavtrap("Scavvy");

	std::cout << "ClapTrap attacking:\n";
	claptrap.attack("Enemy");

	std::cout << "ScavTrap attacking:\n";
	scavtrap.attack("Enemy");

	std::cout << "ScavTrap using guardGate:\n";
	scavtrap.guardGate();

	std::cout << "ScavTrap taking damage:\n";
	scavtrap.takeDamage(30);

	std::cout << "ScavTrap being repaired:\n";
	scavtrap.beRepaired(20);

	std::cout << "End of main function:\n";
	return 0;
}
