//
// Created by Nakloz Luya on 2/20/22.
//

#include "Zombie.h"

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}


Zombie::Zombie(std::string name) {

    this->name = name;
    std::cout << "Zombie " << name << " was created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " was killed" << std::endl;
}



