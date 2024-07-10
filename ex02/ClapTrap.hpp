#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	bool validateAction();
	void status(void);

	std::string getName(void) const;
	void setName(const std::string name);
	int getHitpoints(void) const;
	void setHitpoints(const int hitpoints);
	int getEnergy(void) const;
	void setEnergy(const int energy);
	int getDmg(void) const;
	void setDmg(const int dmg);

private:
	std::string	name;
	int			hitpoints;
	int			energy;
	int			dmg;
};

#endif
