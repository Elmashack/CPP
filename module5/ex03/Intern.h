//
// Created by Nakloz Luya on 3/25/22.
//

#ifndef MODULE5_INTERN_H
#define MODULE5_INTERN_H

#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern {
public:
    Intern();
    Intern(Intern const &src);
    Intern& operator=(Intern const &src);
    virtual ~Intern();

    class FormNotFound : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    Form*	makeForm(std::string nameForm, std::string targetForm);
};


#endif //MODULE5_INTERN_H
