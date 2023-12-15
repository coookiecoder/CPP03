#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{
	private:
		ScavTrap(void);
	public:
	    ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &copy);
		void attack(const std::string &target);
	    void guardGate(void);
};

#endif