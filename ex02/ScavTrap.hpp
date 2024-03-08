#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
		~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();
};

#endif