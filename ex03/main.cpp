#include "DiamondTrap.hpp"

int main() {
	std::cout << "Creating DiamondTrap object:\n";
	DiamondTrap diamond("Diamond");
	diamond.status();

	std::cout << "\nTesting DiamondTrap actions:\n";
	diamond.attack("Enemy");
	diamond.takeDamage(30);
	diamond.beRepaired(20);
	diamond.whoAmI();

	std::cout << "\nTesting copy and assignment:\n";
	std::cout << "Creating DiamondTrap copy from diamond:\n";
	DiamondTrap diamondCopy(diamond);

	std::cout << "Assigning DiamondTrap copy to new object:\n";
	DiamondTrap anotherDiamond("AnotherDiamond");
	anotherDiamond = diamond;

	std::cout << "\nEnd of main function:\n";
	return 0;
}
