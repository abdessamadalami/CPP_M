/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:24:45 by sultan            #+#    #+#             */
/*   Updated: 2022/10/19 15:29:48 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

class Form : Bureaucrat 
{
private:
    const std:: string name;
    bool index;
    const int grade_req_to_sign;
    const int grade_req_to_execut;
    
public:
    Form(/* args */);
    ~Form();
    std:: string get_name() const;
    bool get_index() const;
    int get_grade_req_to_sign() const;
    int get_grade_req_to_execut() const;
    void beSigned( Bureaucrat A);
    
};


