/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:53:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 16:57:14 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
    NOT_S RobotomyRequestForm:: not_signed;
    NOT_EXC  RobotomyRequestForm:: not_excute;
     RobotomyRequestForm:: RobotomyRequestForm():Form("default",0,72,45)
    {
        // std::cout << "RobotomyRequestForm: constructor called " << std::endl;        
    }
    
    RobotomyRequestForm:: RobotomyRequestForm(std:: string target): Form(target,0,72,45), target(target)
    {
        // std::cout << "RobotomyRequestForm: constructor called " << std::endl;        
    }
    
     RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& old_obj): Form(old_obj.target,0,72,45), target(old_obj.target)
    {
        // std::cout << "RobotomyRequestForm: copy constructor called " << std::endl; 
        this->target = old_obj.target;
    }

    RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& old_obj)
    {
        // std::cout << "RobotomyRequestForm: assignement operator" << std::endl; 
        this->target = old_obj.target;  
        return *this;
    }
    
    void RobotomyRequestForm::execute(Bureaucrat const & executor)
    {
        int a;
        if (this->get_index() == false)
            throw not_signed;
        if (executor.getGrade() > this->get_grade_req_to_execut())
            throw not_excute;
        srand(time(0));
        a = rand();
        if ((a % 2) == 0)
            std:: cout << " execute: "<< this->target << " successfully to excute by " << executor.getName()<< std::endl;
        else
            std:: cout << " execute: "<< this->target << " failed to excute by " << executor.getName()<< std::endl;
                               
    }
    
    RobotomyRequestForm:: ~RobotomyRequestForm()
    {
        // std:: cout << "RobotomyRequestForm: destructor called "<< std::endl;
    }
     