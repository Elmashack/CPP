//
// Created by Nakloz Luya on 3/25/22.
//

#ifndef MODULE5_SHRUBBERYCREATIONFORM_H
#define MODULE5_SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm: public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm();

    std::string	getTarget() const;
    void	setTarget(std::string target);
    virtual void	execute(Bureaucrat const &exec) const;

private:
    std::string target;
};


#endif //MODULE5_SHRUBBERYCREATIONFORM_H
