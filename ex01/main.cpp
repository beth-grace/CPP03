
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "*************************************************************\n" 
    	      << "**                     NICOLE'S TESTS:                     **\n"
	          << "*************************************************************" << std::endl;
	
	// ClapTrap nicole("nicole");
	ScavTrap bethany("bethany");

	// nicole.attack("bethany");
	// nicole.takeDamage(4);
	// nicole.beRepaired(2);
	// nicole.takeDamage(8);
	// nicole.attack("bethany");

	bethany.attack("coby");
	bethany.takeDamage(40);
	bethany.guardGate();
	bethany.beRepaired(10);
	bethany.takeDamage(60);
	bethany.attack("coby");

	std::cout << std::endl;
	return (0);
}