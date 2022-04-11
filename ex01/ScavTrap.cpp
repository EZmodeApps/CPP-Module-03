#include "ScavTrap.h"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->damage = 20;
}

ScavTrap::~ScavTrap() {}

void ScavTrap::attack(const std::string &target) {
	if (this->energyPoints == 0 || this->hitPoints == 0)
		return ;
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << name << " is now in Gate keeper mode." << std::endl;
}