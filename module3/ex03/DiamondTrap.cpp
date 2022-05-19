//
// Created by Nakloz Luya on 3/12/22.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), ScavTrap(), FragTrap()
{
    _name = "Default name";
    hit_p = FragTrap::hit_p;
    energy_p = ScavTrap::energy_p;
    attack_p = FragTrap::attack_p;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap [" << this->_name << "] destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(), FragTrap()
{
    _name = name;
    hit_p = FragTrap::hit_p;
    energy_p = ScavTrap::energy_p;
    attack_p = FragTrap::attack_p;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ScavTrap(src), FragTrap(src) {
    std::cout << "DiamondTrap [" << this->_name << "] copy constructor called" << std::endl;

}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
    std::cout << "DiamondTrap [" << this->_name << "] assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    _name = "Default name";
    hit_p = src.hit_p;
    energy_p = src.energy_p;
    attack_p = src.attack_p;
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap [" << this->_name << "] inherited from ClapTrap [";
    std::cout << ClapTrap::_name << "]." << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}
