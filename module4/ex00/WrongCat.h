//
// Created by Nakloz Luya on 3/12/22.
//

#ifndef MODULE4_WRONGCAT_H
#define MODULE4_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    WrongCat(WrongCat const &src);
    WrongCat & operator=(WrongCat const &src);
    virtual ~WrongCat();

    void makeSound() const;
};


#endif //MODULE4_WRONGCAT_H
