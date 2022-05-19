//
// Created by Nakloz Luya on 2/23/22.
//

#ifndef MODULE1_HUMANA_H
#define MODULE1_HUMANA_H

#include "Weapon.h"

class HumanA {
private:
    std::string _name;
    Weapon &_weapon;
public:
    void attack();
    HumanA(std::string name,  Weapon &weapon);
    ~HumanA();

};


#endif //MODULE1_HUMANA_H
