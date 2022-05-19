//
// Created by Nakloz Luya on 3/22/22.
//

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(): name("default"), grade(1){
    std::cout << "Default bureaucrat is created!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
    std::cout << "Starting to creating a new Bureaucrat..." << std::endl;
    if (grade < 1){
        std::cout << "Error : ";
        throw(GradeTooHighException());
    }
    if (grade > 150){
        std::cout << "Error : ";
        throw(GradeTooLowException());
    }
    else
        this->grade = grade;
    std::cout << "Done! Bureaucrat [" << this->name << "] is created!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
    if (this == &src)
        return (*this);
    this->grade = src.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const{
    return this->name;
}

int Bureaucrat::getGrade() const{
    return this->grade;
}

void Bureaucrat::incrementGrade() {
    if(this->grade - 1 == 0) {
        std::cout << "This's the highest level : ";
        throw (GradeTooHighException());
    }
    this->grade--;
    std::cout << "Now Bureaucrat [" << getName() << "] has " << getGrade() << " grade." << std::endl;
}

void Bureaucrat::decrementGrade() {
    if (this->grade + 1 > 150){
        std::cout << "This's the lowest level : ";
        throw(GradeTooLowException());
    }
    this->grade++;
    std::cout << "Now Bureaucrat [" << getName() << "] has " << getGrade() << " grade." << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return (RED"Level too high!"RESET);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return (RED"Level too low!"RESET);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src) {
    return (out << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">" << std::endl);
}