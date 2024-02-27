#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class	ClapTrap
{
		private:
			std::string	_name;
			int			_hit_point = 10;
			int			_energy_points = 10;
			int			_attack_damage = 0;

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
