#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	a;
	ScavTrap	b;
	FragTrap	c;

	std::cout << std::endl;
	std::cout << "---------------------------------" <<  std::endl;
	std::cout << "--------ClapTrap test------------" <<  std::endl;
	std::cout << "---------------------------------" <<  std::endl;
	std::cout << std::endl;

	a.attack("clap1");
	a.takeDamage(10);
	a.beRepaired(1);

	std::cout << std::endl;
	std::cout << "---------------------------------" <<  std::endl;
	std::cout << "--------ScavTrap test------------" <<  std::endl;
	std::cout << "---------------------------------" <<  std::endl;
	std::cout << std::endl;

	b.attack("scav1");
	b.takeDamage(20);
	b.beRepaired(1);
	b.guardGate();

	
	std::cout << std::endl;
	std::cout << "---------------------------------" <<  std::endl;
	std::cout << "--------ScavTrap virtual test----" <<  std::endl;
	std::cout << "---------------------------------" <<  std::endl;

	std::cout << std::endl;
	ClapTrap	*ptr = &b;
	ptr->attack("virtual test");

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------" <<  std::endl;
	std::cout << "--------FragTrap test------------" <<  std::endl;
	std::cout << "---------------------------------" <<  std::endl;
	std::cout << std::endl;
	c.attack("frag1");
	c.takeDamage(30);
	c.beRepaired(1);
	c.highFivesGuys();

}