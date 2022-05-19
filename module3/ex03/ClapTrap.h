//
// Created by Nakloz Luya on 3/7/22.
//

#ifndef MODULE3_CLAPTRAP_H
#define MODULE3_CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap {
protected:
    std::string _name;
    unsigned int hit_p;
    unsigned int  energy_p;
    unsigned int attack_p;
public:
    ClapTrap();
    virtual ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &src);

    void setName(std::string name);
    unsigned int getAttackDamage();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void info();
};


#endif //MODULE3_CLAPTRAP_H
