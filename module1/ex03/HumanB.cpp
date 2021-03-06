//
// Created by Nakloz Luya on 2/23/22.
//

#include "HumanB.h"

HumanB::~HumanB() {}

HumanB::HumanB(std::string name) : _name(name) {}

void HumanB::setWeapon(Weapon &weapon) {

    _weapon = &weapon;
}

void HumanB::attack() {
    std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

