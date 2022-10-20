/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:02:38 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/20 12:29:06 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(/* args */)
{
    std:: cout << "default constructor called \n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name),grade(grade)
{
    std:: cout << "constructor called \n";
   
        if (grade < 1)
        {
            throw GradeTooHighException();
        }
        else if ( grade > 150)
            throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std:: cout << "destructor called \n";
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &B)
{ 
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
     std:: cout << " in increment membre function " << std::endl;
     this->grade--;
     if (grade < 1)
            throw GradeTooHighException();
        else if ( grade > 150)
            throw GradeTooLowException();
}
 
void  Bureaucrat:: decriment()
{
    std:: cout << " in decriment membre function " << std::endl;
    this->grade++;
    if (grade < 1)
            throw GradeTooHighException();
        else if ( grade > 150)
           throw  GradeTooLowException();
}

