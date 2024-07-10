#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	virtual ~ScavTrap();

	void attack(const std::string& target);
	void guardGate(void);

	static const int DEFAULT_HITPOINTS = 100;
	static const int DEFAULT_ENERGY = 50;
	static const int DEFAULT_ATTACK_DAMAGE = 20;

private:

};

#endif
