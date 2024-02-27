#include "ClapTrap.hpp"

int	main()
{
	ClapTrap 		a;
	std::string		str = "str";
	std::string		&str2 = str;

	a.attack(str2);
	a.takeDamage(10);
	a.beRepaired(1);
}