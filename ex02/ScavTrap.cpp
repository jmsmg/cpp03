#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hit_point = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	this->_name = scavtrap._name;
	this->_hit_point = scavtrap._hit_point;
	this->_energy_points = scavtrap._energy_points;
	this->_attack_damage = scavtrap._attack_damage;
	std::cout << "ScavTrap" << this->_name << " copy constructor called" << std::endl; 
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavtrap)
{
	if (this != &scavtrap)
	{
		this->_name = scavtrap._name;
		this->_hit_point = scavtrap._hit_point;
		this->_energy_points = scavtrap._energy_points;
		this->_attack_damage = scavtrap._attack_damage;
	}
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points == 0|| this->_hit_point == 0)
	{
		return ;
	}
	this->_energy_points--;
	std::cout << "ScavTrap " << this->_name << "attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "excute guardGate function" << std::endl;
}