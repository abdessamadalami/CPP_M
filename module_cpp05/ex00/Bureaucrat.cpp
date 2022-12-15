/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:02:38 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 19:33:14 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static GradeTooLowException GradeTooLow_Exception;
static GradeTooHighException GradeTooHigh_Exception;

Bureaucrat::Bureaucrat():name("default"),grade(8)
{
    std:: cout << "Bureaucrat: default constructor called \n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name),grade(grade)
{
    std:: cout << "Bureaucrat: constructor called \n";
   
        if (grade < 1)
            throw GradeTooHighException();
        else if ( grade > 150)
            throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj):name(old_obj.name)
{ 
    std::cout << "Bureaucrat:copy constructor called \n";
    *this = old_obj;

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &old_obj)
{ 
    std::cout << "Bureaucrat: assingment operator\n";
    this->grade = old_obj.grade;
    return *this;
}

std::string Bureaucrat:: getName() const
{
    return (name);
}

int Bureaucrat:: getGrade() const
{
    return this->grade;
}

void  Bureaucrat::increment()
{
     std:: cout << "Bureaucrat: in increment membre function " << std::endl;
     this->grade--;
    if (grade < 1)
            throw GradeTooHighException();
    else if (grade > 150)
            throw GradeTooLowException();
}
 
void  Bureaucrat:: decriment()
{
    std:: cout << "Bureaucrat: in decriment membre function " << std::endl;
    this->grade++;
    if (grade < 1)
            throw GradeTooHighException();
    else if (grade > 150)
        throw  GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std:: cout << "Bureaucrat: destructor called \n";
}