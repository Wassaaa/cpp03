#include "DiamondTrap.hpp"

int main()
{
	std::cout << "Creating DiamondTrap object:\n";
	DiamondTrap diamond("Diamond");
	diamond.status();

	std::cout << "\nTesting DiamondTrap actions:\n";
	diamond.attack("Enemy");
	diamond.takeDamage(30);
	diamond.beRepaired(20);
	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFivesGuys();

	std::cout << "\nCreating DiamondTrap copy from diamond:\n";
	DiamondTrap diamondCopy(diamond);
	diamondCopy.status();
	std::cout << "\nTesting DiamondCopy actions:\n";
	diamondCopy.attack("Enemy");
	diamondCopy.takeDamage(30);
	diamondCopy.beRepaired(20);
	diamondCopy.whoAmI();
	diamondCopy.guardGate();
	diamondCopy.highFivesGuys();

	std::cout << "\nAssigning DiamondTrap copy to new object:\n";
	DiamondTrap anotherDiamond("AnotherDiamond");
	diamond = anotherDiamond;
	std::cout << "\nTesting diamond reassignment (back to default) actions:\n";
	diamond.status();
	diamond.attack("Enemy");
	diamond.takeDamage(30);
	diamond.beRepaired(20);
	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFivesGuys();

	std::cout << "\nDestructor test\n";
	ClapTrap* ptr = new DiamondTrap("Diamond");
	delete ptr;

	std::cout << "\nEnd of main function:\n";
	return 0;
}
