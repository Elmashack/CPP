//
// Created by Nakloz Luya on 2/23/22.
//

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombs = new Zombie[N];

    for (int i = 0; i < N; i++){
        zombs[i].setName(name);
    }
    return zombs;
}