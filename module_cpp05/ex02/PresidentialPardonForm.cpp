/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:04:58 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/20 17:52:48 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

     PresidentialPardonForm:: PresidentialPardonForm():Form("default",0,145,135)
    {
        std::cout << "PresidentialPardonForm constructor called " << std::endl;        
    }
    
    PresidentialPardonForm:: PresidentialPardonForm(std:: string target): target(target),Form(target,0,145,135)
    {
        std::cout << "PresidentialPardonForm constructor called " << std::endl;        
    }
    

    PresidentialPardonForm:: ~PresidentialPardonForm()
    {
        std:: cout << "PresidentialPardonForm destructor called "<< std::endl;
    }

     void PresidentialPardonForm:: execute(Bureaucrat const & executor)
     {
        std::cout << "alami\n";
        this->beSigned(executor);
        if (this->get_index() && executor.getGrade() > this->get_grade_req_to_execut())
        {
            this->target += "_shrubbery";
            std:: cout << this->target << "  endl\n";
            std:: ofstream MyFile(this->target);
            MyFile <<  "elouali alami the ceo of my self"; // plant 
        }                             
     }