/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:25:24 by sultan            #+#    #+#             */
/*   Updated: 2022/11/11 11:17:45 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

#include <iostream>

Form:: Form():name("default"), index(-1) , grade_req_to_sign (-1),grade_req_to_execut(-1)
{
    std::cout << "defualt constructor called " << std::endl;
}
Form:: Form(const std::string n, bool index, const int s, const int e) : name(n), index(index), grade_req_to_sign(s), grade_req_to_execut(e)
{
    std::cout << "constructor Form called " << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor called " << std::endl;
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

void Form:: beSigned(Bureaucrat &A)
{
    if (A.getGrade() <= grade_req_to_sign)
    {
        this->index = true;
    }
    else
    {
        this->index = false;
    }
}
