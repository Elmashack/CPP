//
// Created by Nakloz Luya on 3/22/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main() {
    std::cout << MAGENTA"Creating bureaucrat object..."RESET << std::endl;
    Bureaucrat bureaucrat("Bob", 87);
    std::cout << "Info about bureaucrat : ";
    std::cout << bureaucrat << std::endl;

    std::cout << BLUE"Creating new form blank..."RESET << std::endl;
    Form	form("Blank", 86, 85);
    std::cout << "Info about form : ";
    std::cout << form << std::endl;
    try {
        std::cout << YELLOW"Trying to sign blank form..."RESET << std::endl;
        bureaucrat.signForm(form);
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << BLUE"Creating another form blank..."RESET << std::endl;
    try{
        Form	form1("Blank", 151, 150);
        std::cout << "Info about form : ";
        std::cout << form1 << std::endl;
    }
    catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
