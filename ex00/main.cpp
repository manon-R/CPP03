#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

void displayPoints(ClapTrap& ct)
{
	cout << "********** " << CYAN <<  ct.getName() << RESET << "'s points **********" << endl;
	cout << "Hit Points = " << ct.getHitPoints() << endl;
	cout << "Energy Points = " << ct.getEnergyPoints() << endl;
	cout << "Attack Damage amount = " << ct.getAttackDamage() << endl;
}

// int main(void)
// {
// 	ClapTrap test1;
// 	ClapTrap test2("Nami");

// 	test1.setName("Luffy");
// 	test1.setAttackDamage(3);
// 	test2.setAttackDamage(5);

// 	cout << endl;
// 	displayPoints(test1);
// 	cout << endl;
// 	displayPoints(test2);
// 	cout << endl;

// 	cout << "************ FIGHT CAN START ************" << endl;
// 	cout << endl;
// 	test2.attack(test1.getName());
// 	test1.takeDamage(test2.getAttackDamage());
// 	cout << endl;
// 	test1.beRepaired(2);
// 	cout << endl;


// 	displayPoints(test1);
// 	cout << endl;
// 	displayPoints(test2);
// 	cout << endl;


// 	test1.attack(test2.getName());
// 	test2.takeDamage(test1.getAttackDamage());
// 	cout << endl;

// 	displayPoints(test1);
// 	cout << endl;
// 	displayPoints(test2);
// 	cout << endl;

// 	test2.attack(test1.getName());
// 	test1.takeDamage(test2.getAttackDamage());
// 	cout << endl;

// 	test1.attack(test2.getName());
// 	test2.takeDamage(test1.getAttackDamage());
// 	cout << endl;

// 	displayPoints(test1);
// 	cout << endl;
// 	displayPoints(test2);
// 	cout << endl;

// 	test2.attack(test1.getName());
// 	test1.takeDamage(test2.getAttackDamage());
// 	cout << endl;

// 	test1.attack(test2.getName());
// 	cout << endl;

// 	displayPoints(test1);
// 	cout << endl;
// 	displayPoints(test2);
// 	cout << endl;

// }

int main(void)
{
	ClapTrap test1;
	ClapTrap test2("Nami");

	test1.setName("Luffy");
	test1.setAttackDamage(3);
	test2.setAttackDamage(5);
	test2.setEnergyPoints(2);

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
	test2.beRepaired(1);
	cout << endl;

	displayPoints(test1);
	cout << endl;
	displayPoints(test2);
	cout << endl;

	test2.attack(test1.getName());
	cout << endl;

}