#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor called\n";
	this->setHitpoints(DEFAULT_HITPOINTS);
	this->setEnergy(DEFAULT_ENERGY);
	this->setDmg(DEFAULT_ATTACK_DAMAGE);
}

//copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor called\n";
}

//copy assignment op
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap Copy Assignment Operator called\n";
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " asks for a High Five and gets one\n";
}
