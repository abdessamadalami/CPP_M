/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:21:47 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/20 18:25:03 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

     ShrubberyCreationForm:: ShrubberyCreationForm():Form("default",0,25,5)
    {
        std::cout << "ShrubberyCreationForm constructor called " << std::endl;        
    }
    
    ShrubberyCreationForm:: ShrubberyCreationForm(std:: string target): target(target),Form(target, 0, 25, 5)
    {
        std::cout << "ShrubberyCreationForm constructor called " << std::endl;        
    }
    
    ShrubberyCreationForm:: ~ShrubberyCreationForm()
    {
        std:: cout << "ShrubberyCreationForm destructor called "<< std::endl;
    }

    void ShrubberyCreationForm:: execute(Bureaucrat const & executor)
    {
        std::cout << "alami\n";
        this->beSigned(executor);
        if (this->get_index() && executor.getGrade() > this->get_grade_req_to_execut())
        {
            std:: cout << this->target << " pardoned by by Zaphod Beeblebrox \n";
        }                            
    }