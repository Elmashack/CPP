//
// Created by Nakloz Luya on 3/7/22.
//

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main()
{
    DiamondTrap first("Nikolo");
    DiamondTrap anotherone;

    first.whoAmI();
    anotherone.attack("Nikolo");
    anotherone.whoAmI();
    return 0;
}
