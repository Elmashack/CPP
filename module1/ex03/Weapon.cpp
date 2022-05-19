//
// Created by Nakloz Luya on 2/23/22.
//

#include "Weapon.h"


Weapon::Weapon() : _type((std::string &) "") {}
Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType(){
    return _type;
}

void Weapon::setType(std::string type) {
    _type = type;
}



