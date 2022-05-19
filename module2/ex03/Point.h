//
// Created by Nakloz Luya on 3/7/22.
//

#ifndef MODULE2_POINT_H
#define MODULE2_POINT_H
# include "Fixed.h"

class Point {
private:
    const Fixed _x;
    const Fixed _y;

public:
    Point();
    ~Point();
    Point(float x, float y);
    Point(const Point &cls);

    const Point operator=(const Point &cls) const;

    int getXRaw() const;
    int getYRaw() const;
    float getXFloat() const;
    float getYFloat() const;
};


#endif //MODULE2_POINT_H
