#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {
	private:
		ClapTrap(void);
    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;
    public:
        ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		void showHitPoint(void);
};

#endif