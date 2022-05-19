//
// Created by Nakloz Luya on 3/8/22.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap(): ClapTrap() {
    hit_p = 100;
    energy_p = 50;
    attack_p = 20;
    std::cout << "ScavTrap constructor is called\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    hit_p = 100;
    energy_p = 50;
    attack_p = 20;
    std::cout << "ScavTrap [" << this->_name << "] constructor is called\n";
}

ScavTrap::ScavTrap(const ScavTrap &src) {
    std::cout << "ScavTrap [" << this->_name << "] copy constructor is called\n";
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
    std::cout << "ScavTrap [" << this->_name << "] assignment constructor is called\n";
    if (this == &src)
        return *this;
    this->_name = src._name;
    this->attack_p = src.attack_p;
    this->hit_p = src.hit_p;
    this->energy_p = src.energy_p;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap [" << this->_name << "] is in guard mode\n";
}

void ScavTrap::attack(const std::string &target) {
    if (this->energy_p == 0){
        std::cout << "No more energy left\n";
        return ;
    }
    std::cout << "ScavTrap [" << _name << "] attacks " << target << ", causing " << attack_p << " points of damage!\n";
    this->energy_p -= 1;

}

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name << " took " << amount << " points of damage!" << std::endl;
    if (amount > hit_p){
        this->hit_p = 0;
        std::cout << "ScavTrap [" << this->_name << "] is dead" << std::endl;
        return;
    }
    this->hit_p -= amount;

}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->energy_p == 0){
        std::cout << "No more energy left\n";
        return ;
    }
    this->energy_p -= 1;
    this->hit_p += amount;
}

void ScavTrap::setName(std::string name) {
    this->_name = name;
}

unsigned int ScavTrap::getAttackDamage() {
    return this->attack_p;
}

void ScavTrap::info() {
    std::cout << "INFO ABOUT ScavTrap :" << std::endl;
    std::cout << "Name : " << this->_name << std::endl;
    std::cout << "Hit points : " << this->hit_p << std::endl;
    std::cout << "Energy points : " << this->energy_p << std::endl;
    std::cout << "Attack damage : " << this->attack_p << std::endl;

}

