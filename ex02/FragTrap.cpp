#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
    std::cout << "FragTrap Constructer called teehee!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
    std::cout << "FragTrap Constructer called haha!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructer  is called hehe!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
    std::cout << "FragTrap Constructer for " << _name << "is called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "Operator overload called" << std::endl;
    this->_name = src._name;
    this->_hp = src._hp;
    this->_damage = src._damage;
    this->_energy = src._energy;
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << ": You want a high five?\n\t*Here comes the aeroplane.\n SLAP!" << std::endl;
}