//
// Created by Nakloz Luya on 3/12/22.
//

#ifndef MODULE4_WRONGANIMAL_H
#define MODULE4_WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const &src);
    WrongAnimal & operator=(WrongAnimal const &src);
    virtual ~WrongAnimal();

    void makeSound() const;
    std::string	getType() const;

protected:
    std::string	type;
};


#endif //MODULE4_WRONGANIMAL_H
