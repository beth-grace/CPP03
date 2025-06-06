#pragma once

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hp;
        int _energy;
        int _damage;


    public:
        ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap(std::string name);
        ~ClapTrap();

        ClapTrap &operator = (const ClapTrap &src);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};
