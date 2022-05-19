//
// Created by Nakloz Luya on 2/23/22.
//

#ifndef MODULE1_WEAPON_H
#define MODULE1_WEAPON_H

#include <iostream>

class Weapon {
private:
    std::string _type;

public:
    const std::string &getType();
    void setType(std::string type);

    Weapon();
    Weapon(std::string type);
    ~Weapon();

};


#endif //MODULE1_WEAPON_H
