//
// Created by Nakloz Luya on 3/12/22.
//

#include "Dog.h"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
    this->dogBrain = new Brain();
}

Dog::Dog(const Dog &src) {
    this->dogBrain = new Brain();
    this->dogBrain = src.dogBrain;
    *this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&	Dog::operator=(const Dog &src) {
	std::cout << "Dog assignation operator called" << std::endl;
    if (this == &src)
        return (*this);
    delete this->dogBrain;
    dogBrain = new Brain();
    dogBrain = src.dogBrain;
    type = src.type;
    return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
    delete this->dogBrain;
}

void	Dog::makeSound() const{
    std::cout << "The dog barks!" << std::endl;
}

std::string Dog::getType() const{
    return Animal::getType();
}
