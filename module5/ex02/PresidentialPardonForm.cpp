//
// Created by Nakloz Luya on 3/25/22.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
        : Form("PresidentialPardonForm", 25, 5) {
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) {
    *this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this == &src)
        return (*this);
    this->target = src.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string	PresidentialPardonForm::getTarget() const {return (this->target);}

void	PresidentialPardonForm::setTarget(std::string target) {
    this->target = target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &exec) const {
    if (!this->getSigned())
        throw (FormNotSignedException());
    if (exec.getGrade() <= this->getGrade2Exec()) {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        throw (Bureaucrat::GradeTooLowException());
}