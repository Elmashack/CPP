//
// Created by Nakloz Luya on 3/22/22.
//


#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"


int	main() {
    std::cout << MAGENTA"Creating bureaucrat objects..."RESET << std::endl;
    Bureaucrat	first("Jim", 139);
    Bureaucrat	second("Jon", 40);
    Bureaucrat	third("Bob", 1);
    std::cout << "Info about bureaucrat 1 : " << first;
    std::cout << "Info about bureaucrat 2 : " << second;
    std::cout << "Info about bureaucrat 3 : " << third << std::endl;
    //---------------------------------------------------------------------------
    std::cout << BLUE"Creating new form blank..."RESET << std::endl;
    ShrubberyCreationForm	form1("tree");
    RobotomyRequestForm		form2("TWV");
    std::cout << std::endl;
    //---------------------------------------------------------------------------
    std::cout << YELLOW"Work with form №1..."RESET << std::endl;
    std::cout << "Info about form 1 : " << std::endl;
    std::cout << form1;
    std::cout << "..." << std::endl;
    std::cout << "Trying to sign form..." << std::endl;
    first.signForm(form1);
    std::cout << "..." << std::endl;
    std::cout << "Info about form 1 : " << std::endl;
    std::cout << form1;
    std::cout << "..." << std::endl;
    std::cout << "Trying to execute form..." << std::endl;
    first.executeForm(form1);
    std::cout << "..." << std::endl;
    std::cout << "We can increment grade : " << std::endl;
    while (first.getGrade() != form1.getGrade2Exec()) {
        first.incrementGrade();
    }
    std::cout << "..." << std::endl;
    std::cout << "Trying to execute form again..." << std::endl;
    first.executeForm(form1);
    std::cout << std::endl;
    //---------------------------------------------------------------------------
    std::cout << YELLOW"Work with form №2..."RESET << std::endl;
    std::cout << "Info about form 2 : " << std::endl;
    std::cout << form2;
    std::cout << "..." << std::endl;
    std::cout << "Trying to sign form..." << std::endl;
    second.signForm(form2);
    std::cout << "..." << std::endl;
    std::cout << "Info about form 2 : " << std::endl;
    std::cout << form2;
    std::cout << "..." << std::endl;
    std::cout << "Trying to execute form..." << std::endl;
    second.executeForm(form2);
    std::cout << std::endl;
    //---------------------------------------------------------------------------
    std::cout << YELLOW"Work with form №3..."RESET << std::endl;
    Intern intern1;
    Form *form3;
    form3 = intern1.makeForm("PresidentialPardonForm", "Obama");
    std::cout << "..." << std::endl;
    std::cout << "Info about form 3 : " << std::endl;
    std::cout << *form3;
    std::cout << "..." << std::endl;
    std::cout << "Trying to sign form..." << std::endl;
    third.signForm(*form3);
    std::cout << "..." << std::endl;
    std::cout << "Info about form 3 : " << std::endl;
    std::cout << *form3;
    std::cout << "..." << std::endl;
    std::cout << "Trying to execute form..." << std::endl;
    third.executeForm(*form3);
    std::cout << "..." << std::endl;
    std::cout << "We can decrement grade and testing again : " << std::endl;
    while (third.getGrade() != form3->getGrade2Exec()) {
        third.decrementGrade();
    }
    std::cout << "..." << std::endl;
    std::cout << "Trying to execute form again..." << std::endl;
    third.executeForm(*form3);
    delete form3;
    std::cout << std::endl;
    //---------------------------------------------------------------------------
    std::cout << YELLOW"Work with form №4..."RESET << std::endl;
    Intern intern2;
    Form *form4;
    try {
        form4 = intern2.makeForm("ErrorForm", "noTarget");
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    if (form4 == NULL)
        exit(0);
    else {
        std::cout << "Info about form 4 : " << std::endl;
        std::cout << *form4;
        std::cout << "..." << std::endl;
        std::cout << "Trying to sign form..." << std::endl;
        third.signForm(*form4);
        std::cout << "..." << std::endl;
        std::cout << "Info about form 4 : " << std::endl;
        std::cout << *form4;
        std::cout << "..." << std::endl;
        std::cout << "Trying to execute form..." << std::endl;
        third.executeForm(*form4);
        delete form4;
    }
    std::cout << std::endl;
    //---------------------------------------------------------------------------
    std::cout << GREEN"That's all!"RESET << std::endl;
    //---------------------------------------------------------------------------
    return (0);
}
