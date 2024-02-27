#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class	ClapTrap
{
		private:
			std::string	_name;
			int			_hit_point;
			int			_energy_points;
			int			_attack_damage;

		public:
			ClapTrap();
			ClapTrap(const std::string name);
			ClapTrap(const ClapTrap &claptrap);
			ClapTrap &operator=(const ClapTrap &claptrap);
			~ClapTrap();
			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};

#endif
