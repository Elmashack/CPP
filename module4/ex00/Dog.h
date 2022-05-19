//
// Created by Nakloz Luya on 3/12/22.
//

#ifndef MODULE4_DOG_H
#define MODULE4_DOG_H

# include "Animal.h"
class Dog: public Animal
{
public:
    Dog();
    Dog(Dog const &src);
    Dog & operator=(Dog const &src);
    virtual ~Dog();

    virtual void makeSound();
};


#endif //MODULE4_DOG_H
