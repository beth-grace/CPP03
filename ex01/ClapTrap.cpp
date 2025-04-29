#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Constructer called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
    :_name(copy._name)
{
    std::cout << "ClapTrap Constructer called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Deconstructer called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap Constructer for "<< _name << "is called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Operator overload called" << std::endl;
    this->_name = src._name;
    this->_hp = src._hp;
    this->_damage = src._damage;
    this->_energy = src._energy;
    return *this;
}

void    ClapTrap::attack(const std::string& target)
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
void    ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hp > amount)
        this->_hp -= amount;
    else if (this->_hp > 0)
        this->_hp = 0;
    else
    {
        std::cout << this->_name << "is #dead, unlucky my g" << std::endl;
        return ;
    }
    std::cout << this->_name << "has taken " << amount << "of damage and now has" << this->_hp << "hit points." << std::endl;
}
void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy > 0 && this->_hp > 0 && this->_hp + amount <= 10)
	{
		this->_hp += amount;
		std::cout << this->_name << " got some help and gained " << amount << " of hit points, he now has " << this->_hp << "hit points, the biggus backus." << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << this->_name << " can't repair themselves, too weak. Smells like skill issue." << std::endl;
	else if (this->_hp == 0)
    {
		std::cout << this->_name << " can't repair themsleves, not enough hp." << std::endl;
		std::cout << this->_name << " can't be repaired to have more than 10 hit points. Biggus Backus" << std::endl;
    }
}
