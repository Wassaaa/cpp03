#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "DiamondTrap constructor called!\n";
	this->setHitpoints(FragTrap::DEFAULT_HITPOINTS);
	this->setEnergy(ScavTrap::DEFAULT_ENERGY);
	this->setDmg(FragTrap::DEFAULT_ATTACK_DAMAGE);
}

//copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other)
: ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	std::cout << "DiamondTrap copy constructor called!\n";
}

//copy assignment op
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		std::cout << "DiamondTrap copy assignment operator called!\n";
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->name = other.name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
