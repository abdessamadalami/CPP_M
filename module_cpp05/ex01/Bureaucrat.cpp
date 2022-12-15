/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:02:38 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 19:43:07 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
GradeTooLowException Bureaucrat:: GradeTooLow_Exception;
GradeTooHighException Bureaucrat:: GradeTooHigh_Exception;

Bureaucrat::Bureaucrat():name("default"),grade(8)
{
    std:: cout << "default constructor called \n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name),grade(grade)
{
    std:: cout << "Bureaucrat: constructor called \n";
    if (grade < 1)
            throw GradeTooHigh_Exception;
    else if ( grade > 150)
        throw GradeTooLow_Exception;
}

Bureaucrat:: Bureaucrat(const Bureaucrat& old_obj): name(old_obj.name),grade(old_obj.grade)
{
    std:: cout << "Bureaucrat: copy constructor called" << std::endl;
    if (grade < 1)
            throw GradeTooHigh_Exception;
    else if (grade > 150)
        throw GradeTooLow_Exception;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &B)
{
    std:: cout << "Bureaucrat: assingnemt operator called" << std::endl;
    this->grade = B.grade;
    return *this;
}

std::string Bureaucrat:: getName() const
{
    return name;
}

int Bureaucrat:: getGrade() const
{
    return this->grade;
}

void  Bureaucrat::increment()
{
    this->grade--;
     if (grade < 1)
            throw GradeTooHigh_Exception;
        else if ( grade > 150)
            throw GradeTooLow_Exception;
}
 
void  Bureaucrat:: decriment()
{
    this->grade++;
     if (grade < 1)
            throw GradeTooHigh_Exception;
        else if ( grade > 150)
            throw GradeTooLow_Exception;
}

void  Bureaucrat:: signForm(Form &form)
{
    //std:: cout << "from signForm" << std::endl;
    if (form.get_index())
        std::cout << this->getName() << " signed " << form.get_name() << std::endl;
    else
        std::cout << this->getName() << " couldn’t sign " << form.get_name() << " because not have the requirement"<< std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std:: cout << "Bureaucrat: destructor called \n";
}
