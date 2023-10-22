#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
    ClapTrap(name + "_clap_name"),
    _name(name)
{
    std::cout << "DiamondTrap default constructor called\n";
    _hit_points = FragTrap::_hit_points_default;
    _energy_points = ScavTrap::_energy_points_default;
    _attack_damage = FragTrap::_attack_damage_default;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : 
    ClapTrap(other._name + "_clap_name"),
    _name(other._name)
{
    std::cout << "DiamondTrap copy constructor called\n";
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap copy assignment operator called\n";
    if (this == &other)
        return *this;
    ClapTrap::_name = other.ClapTrap::_name;
    this->_name = other._name;
    ClapTrap::_hit_points = other.ClapTrap::_hit_points;
    ClapTrap::_energy_points = other.ClapTrap::_energy_points;
    ClapTrap::_attack_damage = other.ClapTrap::_attack_damage;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "I am " << _name << " (" << ClapTrap::_name << ")\n";
}
