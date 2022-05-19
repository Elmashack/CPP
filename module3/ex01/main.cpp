//
// Created by Nakloz Luya on 3/7/22.
//

#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
    ClapTrap first("Nikolo");
    ClapTrap second("Bolf");
    ScavTrap anotherone("Khaled");

    std::cout << "-----------------------------------" << std::endl;
    first.attack("Bolf");
    second.takeDamage(first.getAttackDamage());
    anotherone.attack("Nikolo");
    first.takeDamage(anotherone.getAttackDamage());
    std::cout << "-----------------------------------" << std::endl;
    anotherone.beRepaired(24);
    std::cout << "-----------------------------------" << std::endl;
    anotherone.guardGate();
    std::cout << "-----------------------------------" << std::endl;
    first.info();
    std::cout << "-----------------------------------" << std::endl;
    anotherone.info();
    std::cout << "-----------------------------------" << std::endl;

}
