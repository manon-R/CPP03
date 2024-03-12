#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap(string);

	ScavTrap& operator= (const ScavTrap &other);

	~ScavTrap();

	void attack(const string& target);
	void guardGate();

private:
	bool mode;
};

#endif