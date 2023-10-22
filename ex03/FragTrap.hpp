#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(std::string name = "Unnamed");
        FragTrap(const FragTrap& other);
        ~FragTrap();

        FragTrap&   operator=(const FragTrap& other);

        void    highFiveGuys() const;
    protected:
        static unsigned int _hit_points_default;
        static unsigned int _energy_points_default;
        static unsigned int _attack_damage_default;
};

#endif
