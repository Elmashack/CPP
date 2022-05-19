//
// Created by Nakloz Luya on 3/26/22.
//

#ifndef MODULE6_CONVERT_H
#define MODULE6_CONVERT_H

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"

#include "iostream"
#include "iomanip"
#include <string>
#include <exception>
#include <cmath>
#include <cfloat>

class Convert {
private:
    std::string arg;
public:
    Convert();
    Convert(std::string arg);
    Convert(Convert const &src);
    Convert& operator=(Convert const &src);
    ~Convert();

    void	toChar();
    void	toInt();
    void	toFloat();
    void	toDouble();
};


#endif //MODULE6_CONVERT_H
