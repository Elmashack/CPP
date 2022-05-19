//
// Created by Nakloz Luya on 3/7/22.
//

#include "Fixed.h"

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(): fix_val(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    this->fix_val = num << frac_bit;
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    this->fix_val = roundf(num * (1 << frac_bit));
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

float Fixed::toFloat() const {
    return (this->fix_val / (float)(1 << frac_bit));
}

int Fixed::toInt() const {
    return (this->fix_val >> frac_bit);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fix_val = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fix_val;
}

std::ostream &operator<< (std::ostream &out, const Fixed &fix_num){
    out << fix_num.toFloat();
    return out;
}
