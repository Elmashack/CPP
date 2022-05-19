//
// Created by Nakloz Luya on 2/23/22.
//

#ifndef MODULE1_HUMANB_H
#define MODULE1_HUMANB_H

#include "Weapon.h"

class HumanB {
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    HumanB();
    ~HumanB();

    void setWeapon(Weapon &weapon);
    void attack();
};


#endif //MODULE1_HUMANB_H
