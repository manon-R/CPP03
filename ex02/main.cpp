#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

void displayPoints(FragTrap& ct)
{
	cout << "********** " << CYAN <<  ct.getName() << RESET << "'s points **********" << endl;
	cout << "Hit Points = " << ct.getHitPoints() << endl;
	cout << "Energy Points = " << ct.getEnergyPoints() << endl;
	cout << "Attack Damage amount = " << ct.getAttackDamage() << endl;
}




int main(void)
{
	FragTrap test1;
	cout << endl;
	FragTrap test2("Nami");

	test1.setName("Luffy");
	test1.setAttackDamage(30);
	test2.setAttackDamage(50);

	cout << endl;
	displayPoints(test1);
	cout << endl;
	displayPoints(test2);
	cout << endl;

	cout << "************ FIGHT CAN START ************" << endl;
	cout << endl;
	test2.attack(test1.getName());
	test1.takeDamage(test2.getAttackDamage());
	cout << endl;
	test1.beRepaired(2);
	cout << endl;


	displayPoints(test1);
	cout << endl;
	displayPoints(test2);
	cout << endl;


	test1.attack(test2.getName());
	test2.takeDamage(test1.getAttackDamage());
	cout << endl;

	displayPoints(test1);
	cout << endl;
	displayPoints(test2);
	cout << endl;

	test2.attack(test1.getName());
	test1.takeDamage(test2.getAttackDamage());
	cout << endl;

	test1.attack(test2.getName());
	test2.takeDamage(test1.getAttackDamage());
	cout << endl;

	displayPoints(test1);
	cout << endl;
	displayPoints(test2);
	cout << endl;

	test1.highFivesGuys();

	cout << endl;
	test2.attack(test1.getName());
	test1.takeDamage(test2.getAttackDamage());
	cout << endl;

	test1.attack(test2.getName());
	cout << endl;

	displayPoints(test1);
	cout << endl;
	displayPoints(test2);
	cout << endl;
}