//
// Created by Nakloz Luya on 3/25/22.
//

#ifndef MODULE5_PRESIDENTIALPARDONFORM_H
#define MODULE5_PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm & operator=(PresidentialPardonForm const &src);
    virtual ~PresidentialPardonForm();

    std::string	getTarget() const;
    void	setTarget(std::string target);
    virtual void	execute(Bureaucrat const &exec) const;
};


#endif //MODULE5_PRESIDENTIALPARDONFORM_H
