#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a;
	ScavTrap	b;

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
	std::cout << std::endl;

	ClapTrap	*Cptr = new ScavTrap();

	Cptr->attack("a");
	std::cout << "---" << std::endl;
	delete Cptr;
	std::cout << "---" << std::endl;
}