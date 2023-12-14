#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) {
	this->Name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << this->Name << " has been created (what did you just did, didn't you played borderland ?)" << std::endl;
}

ClapTrap::ClapTrap(void) {
	this->Name = "";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "HOW" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	std::cout << this->Name << " has been created with copy (double the suffering let's go)" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->Name << " has been deleted (thank you, I hated his voice)" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << this->Name << " has been assigned his new value" << std::endl;
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->HitPoints && this->EnergyPoints)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->HitPoints -= amount;
	if (this->HitPoints < 0)
		this->HitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints && this->EnergyPoints)
	{
		this->HitPoints += amount;
		this->EnergyPoints--;
	}
}

void ClapTrap::showHitPoint(void) {
	std::cout << "Claptrap " << this->Name << " has " << this->HitPoints << " HP" << std::endl;
}