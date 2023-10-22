#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{   
    public:
        DiamondTrap(std::string name = "Unnamed");
        DiamondTrap(const DiamondTrap& other);
        ~DiamondTrap();

        DiamondTrap&    operator=(const DiamondTrap& other);

        void    attack(const std::string& target);
        void    whoAmI() const;
    private:
        std::string _name;
};

#endif
