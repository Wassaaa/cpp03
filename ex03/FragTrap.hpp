#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	virtual ~FragTrap();

	void highFivesGuys(void);

	static const int DEFAULT_HITPOINTS = 100;
	static const int DEFAULT_ENERGY = 100;
	static const int DEFAULT_ATTACK_DAMAGE = 30;
private:

};

#endif
