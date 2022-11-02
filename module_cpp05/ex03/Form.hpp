/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:24:45 by sultan            #+#    #+#             */
/*   Updated: 2022/10/21 18:19:33 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{

private:
    const std:: string name;
    bool index;
    const int grade_req_to_sign;
    const int grade_req_to_execut;
public:
    Form(/* args */);
    Form(const std::string name, bool indes, const int s, const int e);
    virtual ~Form();
    std:: string get_name() const;
    bool get_index() const;
    int get_grade_req_to_sign() const;
    int get_grade_req_to_execut() const;
    void beSigned(Bureaucrat A);
    void execute(Bureaucrat const & executor)const; //! u can't any const data numers but u with other non_const variable 
};

#endif
