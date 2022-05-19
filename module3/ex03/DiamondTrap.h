//
// Created by Nakloz Luya on 3/12/22.
//

#ifndef MODULE3_DIAMONDTRAP_H
#define MODULE3_DIAMONDTRAP_H
#include "ScavTrap.h"
#include "FragTrap.h"
#include "ClapTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator=(const DiamondTrap &src);

    void attack(const std::string &target);
    void whoAmI();
};


#endif //MODULE3_DIAMONDTRAP_H
