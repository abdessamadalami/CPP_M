/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:02:38 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/19 14:15:48 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat:: GradeTooHighException()
{
    std::cout << "grad too Hight Exception \n";
}
void Bureaucrat:: GradeTooLowException()
{
    std::cout << "grade too low Exception\n";
}
Bureaucrat::Bureaucrat(/* args */)
{
    std:: cout << "default constructor called \n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name),grade(grade)
{
    std:: cout << "constructor called \n";
   
        if (grade < 1 || grade >= 150)
            throw *this;
    
}

Bureaucrat::~Bureaucrat()
{
    std:: cout << "destructor called \n";
}

// Bureaucrat Bureaucrat::operator=( const Bureaucrat &B)
// {
//     this->name = B.getName();
//     this->grade = B.grade;
//     return *this;
// }

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
    if (grade < 1 || grade >= 150)
        throw *this;
}
 
void  Bureaucrat:: decriment()
{
    this->grade++;
    if (grade < 1 || grade >= 150)
        throw *this;
}

