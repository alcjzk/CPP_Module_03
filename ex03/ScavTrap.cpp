#include <iostream>
#include "ScavTrap.hpp"

unsigned int ScavTrap::_hit_points_default = 100;
unsigned int ScavTrap::_energy_points_default = 50;
unsigned int ScavTrap::_attack_damage_default = 20;

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap default constructor called\n";
    _hit_points = _hit_points_default;
    _energy_points = _energy_points_default;
    _attack_damage = _attack_damage_default;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other._name)
{
    std::cout << "ScavTrap copy constructor called\n";
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap copy assignment operator called\n";
    if (this == &other)
        return *this;
    _name = other._name;
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (!_hit_points || !_energy_points)
        return;
    _energy_points--;
    std::cout << "ScavTrap " << _name << " attacks " << target <<
        ", causing " << _attack_damage << " points of damage!\n";

}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
}
