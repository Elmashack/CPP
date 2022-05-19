//
// Created by Nakloz Luya on 3/24/22.
//

#ifndef MODULE5_FORM_HPP
#define MODULE5_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool is_signed;
    const int grade2sign;
    const int grade2exec;
public:
    Form();
    Form(std::string name, int grade2sign, int grade2exec);
    Form(Form const &src);
    Form & operator=(Form const &src);
    virtual ~Form();

    void beSigned(Bureaucrat &bureaucrat);
    std::string getName() const;
    int	getGrade2Sign() const;
    int	getGrade2Exec() const;
    bool	getSigned() const;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};
std::ostream&	operator<<(std::ostream &out, const Form &src);

#endif //MODULE5_FORM_H
