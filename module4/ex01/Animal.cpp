//
// Created by Nakloz Luya on 3/12/22.
//

#include "Animal.h"

Animal::Animal(): type("Default") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal	&	Animal::operator=(const Animal &src) {
	std::cout << "Animal assignation operator called" << std::endl;
    if (this == &src)
        return (*this);
    type = src.type;
    return (*this);
}

void Animal::makeSound() {}

std::string Animal::getType() {
    return this->type;
}