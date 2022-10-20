/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:07:07 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/20 14:05:40 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"
class Form;
class Bureaucrat 
{
    class  GradeTooHighException : public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "Grade Too High Exception";
            }
    };

    class  GradeTooLowException : public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "Grade Too Low Exception";
            }  
    };
    
    private:
        const std:: string name;
        int grade;
    public:
        Bureaucrat(/* args */);
        Bureaucrat(std::string name, int grade);   
        ~Bureaucrat();
        // void GradeTooHighException();
        // void GradeTooLowException();
        int getGrade()const;
        std:: string getName()const;
        void increment();
        void decriment();
        Bureaucrat operator=( const Bureaucrat &B);
        void signForm( Form &form);
};

std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B);
#endif