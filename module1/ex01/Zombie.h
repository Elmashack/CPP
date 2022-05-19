//
// Created by Nakloz Luya on 2/23/22.
//

#ifndef MODULE1_ZOMBIE_H
#define MODULE1_ZOMBIE_H
#include <iostream>

class Zombie {
private:
    std::string name;
    static int count;

public:
    void announce(void);
    void setName(std::string name);

    Zombie();
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif //MODULE1_ZOMBIE_H
