#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap(std::string name = "Unnamed");
        ScavTrap(const ScavTrap& other);
        ~ScavTrap();

        ScavTrap&   operator=(const ScavTrap& other);

        void    attack(const std::string& target);
        void    guardGate() const;
    protected:
        static unsigned int _hit_points_default;
        static unsigned int _energy_points_default;
        static unsigned int _attack_damage_default;
};

#endif
