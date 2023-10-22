#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name = "Unnamed");
        ScavTrap(const ScavTrap& other);
        ~ScavTrap();

        ScavTrap&   operator=(const ScavTrap& other);

        void    attack(const std::string& target);
        void    guardGate() const;
};

#endif
