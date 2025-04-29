#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
    std::cout << "ScavTrap Constructer called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
    std::cout << "ScavTrap Constructer called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructer called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
    std::cout << "ScavTrap Constructer for "<< _name << "is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "Operator overload called" << std::endl;
    this->_name = src._name;
    this->_hp = src._hp;
    this->_damage = src._damage;
    this->_energy = src._energy;
    return *this;
}

void    ScavTrap::attack(const std::string& target)
{
    if(this->_hp > 0 && this->_damage > 0)
    {
        std::cout <<  this->_name << "attacks " << target << "causing " << _damage << "amount of damage!" << std::endl;
        this->_hp--;
    }
    else if (this->_hp == 0)
        std::cout << this->_name << "unable to attack due to low energy :'((" << std::endl;
    else
        std::cout << this->_name << "unable to attack due to low attack points... sucks to suck ig" << std::endl;
}

void    ScavTrap::guardGate(void)
{
       std::cout << this->_name << "is now guarding the gate" << std::endl;
}
  