/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:25:24 by sultan            #+#    #+#             */
/*   Updated: 2022/10/19 15:30:08 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

#include <iostream>

Form:: Form(/* args */):name("default"), index(-1) , grade_req_to_sign (-1),grade_req_to_execut(-1)
{
    std::cout << "Form constructor called " << std::endl;
}

Form::~Form()
{
}
std:: string Form:: get_name() const
{
    return this -> name;
 }
bool Form:: get_index()const
{
    return this -> index;
}

int Form:: get_grade_req_to_sign()const
{
    return this ->grade_req_to_sign;
}

int Form:: get_grade_req_to_execut()const
{
    return this ->grade_req_to_execut;
}

void Form:: beSigned( Bureaucrat A)
{
    if (A.getGrade() == 1)
        this->index = 1;
    
}