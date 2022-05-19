//
// Created by Nakloz Luya on 3/12/22.
//

#ifndef MODULE4_CAT_H
#define MODULE4_CAT_H

#include "Animal.h"

class Cat: public Animal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &src);

    virtual void makeSound();
    std::string getType();
};


#endif //MODULE4_CAT_H
