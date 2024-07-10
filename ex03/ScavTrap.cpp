#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor called\n";
	setHitpoints(DEFAULT_HITPOINTS);
	setEnergy(DEFAULT_ENERGY);
	setDmg(DEFAULT_ATTACK_DAMAGE);
}

//copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called\n";
}

//copy assignment op
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "ScavTrap Copy Assignment Operator called\n";
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (validateAction())
	{
		setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getDmg() << " points of damage!\n";
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode.\n";
}
