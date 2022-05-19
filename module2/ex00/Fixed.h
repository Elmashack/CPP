//
// Created by Nakloz Luya on 3/4/22.
//

#ifndef MODULE2_FIXED_H
#define MODULE2_FIXED_H
#include <iostream>

class Fixed {
private:
    int fix_val;
    static const int frac_bit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &cls);
    Fixed &operator=(const Fixed &cls);

    int getRawBits() const;
    void setRawBits(const int raw);

};


#endif //MODULE2_FIXED_H
