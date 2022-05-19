//
// Created by Nakloz Luya on 2/23/22.
//

#include <iostream>
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // memory address
    std::cout << GREEN"Variable address " << &str << std::endl;
    std::cout << YELLOW"stringPTR address " << &stringPTR << std::endl;
    std::cout << CYAN"stringREF address " << &stringREF << std::endl;

    // value
    std::cout << GREEN"Variable Value " << str << std::endl;
    std::cout << YELLOW"stringPTR Value " << *stringPTR << std::endl;
    std::cout << CYAN"stringREF Value " << stringREF << std::endl;

}