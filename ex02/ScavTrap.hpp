#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
      bool  _guarding;

    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap(std::string name);
        ~ScavTrap();

        ScavTrap &operator = (const ScavTrap &src);

        void    attack(const std::string& target);
        void    guardGate(void);
};