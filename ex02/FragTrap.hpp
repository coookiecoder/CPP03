#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{
	private:
		FragTrap(void);
	public:
	    FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		FragTrap &operator=(const FragTrap &copy);
	    void highFivesGuys(void);
};

#endif