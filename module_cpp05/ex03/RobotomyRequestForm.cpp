/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:53:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/21 15:15:28 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

     RobotomyRequestForm:: RobotomyRequestForm():Form("default",0,72,45)
    {
        std::cout << "RobotomyRequestForm default constructor called " << std::endl;        
    }
    
    RobotomyRequestForm:: RobotomyRequestForm(std:: string target): target(target),Form(target,0,145,135)
    {
        std::cout << "RobotomyRequestForm constructor called " << std::endl;        
    }
    

    RobotomyRequestForm:: ~RobotomyRequestForm()
    {
        std:: cout << "RobotomyRequestForm destructor called "<< std::endl;
    }

     void RobotomyRequestForm:: execute(Bureaucrat const & executor)
     {
        std::cout << "alami\n";
        int a;
        this->beSigned(executor);
        if (this->get_index() && executor.getGrade() > this->get_grade_req_to_execut())
        {
            a = rand();
            if ((a % 1) == 0)
                std:: cout << this->target << " successfully to excute by " << executor.getName()<< std::endl;
            else
                std:: cout << this->target << " failed to excute by " << executor.getName()<< std::endl;
        }                             
     }
     