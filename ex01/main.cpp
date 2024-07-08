#include "ClapTrap.hpp"


int main(void) {
	ClapTrap claptrap("Titus");
	ClapTrap claptrap2(claptrap);
	ClapTrap claptrap3("test");
	claptrap3 = claptrap;

	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.beRepaired(5);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap3.beRepaired(55);
	claptrap3.takeDamage(123);
	return 0;
}
