#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << this->Name << " has been created (it's a Scav Trap) (what did you just did, didn't you played borderland ?)" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap("") {
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "HOW" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.Name) {
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	std::cout << this->Name << " has been created with copy (it's a Scav Trap) (double the suffering let's go)" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << this->Name << " has been deleted (it's a Scav Trap) (thank you, I hated his voice)" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &copy) {
	std::cout << this->Name << " has been assigned his new value (it's a Scav Trap)" << std::endl;
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (this->HitPoints && this->EnergyPoints)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap have entered in Gate keeper mode." << std::endl;
}