#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap default constructor called\n";
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other._name)
{
    std::cout << "FragTrap copy constructor called\n";
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called\n";
    if (this == &other)
        return *this;
    _name = other._name;
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    return *this;
}

void FragTrap::highFiveGuys() const
{
    std::cout << "FragTrap " << _name << ": high five guys!\n";
}
