//
// Created by Nakloz Luya on 3/7/22.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap(): hit_p(10), energy_p(10), attack_p(6){
    std::cout << "ClapTrap Constructor called \n";
}
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called \n";
}

ClapTrap::ClapTrap(std::string name): _name(name), hit_p(10), energy_p(10), attack_p(6) {
    std::cout << "ClapTrap [" << _name << "] constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << "Copy [" << src._name << "] constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
    std::cout << "Assignation [" << src._name << "] operator called" << std::endl;
    if (this == &src)
        return *this;
    this->_name = src._name;
    this->attack_p = src.attack_p;
    this->hit_p = src.hit_p;
    this->energy_p = src.energy_p;
    return *this;
}

void ClapTrap::attack(const std::string &target) {
    if (this->energy_p == 0){
        std::cout << "No more energy left\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << attack_p << " points of damage!\n";
    this->energy_p -= 1;

}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name << " took " << amount << " points of damage!" << std::endl;
    if (amount > hit_p){
        this->hit_p = 0;
        std::cout << "ClapTrap [" << this->_name << "] is dead" << std::endl;
        return;
    }
    this->hit_p -= amount;

}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energy_p == 0){
        std::cout << "No more energy left\n";
        return ;
    }
    this->energy_p -= 1;
    this->hit_p += amount;
}

void ClapTrap::setName(std::string name) {
    this->_name = name;
}

unsigned int ClapTrap::getAttackDamage() {
    return this->attack_p;
}

void ClapTrap::info() {
    std::cout << "INFO ABOUT CLAPTRAP :" << std::endl;
    std::cout << "Name : " << this->_name << std::endl;
    std::cout << "Hit points : " << this->hit_p << std::endl;
    std::cout << "Energy points : " << this->energy_p << std::endl;
    std::cout << "Attack damage : " << this->attack_p << std::endl;

}




