
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "*************************************************************\n" 
    	      << "**                     NICOLE'S TESTS:                     **\n"
	          << "*************************************************************" << std::endl;
	
	// ClapTrap nicole("Nicole");
	// ScavTrap bethany("Bethany");
	FragTrap coby("Coby");

	// nicole.attack("Bethany");
	// nicole.takeDamage(4);
	// nicole.beRepaired(2);
	// nicole.takeDamage(8);
	// nicole.attack("Bethany");

	// bethany.attack("Coby");
	// bethany.takeDamage(40);
	// bethany.guardGate();
	// bethany.beRepaired(10);
	// bethany.takeDamage(60);
	// bethany.attack("Coby");

	coby.attack("Nate");
	coby.takeDamage(50);
	coby.highFivesGuys();
	coby.beRepaired(10);
	coby.takeDamage(50);
	coby.attack("Nate");

	std::cout << std::endl;
	return (0);
}