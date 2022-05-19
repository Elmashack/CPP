//
// Created by Nakloz Luya on 3/12/22.
//

#ifndef MODULE4_CAT_H
#define MODULE4_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal
{
private:
    Brain *catBrain;
public:
    Cat();
    ~Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &src);

    virtual void makeSound() const;
    std::string getType() const;
};


#endif //MODULE4_CAT_H
