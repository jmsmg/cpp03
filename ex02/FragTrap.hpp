#ifndef FRAGTRAP_HPP 
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &fragtrap);
		FragTrap &operator=(const FragTrap &fragtrap);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif