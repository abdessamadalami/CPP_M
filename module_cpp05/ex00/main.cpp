/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:39:05 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/19 12:04:04 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


std::ostream operator<< (std:: ostream& COUT, const Bureaucrat& B)
{
    COUT << B.getName() << "," << "Bureaucrat grade "<< B.getGrade();
    //return COUT;
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
            exit(0);
            return (1);
        }
        else
        {
           a.GradeTooLowException();
           return 1;
        }
    }
    return 0;
}