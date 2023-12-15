#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap scavTrap("SC4V-TP");
	ScavTrap fakeScavTrap("FAKE SC4V-TP");
	ScavTrap anotherFakeScavTrap(scavTrap);

	fakeScavTrap.showHitPoint();

	fakeScavTrap = scavTrap;

	fakeScavTrap.showHitPoint();
	anotherFakeScavTrap.showHitPoint();

	scavTrap.takeDamage(50);
	scavTrap.attack("YOU");
	scavTrap.beRepaired(50);
	scavTrap.showHitPoint();
	scavTrap.takeDamage(100);
	scavTrap.beRepaired(100);
	scavTrap.showHitPoint();
	scavTrap.guardGate();
}