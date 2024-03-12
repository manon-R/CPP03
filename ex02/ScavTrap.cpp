#include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap(){
	mode = false;
	hitPoints = 100;
	energyPoints = 50; 
	attackDamage = 20;
	cout << GREEN << "Default ScavTrap Constructor called" << RESET << endl;
}

ScavTrap::ScavTrap(string n){
	mode = false;
	name = n;
	hitPoints = 100;
	energyPoints = 50; 
	attackDamage = 20;
	cout << GREEN << "ScavTrap Constructor called to create " << CYAN << n << RESET << endl;
}

ScavTrap::ScavTrap(const ScavTrap &other){
	cout << GREEN << "ScavTrap Copy constructor called" << endl;
	*this = other;
}

ScavTrap::~ScavTrap(){
	cout << RED << "ScavTrap " << getName() << " Destructor called" << RESET << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
	cout << "ScavTrap Copy assignment operator called" << endl;
	mode = false;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return *this;
}


void ScavTrap::attack(const string& target){
	if (hitPoints == 0)
	{
		cout << RED << "ScavTrap " << getName() << " is KO (no hit point) so he can't attack..." << RESET << endl;
		return ;
	}
	if (energyPoints < 1)
	{
		cout << RED << "Not enough energy point to attack" << RESET << endl;
		return ;
	}
	cout << "ScavTrap " << CYAN <<  getName()  << RESET << " attacks " << MAGENTA << target << RESET << ", causing "  << YELLOW << getAttackDamage() << RESET << " points of damage!" << endl;
	energyPoints--;
}

void ScavTrap::guardGate(){
	if (hitPoints == 0)
	{
		cout << RED << "ScavTrap " << getName() << " is KO (no hit point) so he can't activate Guard mode..." << RESET << endl;
		return ;
	}
	if (mode)
	{
		cout << "ScavTrap " << CYAN <<  getName()  << RESET << " is already in GATE KEEPER mode" << endl;
		return ;
	}
	cout << "ScavTrap " << CYAN <<  getName()  << RESET << " is now in GATE KEEPER mode" << endl;
	mode = true;
}
