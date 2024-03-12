#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap(){
	hitPoints = 100;
	energyPoints = 100; 
	attackDamage = 30;
	cout << GREEN << "Default FragTrap Constructor called" << RESET << endl;
}

FragTrap::FragTrap(string n){
	name = n;
	hitPoints = 100;
	energyPoints = 100; 
	attackDamage = 30;
	cout << GREEN << "FragTrap Constructor called to create " << CYAN << n << RESET << endl;
}

FragTrap::FragTrap(const FragTrap &other){
	cout << GREEN << "FragTrap Copy constructor called" << endl;
	*this = other;
}

FragTrap::~FragTrap(){
	cout << RED << "FragTrap " << getName() << " Destructor called" << RESET << endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
	cout << "FragTrap Copy assignment operator called" << endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return *this;
}

void FragTrap::highFivesGuys(){
	cout << CYAN << "****** " << getName() << " is sending a High Fives request ******" << RESET << endl;
}