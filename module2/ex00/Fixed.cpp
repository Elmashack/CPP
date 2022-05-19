//
// Created by Nakloz Luya on 3/4/22.
//

#include "Fixed.h"
#include "../ex02/Fixed.h"


Fixed::Fixed(): fix_val(0) {
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cls) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cls;
}

Fixed &Fixed::operator=(const Fixed &cls) {
    std::cout << "Assignation operator called" << std::endl;
    this->fix_val = cls.getRawBits();
    return *this;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fix_val = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fix_val;
}
