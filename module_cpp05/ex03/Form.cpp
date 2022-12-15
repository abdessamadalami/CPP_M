/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:25:24 by sultan            #+#    #+#             */
/*   Updated: 2022/11/22 17:04:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include <iostream>
#include "exception.hpp"

 GradeTooHighException_form Form::GradeTooHighException_for;
 GradeTooLowException_form  Form::GradeTooLowException_for;
Form:: Form():name("default"), index(1) , grade_req_to_sign (1),grade_req_to_execut(1)
{
    // std::cout << "Form: defualt constructor called " << std::endl;
}

Form:: Form(const std::string n, bool index, const int s, const int e):name(n), index(index),
        grade_req_to_sign(s), grade_req_to_execut(e)
{
    // std::cout << "Form: constructor called " << std::endl;
    if (grade_req_to_sign < 1 || grade_req_to_execut < 1)
        throw GradeTooHighException_for;
    else if ( grade_req_to_sign > 150 || grade_req_to_execut > 150)
        throw GradeTooLowException_for;
}

Form::Form(const Form& old_obj): name(old_obj.name), index(old_obj.index),
                                grade_req_to_sign(old_obj.grade_req_to_sign),
                                grade_req_to_execut(old_obj.grade_req_to_sign)
{
    // std::cout << "Form: copy constructor Form called " << std::endl;
}

Form& Form::operator=(const Form &old_obj)
{
    std:: cout << "Form: assingnemt operator called" << std::endl;
    this->index = old_obj.index;
    return *this;
}

std:: string Form:: get_name() const
{
    return this -> name;
}

bool Form:: get_index()const
{
    return this->index;
}

int Form:: get_grade_req_to_sign()const
{
    return this->grade_req_to_sign;
}

int Form:: get_grade_req_to_execut()const
{
    return this->grade_req_to_execut;
}

void Form:: beSigned(const Bureaucrat &A)
{
    std::cout << "Form: in be signed "<<  A.getGrade() << " " << grade_req_to_sign << std::endl;
    if (A.getGrade() <= grade_req_to_sign)
        this->index = true;
    else
        this->index = false;
}

Form::~Form()
{
    // std::cout << "Form: destructor called " << std::endl;
}