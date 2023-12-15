#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap fragTrap("FR4G-TP");
	FragTrap fakeFragTrap("FAKE FR4G-TP");
	FragTrap anotherFakeFragTrap(fragTrap);

	fakeFragTrap.showHitPoint();

	fakeFragTrap = fragTrap;

	fakeFragTrap.showHitPoint();
	anotherFakeFragTrap.showHitPoint();

	fragTrap.takeDamage(50);
	fragTrap.attack("YOU");
	fragTrap.beRepaired(50);
	fragTrap.showHitPoint();
	fragTrap.takeDamage(100);
	fragTrap.beRepaired(100);
	fragTrap.showHitPoint();
	fragTrap.highFivesGuys();
}