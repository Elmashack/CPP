//
// Created by Nakloz Luya on 3/24/22.
//

#include "Form.hpp"

Form::Form(): name("NoName"), is_signed(false), grade2sign(1), grade2exec(1) {
    std::cout << "Default form is created!" << std::endl;
}

Form::Form(std::string name, int grade2sign, int grade2exec):  // try to break it
name(name), is_signed(false), grade2sign(grade2sign), grade2exec(grade2exec){
    std::cout << "Starting to creating a new form..." << std::endl;
    if (grade2sign < 1 || grade2exec < 1) {
        std::cout << "Error : ";
        throw (GradeTooHighException());
    }
    if (grade2sign > 150 || grade2exec > 150) {
        std::cout << "Error : ";
        throw (GradeTooLowException());
    }
    std::cout << "Done! Form [" << this->name << "] is created!" << std::endl;


}

Form::Form(const Form &src) : name(src.name), is_signed(src.is_signed), grade2sign(src.grade2sign), grade2exec(src.grade2exec) {
    *this = src;

}

Form &Form::operator=(const Form &src) {
    if (this == &src)
        return (*this);
    this->is_signed = src.is_signed;
    return (*this);
}

Form::~Form() {}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->grade2sign){
        std::cout << "Bureaucrat [" << bureaucrat.getName() << "] ";
        std::cout << "cannot sign [" << this->getName() << "], because ";
        throw (Bureaucrat::GradeTooLowException());
    }
    is_signed = true;
    std::cout << "Bureaucrat [" << bureaucrat.getName() << "] ";
    std::cout << "signed [" << this->getName() << "]" << std::endl;
}

std::string Form::getName() const{
    return this->name;
}

int Form::getGrade2Sign() const {
    return grade2sign;
}

int Form::getGrade2Exec() const {
    return grade2exec;
}

bool Form::getSigned() const {
    return is_signed;
}

const char *Form::GradeTooHighException::what() const throw() {
    return (RED"Creating this form is fatal : grade too high!"RESET);
}

const char* Form::GradeTooLowException::what() const throw() {
    return (RED"Creating this form is fatal : grade too low!"RESET);
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
    out<<"Form name : " << src.getName() << std::endl;
    out << "Grade to signed : " << src.getGrade2Sign() << std::endl;
    out << "Grade to execute : " << src.getGrade2Exec() << std::endl;
    if (src.getSigned()) {
        out << "Signed : Yes" << std::endl;
    }
    else
        out << "Signed : No" << std::endl;
    return (out);
}
