//
// Created by Nakloz Luya on 2/20/22.
//

#include "Zombie.h"


int main()
{
    Zombie *zombie1 = newZombie("NewBob");
    Zombie *zombie2 = newZombie("NewBalloon");
    zombie1->announce();
    delete zombie1;
    zombie2->announce();
    randomChump("ChumpBuzz");
    randomChump("ChumpChiz");
    delete zombie2;
    return 0;
}
