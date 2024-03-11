#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap():hitPoints(10), energyPoints(10), attackDamage(0) {
	cout << GREEN << "Default Constructor called" << RESET << endl;
}

ClapTrap::ClapTrap(string n): name(n), hitPoints(10), energyPoints(10), attackDamage(0){
	cout << GREEN << "Constructor called to create " << CYAN << n << RESET << endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	cout << GREEN << "Copy constructor called" << endl;
	*this = other;
}


ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	cout << "Copy assignment operator called" << endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return *this;
}