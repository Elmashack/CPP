//
// Created by Nakloz Luya on 3/7/22.
//

#include "Fixed.h"

Fixed::~Fixed() {}

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

Fixed::Fixed(const Fixed &cls) : fix_val(0) {
    *this = cls;
}

Fixed &Fixed::operator=(const Fixed &cls) {
    this->fix_val = cls.getRawBits();
    return *this;
}

// overloading of comparison operators
bool Fixed::operator==(const Fixed &cls) const {
    return this->fix_val == cls.getRawBits();
}

bool Fixed::operator!=(const Fixed &cls) const {
    return this->fix_val != cls.getRawBits();
}

bool Fixed::operator>(const Fixed &cls) const {
    return this->fix_val > cls.getRawBits();
}

bool Fixed::operator<(const Fixed &cls) const {
    return this->fix_val < cls.getRawBits();
}

bool Fixed::operator<=(const Fixed &cls) const {
    return this->fix_val <= cls.getRawBits();
}

bool Fixed::operator>=(const Fixed &cls) const {
    return this->fix_val >= cls.getRawBits();
}

// overloading of arithmetic operators

Fixed	Fixed::operator+(const Fixed &src) {
    Fixed	tmp(this->toFloat() + src.toFloat());
    return (tmp);
}

Fixed	Fixed::operator-(const Fixed &src) {
    Fixed	tmp(this->toFloat() - src.toFloat());
    return (tmp);
}

Fixed	Fixed::operator*(const Fixed &src) {
    Fixed	tmp(this->toFloat() * src.toFloat());
    return (tmp);
}

Fixed	Fixed::operator/(const Fixed &src) {
    if (src.toFloat() == 0) {
        std::cout << "Division by zero" << std::endl;
        return (*this);
    }
    Fixed	tmp(this->toFloat() / src.toFloat());
    return (tmp);
}

// overloading prefix

Fixed &Fixed::operator++() {
    this->fix_val++;
    return *this;
}

Fixed &Fixed::operator--() {
    this->fix_val--;
    return *this;
}

// overloading postfix

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->fix_val++;
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->fix_val--;
    return tmp;
}

// max and min

Fixed &Fixed::min(Fixed &src1, Fixed &src2) {
    return (src1 < src2 ? src1 : src2);
}

Fixed &Fixed::max(Fixed &src1, Fixed &src2) {
    return (src1 > src2 ? src1 : src2);
}

const Fixed &Fixed::min(const Fixed &src1, const Fixed &src2) {
    return (src1 < src2 ? src1 : src2);
}

const Fixed &Fixed::max(const Fixed &src1, const Fixed &src2) {
    return (src1 > src2 ? src1 : src2);
}

// converting

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
    return this->fix_val;
}

std::ostream &operator<< (std::ostream &out, const Fixed &fix_num){
    out << fix_num.toFloat();
    return out;
}
