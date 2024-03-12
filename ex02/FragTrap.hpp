#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap(string);

	FragTrap& operator= (const FragTrap &other);

	~FragTrap();

	void highFivesGuys(void);
};


#endif