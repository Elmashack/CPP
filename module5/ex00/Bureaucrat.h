//
// Created by Nakloz Luya on 3/22/22.
//

#ifndef MODULE5_BUREAUCRAT_H
#define MODULE5_BUREAUCRAT_H

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

#include "iostream"
#include "exception"

class Bureaucrat {
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat & operator=(Bureaucrat const &src);
    virtual ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

class GradeTooHighException : public std::exception{
public:
    virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception{
public:
        virtual const char* what() const throw();
};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &src);
#endif //MODULE5_BUREAUCRAT_H
