//
// Created by Nakloz Luya on 3/25/22.
//

#ifndef MODULE5_ROBOTOMYREQUESTFORM_H
#define MODULE5_ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm & operator=(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();

    std::string	getTarget() const;
    void	setTarget(std::string target);
    virtual void	execute(Bureaucrat const &exec) const;
};


#endif //MODULE5_ROBOTOMYREQUESTFORM_H
