//
// Created by Nakloz Luya on 2/23/22.
//

#include "Zombie.h"

int Zombie::count = 0;

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

Zombie::Zombie() {}

void Zombie::setName(std::string name) {
	this->name = name;
	std::cout << "Zombies " << this->name << " was created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie [" <<  name << " was killed" << std::endl;
}
