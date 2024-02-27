#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_hit_point = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->_name = name;
	this->_hit_point = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	this->_attack_damage = claptrap._attack_damage;
	this->_hit_point = claptrap._hit_point;
	this->_energy_points = claptrap._energy_points;
	this->_name = claptrap._name;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
	{
		this->_attack_damage = claptrap._attack_damage;
		this->_hit_point = claptrap._hit_point;
		this->_energy_points = claptrap._energy_points;
		this->_name = claptrap._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points == 0|| this->_hit_point == 0)
	{
		return ;
	}
	this->_energy_points--;
	std::cout << this->_name << "attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_point == 0 || this->_energy_points == 0)
	{
		return ;
	}
	this->_hit_point -= amount;
	if (this->_hit_point < 0)
	{
		this->_hit_point = 0;
	}
	std::cout << "Hit Point reamining : " << this->_hit_point << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_point == 0 || this->_energy_points == 0)
	{
		return ;
	}
	this->_hit_point += amount;
	this->_energy_points--;
	std::cout << "repairs it self " << amount << " points" << std::endl;
}