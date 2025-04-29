#include "ClapTrap.hpp"

int main(void)
{
	std::cout << std::endl  << "*************************************************************\n" 
    	                    << "**                     NICOLE'S TESTS:                     **\n"
	                        << "*************************************************************" << std::endl;
	
	ClapTrap nicole("nicole");

	nicole.attack("bethany");
	nicole.takeDamage(4);
	nicole.beRepaired(2);
	nicole.takeDamage(8);
	nicole.attack("bethany");

	std::cout << std::endl;
	return (0);
}