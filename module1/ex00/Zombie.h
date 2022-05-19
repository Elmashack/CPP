//
// Created by Nakloz Luya on 2/20/22.
//

#ifndef MODULE1_ZOMBIE_H
#define MODULE1_ZOMBIE_H

#include <iostream>

class Zombie {
private:
    std::string name;

public:
    void announce(void);

    Zombie(std::string name);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);


#endif //MODULE1_ZOMBIE_H
