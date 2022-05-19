//
// Created by Nakloz Luya on 3/12/22.
//

#include "Cat.h"

Cat::Cat(): Animal()
{
    type = "Cat";
    this->catBrain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
    this->catBrain = new Brain();
    this->catBrain = src.catBrain;
    *this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&	Cat::operator=(const Cat &src) {
	std::cout << "Cat assignation operator called" << std::endl;
    if (this == &src)
        return (*this);
    delete this->catBrain;
    type = src.type;
    this->catBrain = new Brain();
    this->catBrain = src.catBrain;
    return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
    delete this->catBrain;
}

void Cat::makeSound() {
    std::cout << "The cat is meowing!" << std::endl;
}
