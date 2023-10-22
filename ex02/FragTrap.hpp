#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(std::string name = "Unnamed");
        FragTrap(const FragTrap& other);
        ~FragTrap();

        FragTrap&   operator=(const FragTrap& other);

        void    highFiveGuys() const;
};

#endif
