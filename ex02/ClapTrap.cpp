#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap():hitPoints(10), energyPoints(10), attackDamage(0) {
	cout << GREEN << "Default ClapTrap Constructor called" << RESET << endl;
}

ClapTrap::ClapTrap(string n): name(n), hitPoints(10), energyPoints(10), attackDamage(0){
	cout << GREEN << "ClapTrap Constructor called to create " << CYAN << n << RESET << endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	cout << GREEN << "ClapTrap Copy constructor called" << endl;
	*this = other;
}

ClapTrap::~ClapTrap(){
	cout << RED << "ClapTrap " << getName() << " Destructor called" << RESET << endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	cout << "ClapTrap Copy assignment operator called" << endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return *this;
}

string ClapTrap::getName() const{
	return name;
}

int ClapTrap::getHitPoints() const{
	return hitPoints;
}

int ClapTrap::getEnergyPoints() const{
	return energyPoints;
}

int ClapTrap::getAttackDamage() const{
	return attackDamage;
}

void ClapTrap::setName(const string& n){
	name = n;
}

void ClapTrap::setAttackDamage(unsigned int amount){
	attackDamage = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount){
	energyPoints = amount;
}

void ClapTrap::attack(const string& target){
	if (hitPoints == 0)
	{
		cout << RED << "ClapTrap " << getName() << " is KO (no hit point) so he can't attack..." << RESET << endl;
		return ;
	}
	if (energyPoints < 1)
	{
		cout << RED << "Not enough energy point to attack" << RESET << endl;
		return ;
	}
	cout << "ClapTrap " << CYAN <<  getName()  << RESET << " attacks " << MAGENTA << target << RESET << ", causing "  << YELLOW << getAttackDamage() << RESET << " points of damage!" << endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	if ((int)amount > hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
	cout << "ClapTrap " << CYAN << getName() << RESET << " has taken " << RED <<  amount  << RESET << " points of damage" << endl; 
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hitPoints == 0)
	{
		cout << RED << "ClapTrap " << getName() << " is KO (no hit point) so he can't be repaired..." << RESET << endl;
		return ;
	}
	if (energyPoints < 1)
	{
		cout << RED << "Not enough energy point to be repaired" << RESET << endl;
		return ;
	}
	cout << "ClapTrap " << CYAN << getName() << RESET << " has been repaired of " << GREEN << amount << RESET << " hit points" << endl;
	hitPoints += amount;
	energyPoints--;
}