//
// Created by Nakloz Luya on 3/7/22.
//

#ifndef MODULE2_FIXED_H
#define MODULE2_FIXED_H
# include <iostream>
# include <cmath>

class Fixed {
private:
    int fix_val;
    static const int frac_bit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &cls);

    Fixed &operator=(const Fixed &cls);
    float toFloat() const;
    int toInt() const;

    int getRawBits() const;
    void setRawBits(const int raw);

};

std::ostream &operator<< (std::ostream &out, const Fixed &fix_num);


#endif //MODULE2_FIXED_H