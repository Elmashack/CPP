//
// Created by Nakloz Luya on 3/7/22.
//

#include "Point.h"

Point::Point(): _x(0), _y(0) {}

Point::~Point() {}

Point::Point(float x, float y) : _x(x), _y(y) {}


const Point Point::operator=(const Point &cls) const {
    return cls;
}

Point::Point(const Point &cls): _x(cls._x), _y(cls._y){}

int	Point::getXRaw() const {
    return (this->_x.getRawBits());
}

int	Point::getYRaw() const {
    return (this->_y.getRawBits());
}

float	Point::getXFloat() const {
    return (this->_x.toFloat());
}

float	Point::getYFloat() const {
    return (this->_y.toFloat());
}