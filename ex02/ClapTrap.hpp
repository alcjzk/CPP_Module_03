#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap {
    public:
        ClapTrap(std::string name = "Unnamed");
        ClapTrap(const ClapTrap& other);
        ~ClapTrap();

        ClapTrap&   operator=(const ClapTrap& other);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
    protected:
        std::string     _name;
        unsigned int    _hit_points;
        unsigned int    _energy_points;
        unsigned int    _attack_damage;
};

#endif
