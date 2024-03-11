#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

using std::string;

class ClapTrap {

public:
	ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap(string);

	ClapTrap& operator= (const ClapTrap &other);

	~ClapTrap();

	string	getName() const;
	int		getHitPoints() const;
	int		getEnergyPoints() const;
	int		getAttackDamage() const;

	void 	setName(string);

	void	attack(const string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);


private:
	string	name;
	int		hitPoints;
	int		energyPoints;
	int		attackDamage;

};


#endif