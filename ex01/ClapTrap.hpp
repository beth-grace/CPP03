#pragma once

#include <iostream>

class ClapTrap
{
    protected:
    std::string _name;
    unsigned int _hp;
    unsigned int _energy;
    unsigned int _damage;


    public:
        ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap(std::string name);
       virtual ~ClapTrap();

        ClapTrap &operator = (const ClapTrap &src);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};
