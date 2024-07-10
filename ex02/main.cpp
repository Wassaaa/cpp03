#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::cout << "Creating ClapTrap object:\n";
	ClapTrap claptrap("Titus");
	std::cout << "\nCreating ScavTrap object:\n";
	ScavTrap scavtrap("Scavvy");
	std::cout << "\nCreating FragTrap object:\n";
	FragTrap fragtrap("Fraggy");

	std::cout << "\nTesting ClapTrap actions:\n";
	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	std::cout << "\nTesting ScavTrap actions:\n";
	scavtrap.attack("Enemy");
	scavtrap.takeDamage(10);
	scavtrap.beRepaired(5);
	scavtrap.guardGate();

	std::cout << "\nTesting FragTrap actions:\n";
	fragtrap.attack("Enemy");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(10);
	fragtrap.highFivesGuys();
	fragtrap.takeDamage(20);
	fragtrap.attack("Enemy");
	fragtrap.takeDamage(20);
	fragtrap.takeDamage(20);
	fragtrap.takeDamage(20);
	fragtrap.takeDamage(20);
	fragtrap.takeDamage(20);

	std::cout << "\nTesting copy and assignment:\n";
	std::cout << "Creating FragTrap copy from Fraggy:\n";
	FragTrap fragtrapCopy(fragtrap);

	std::cout << "Assigning FragTrap copy to new object:\n";
	FragTrap anotherFragtrap("AnotherFraggy");
	anotherFragtrap = fragtrap;

	std::cout << "\nEnd of main function:\n";
	return 0;
}
