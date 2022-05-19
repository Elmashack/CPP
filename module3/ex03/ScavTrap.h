//
// Created by Nakloz Luya on 3/8/22.
//

#ifndef MODULE3_SCAVTRAP_H
#define MODULE3_SCAVTRAP_H
#include <iostream>
#include <string>
#include "ClapTrap.h"

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap();
    virtual ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &src);
    ScavTrap &operator=(const ScavTrap &src);

    void guardGate();
    void setName(std::string name);
    unsigned int getAttackDamage();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void info();
};


#endif //MODULE3_SCAVTRAP_H
