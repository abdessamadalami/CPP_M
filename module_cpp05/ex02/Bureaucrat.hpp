/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:07:07 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 19:56:31 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"
#include "exception.hpp"
// class Form;
class Bureaucrat 
{ 
    private:
        const std:: string name;
        int grade;
       // Form f[8];
    public:
        Bureaucrat(/* args */);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& old_obj);
        Bureaucrat& operator=(const Bureaucrat &B);
        int getGrade()const;
        std:: string getName()const;
        void increment();
        void decriment();
        void signForm( Form &form);
        static GradeTooLowException GradeTooLow_Exception;
        static GradeTooHighException GradeTooHigh_Exception;
        ~Bureaucrat();
};

std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B);
#endif