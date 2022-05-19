//
// Created by Nakloz Luya on 3/11/22.
//

#ifndef MODULE3_FRAGTRAP_H
#define MODULE3_FRAGTRAP_H

#include "ScavTrap.h"
#include "ClapTrap.h"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap();
    virtual ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &src);

    void highFivesGuys(void);
};


#endif //MODULE3_FRAGTRAP_H
