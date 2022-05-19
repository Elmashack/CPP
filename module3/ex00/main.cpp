//
// Created by Nakloz Luya on 3/7/22.
//

#include "ClapTrap.h"

int main()
{
    ClapTrap first("Nikolo");
    ClapTrap second("Bolf");
    ClapTrap third(first);

    third.setName("Dullsy");
    std::cout << "-----------------------------------" << std::endl;
    first.attack("Bolf");
    second.takeDamage(first.getAttackDamage());
    third.attack("Nikolo");
    first.takeDamage(third.getAttackDamage());
    std::cout << "-----------------------------------" << std::endl;
    third = second;
    std::cout << "-----------------------------------" << std::endl;
    third.beRepaired(24);
    std::cout << "-----------------------------------" << std::endl;
    third.info();
    std::cout << "-----------------------------------" << std::endl;
    second.info();
    std::cout << "-----------------------------------" << std::endl;
    first.info();
    std::cout << "-----------------------------------" << std::endl;
}
