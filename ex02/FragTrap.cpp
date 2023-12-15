#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << this->Name << " has been created (it's a Frag Trap) (what did you just did, didn't you played borderland ?)" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap("") {
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "HOW" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.Name) {
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	std::cout << this->Name << " has been created with copy (it's a Frag Trap) (double the suffering let's go)" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << this->Name << " has been deleted (it's a Frag Trap) (thank you, I hated his voice)" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &copy) {
	std::cout << this->Name << " has been assigned his new value (it's a Frag Trap)" << std::endl;
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap have entered in High Five mode." << std::endl;
}