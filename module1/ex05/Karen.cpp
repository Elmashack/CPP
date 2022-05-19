//
// Created by Nakloz Luya on 2/26/22.
//

#include "Karen.h"

Karen::Karen() {}
Karen::~Karen() {}

void Karen::debug() {
    std::cout << "This is a DEBUG message" << std::endl;
}

void Karen::info() {
    std::cout << "This is a INFO message" << std::endl;
}

void Karen::warning() {
    std::cout << "This is a WARNING message" << std::endl;
}

void Karen::error() {
    std::cout << "This is a ERROR message" << std::endl;
}

void Karen::complain(std::string level) {
    std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    func_ptr funcs[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

    for (int i = 0; i < 4; i++){
        if(complains[i] == level){
            (this->*funcs[i])();
        }
    }
}