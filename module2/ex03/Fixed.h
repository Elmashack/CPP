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

    bool operator==(const Fixed &cls) const;
    bool operator!=(const Fixed &cls) const;
    bool operator>(const Fixed &cls) const;
    bool operator<(const Fixed &cls) const;
    bool operator>=(const Fixed &cls) const;
    bool operator<=(const Fixed &cls) const;


    Fixed operator+(const Fixed &cls);
    Fixed	operator-(const Fixed &src);
    Fixed	operator*(const Fixed &src);
    Fixed	operator/(const Fixed &src);

    // prefix
    Fixed&	operator++();
    Fixed&	operator--();

    //postfix
    Fixed	operator++(int);
    Fixed	operator--(int);

    static	Fixed &min(Fixed &src1, Fixed &src2);
    static	Fixed &max(Fixed &src1, Fixed &src2);
    static const	Fixed &min(const Fixed &src1, const Fixed &src2);
    static const	Fixed &max(const Fixed &src1, const Fixed &src2);

    float toFloat() const;
    int toInt() const;
    int getRawBits() const;
    void setRawBits(const int raw);

};

std::ostream &operator<< (std::ostream &out, const Fixed &fix_num);


#endif //MODULE2_FIXED_H