#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap(std::string name);
        ~FragTrap();

        FragTrap &operator = (const FragTrap &src);

        void highFivesGuys(void);
};