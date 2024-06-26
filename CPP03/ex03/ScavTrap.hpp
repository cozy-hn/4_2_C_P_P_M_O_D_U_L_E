#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& obj);
        virtual ~ScavTrap();
        ScavTrap&	operator=(const ScavTrap& obj);
        ScavTrap(string name);
        void guardGate();
        void attack(const string& target);
};

#endif

