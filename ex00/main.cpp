#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("CL4P-TP");
	ClapTrap fakeClapTrap("FAKE CL4P-TP");
	ClapTrap anotherFakeClapTrap(clapTrap);

	fakeClapTrap.showHitPoint();
	
	fakeClapTrap = clapTrap;

	fakeClapTrap.showHitPoint();
	anotherFakeClapTrap.showHitPoint();

	clapTrap.takeDamage(5);
	clapTrap.attack("YOU");
	clapTrap.beRepaired(5);
	clapTrap.showHitPoint();
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(10);
	clapTrap.showHitPoint();
}