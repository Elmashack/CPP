//
// Created by Nakloz Luya on 3/12/22.
//

#ifndef MODULE4_ANIMAL_H
#define MODULE4_ANIMAL_H

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &src);
    Animal &operator=(const Animal &src);

    virtual void makeSound();
    std::string getType();
};


#endif //MODULE4_ANIMAL_H
