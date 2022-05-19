//
// Created by Nakloz Luya on 3/12/22.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("Default") {
    	std::cout << "WrongAnimal default constructor called (without type)" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    *this = src;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal	&	WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this == &src)
        return (*this);
    type = src.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const {
    std::cout << "Nothing!" << std::endl;
}

std::string	WrongAnimal::getType() const {
    return (this->type);
}
