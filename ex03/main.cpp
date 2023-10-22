#include <iostream>
#include <cstdlib>
#include <limits>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "\n-- Default constructors:\n";
    ClapTrap unnamed;
    ClapTrap foo("Foo");

    std::cout << "\n-- Copy constructor\n";
    ClapTrap bar(foo);

    std::cout << "\n-- Attack\n";
    for (int i = 0; i < 11; i++) 
    {
        std::cout << i << ": foo.attack('Baz'): ";
        foo.attack("Baz");
    }
    std::cout << "Claptraps cannot attack without energy\n";

    std::cout << "\nfoo = bar: ";
    foo = bar;

    std::cout << "\n-- Take damage\n";
    std::cout << "1: foo.takeDamage(6): ";
    foo.takeDamage(6);
    std::cout << "2: foo.takeDamage(6) (only has 4 hitpoints left so damage is reduced):\n\t";
    foo.takeDamage(6);
    std::cout << "3: foo.takeDamage(6): ";
    foo.takeDamage(6);
    std::cout << "Dead claptraps don't take damage\n";

    std::cout << "\nfoo = bar: ";
    foo = bar;

    std::cout << "\n-- Self repair\n";
    std::cout << "0: foo.beRepaired(UINT_MAX - 100): ";
    foo.beRepaired(std::numeric_limits<unsigned int>::max() - 100);
    std::cout << "1: foo.beRepaired(UINT_MAX): (reduced repair due to numeric limits)\n\t";
    foo.beRepaired(std::numeric_limits<unsigned int>::max());
    for (int i = 2; i < 10; i++)
    {
        std::cout << i << " : foo.beRepaired(10): ";
        foo.beRepaired(10);
    }
    std::cout << "10: foo.beRepaired(10): Claptraps with no energy cannot heal\n";
    foo.beRepaired(10);

    {
        std::cout << "\n-- ScavTrap constructors\n";
        ScavTrap unnamed_st;
        ScavTrap foo("Foo");

        std::cout << "\n-- ScavTrap copy constructor\n";
        ScavTrap bar(foo);

        std::cout << "\nfoo.guardGate() : ";
        foo.guardGate();

        std::cout << "\nfoo.attack('Baz')\n";
        foo.attack("Baz");

        std::cout << "\n-- Copy assign\n";
        foo = bar;

        std::cout << "\n-- ScavTrap destructors\n";
    }

    {
        std::cout << "\n-- FragTrap constructors\n";
        FragTrap unnamed_st;
        FragTrap foo("Foo");

        std::cout << "\n-- FragTrap copy constructor\n";
        FragTrap bar(foo);

        std::cout << "\nfoo.highFiveGuys() : ";
        foo.highFiveGuys();

        std::cout << "\n-- Copy assign\n";
        foo = bar;

        std::cout << "\n-- FragTrap destructors\n";
    }

    {
        std::cout << "====== Diamond Trap =======\n\n";
        std::cout << "> DiamondTrap unnamed;\n";
        DiamondTrap unnamed;

        std::cout << "\n> DiamondTrap foo('Foo');\n";
        DiamondTrap foo("Foo");

        std::cout << "\n> foo.whoAmI();\n";
        foo.whoAmI();

        std::cout << "\n> foo = unnamed;\n";
        foo = unnamed;

        std::cout << "\n> foo.whoAmI();\n";
        foo.whoAmI();

        std::cout << "\n> DiamondTrap bar(foo);\n";
        DiamondTrap bar(foo);

        std::cout << "\n> bar.whoAmI();\n";
        bar.whoAmI();

        std::cout << "\n> bar.attack('baz');\n";
        bar.attack("baz");

        std::cout << "\n> bar.guardGate();\n";
        bar.guardGate();
        
        std::cout << "\nbar.highFiveGuys();\n";
        bar.highFiveGuys();

        std::cout << "\n=== DiamondTrap Destructors\n";
    }

    std::cout << "\n-- Returning from main\n";
    return EXIT_SUCCESS;
}
