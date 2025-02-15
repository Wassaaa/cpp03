#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energy(10), dmg(0)
{
	std::cout << "Claptrap Default constructor called\n";
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Claptrap Copy Constructor called\n";
	name = other.name;
	hitpoints = other.hitpoints;
	energy = other.energy;
	dmg = other.dmg;
}

// copy assignment op
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Claptrap Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	name = other.name;
	hitpoints = other.hitpoints;
	energy = other.energy;
	dmg = other.dmg;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap Destructor called\n";
}

void ClapTrap::status(void)
{
	std::cout << "| " << name << " | HITPOINTS: " << hitpoints << " | ENERGY: " << energy << " | DMG: " << dmg << " |\n";
}

bool ClapTrap::validateAction(void)
{
	if (energy < 1)
	{
		std::cout << "ClapTrap " << name << " is out of Energy!\n";
		return false;
	}
	if (hitpoints < 1)
	{
		std::cout << "ClapTrap " << name << " is dead!\n";
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string &target)
{
	if (validateAction())
	{
		energy -= 1;
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << dmg << " points of damage!\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints < 1)
	{
		std::cout << "ClapTrap " << name << " is already dead!\n";
		return ;
	}
	hitpoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
	if (hitpoints < 1)
	{
		std::cout << "ClapTrap " << name << " died!\n";
		hitpoints = 0;
	}
	status();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (validateAction())
	{
		energy -= 1;
		hitpoints += amount;
		std::cout << "ClapTrap " << name << " repairs " << amount << " hitpoints!\n";
		status();
	}
}

std::string ClapTrap::getName(void) const
{
	return (name);
}

void ClapTrap::setName(const std::string name)
{
	this->name = name;
}

int ClapTrap::getHitpoints(void) const
{
	return (hitpoints);
}

void ClapTrap::setHitpoints(const int hitpoints)
{
	this->hitpoints = hitpoints;
}

int ClapTrap::getEnergy(void) const
{
	return (energy);
}

void ClapTrap::setEnergy(const int energy)
{
	this->energy = energy;
}

int ClapTrap::getDmg(void) const
{
	return (dmg);
}

void ClapTrap::setDmg(const int dmg)
{
	this->dmg = dmg;
}
