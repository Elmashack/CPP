//
// Created by Nakloz Luya on 3/11/22.
//

#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap constructor is called\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    hit_p = 100;
    energy_p = 50;
    attack_p = 20;
    std::cout << "FragTrap [" << this->_name << "] constructor is called\n";
}

FragTrap::FragTrap(const FragTrap &src) {
    std::cout << "FragTrap [" << this->_name << "] copy constructor is called\n";
    *this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
    std::cout << "FragTrap [" << this->_name << "] assignment constructor is called\n";
    if (this == &src)
        return *this;
    this->_name = src._name;
    this->attack_p = src.attack_p;
    this->hit_p = src.hit_p;
    this->energy_p = src.energy_p;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called \n";
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap [" << this->_name << "] says: give me your five, guys!" << std::endl;
}
