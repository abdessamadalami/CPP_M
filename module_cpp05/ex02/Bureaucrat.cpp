/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:02:38 by ael-oual          #+#    #+#             */
/*   Updated: 2022/12/15 13:35:02 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
GradeTooLowException Bureaucrat::GradeTooLow_Exception;
GradeTooHighException Bureaucrat::GradeTooHigh_Exception;

Bureaucrat::Bureaucrat():name("default"),grade(8)
{
    // std:: cout << "default constructor called \n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name),grade(grade)
{
    // std:: cout << "Bureaucrat: constructor called \n";
    if (grade < 1)
            throw GradeTooHigh_Exception;
    else if ( grade > 150)
        throw GradeTooLow_Exception;
}

Bureaucrat:: Bureaucrat(const Bureaucrat& old_obj): name(old_obj.name),grade(old_obj.grade)
{
    // std:: cout << "Bureaucrat: copy constructor called" << std::endl;
    if (grade < 1)
            throw GradeTooHigh_Exception;
    else if (grade > 150)
        throw GradeTooLow_Exception;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &B)
{
    // std:: cout << "Bureaucrat: assingnemt operator called" << std::endl;
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
      std:: cout << "Bureaucrat: increment fun "<< this -> name << std::endl;
    this->grade--;
     if (grade < 1)
            throw GradeTooHigh_Exception;
        else if ( grade > 150)
            throw GradeTooLow_Exception;
}
 
void  Bureaucrat:: decriment()
{
      std:: cout << "Bureaucrat: decriment fun "<< this -> name << std::endl;
    this->grade++;
     if (grade < 1)
            throw GradeTooHigh_Exception;
        else if ( grade > 150)
            throw GradeTooLow_Exception;
}

void  Bureaucrat:: signForm(Form &form)
{
    if (form.get_index() && this->getGrade() <= form.get_grade_req_to_sign())
        std::cout << this->getName() << " signed " << form.get_name() << std::endl;
    else
        std::cout << this->getName() << " couldn’t sign " << form.get_name() << " because not have the requirement"<< std::endl;
}

void executeForm(Form const & form)
{
    
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat: destructor called \n";
}
