/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:39:05 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/19 14:22:11 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B) //! const object need const member function for gurante to stay constan 
{
    COUT << B.getName() << "," << "Bureaucrat grade "<< B.getGrade();
    return COUT;
}

int main()
{
    try
    {
        Bureaucrat alami("alami",0);
       // std::cout << "alami";
        alami.decriment();
        
    }
     catch(Bureaucrat &a)
    {
        if (a.getGrade() < 1)
        {
            a.GradeTooHighException();
            // exit(0);
            return (0);
        }
        else
        {
           a.GradeTooLowException();
           return 1;
        }
    }
    return 0;
}