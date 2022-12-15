/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:04:58 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 16:52:14 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
    NOT_S PresidentialPardonForm:: not_signed;
    NOT_EXC  PresidentialPardonForm:: not_excute;

    PresidentialPardonForm:: PresidentialPardonForm():Form("default",0,25,5)
    {
        // std::cout << "PresidentialPardonForm: default constructor called " << std::endl;        
    }
    
    PresidentialPardonForm:: PresidentialPardonForm(std:: string target):Form(target,0,25,5), target(target)
    {
        // std::cout << "PresidentialPardonForm: constructor called " << std::endl;        
    }
    
    PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& old_obj)
    {
        // std::cout << "PresidentialPardonForm: copy constructor called " << std::endl; 
        this->target = old_obj.target;
    }

    PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& old_obj)
    {
        // std::cout << "PresidentialPardonForm: assignement operator" << std::endl; 
        this->target = old_obj.target;  
        return *this;
    }
    
    void PresidentialPardonForm:: execute(Bureaucrat const & executor)
    {
        if (this->get_index() == false)
            throw not_signed;
        if (executor.getGrade() > this->get_grade_req_to_execut())
            throw not_excute;
        std:: cout << "excuted: " << this->target << " pardoned by by Zaphod Beeblebrox" << std::endl;                            
    }
    
    PresidentialPardonForm:: ~PresidentialPardonForm()
    {
        // std:: cout << "PresidentialPardonFormm: destructor called "<< std::endl;
    }
     