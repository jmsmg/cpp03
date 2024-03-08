#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_hit_point = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	this->_attack_damage = fragtrap._attack_damage;
	this->_hit_point = fragtrap._hit_point;
	this->_energy_points = fragtrap._energy_points;
	this->_name = fragtrap._name;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
	{
		this->_attack_damage = fragtrap._attack_damage;
		this->_hit_point = fragtrap._hit_point;
		this->_energy_points = fragtrap._energy_points;
		this->_name = fragtrap._name;
	}
	std::cout << "FragTrap copy assignment operator called" << std::endl;	
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "excute highFivesGuys function" << std::endl;	
}