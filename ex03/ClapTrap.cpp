#include <iostream>
#include <limits>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
    _name(name),
    _hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{
    std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) :
    _name(other._name),
    _hit_points(other._hit_points),
    _energy_points(other._energy_points),
    _attack_damage(other._attack_damage)
{
    std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap copy assignment operator called\n";
    if (this == &other)
        return *this;
    _name = other._name;
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (!_hit_points || !_energy_points)
        return;
    _energy_points--;
    std::cout << "ClapTrap " << _name << " attacks " << target <<
        ", causing " << _attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!_hit_points || !_energy_points)
        return;
    amount = amount <= _hit_points ? amount : _hit_points;
    _hit_points -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount <<
        " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int    amount_max;

    if (!_hit_points || !_energy_points)
        return;
    _energy_points--;
    amount_max = std::numeric_limits<unsigned int>::max() - _hit_points;
    amount = amount <= amount_max ? amount : amount_max;
    _hit_points += amount;
    std::cout << "ClapTrap " << _name << " repairs itself with " <<
        amount << " points\n";
}
