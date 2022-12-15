/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:20:08 by ael-oual          #+#    #+#             */
/*   Updated: 2022/12/14 16:40:18 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

s_GradeTooHighException Intern:: notfound;
Intern:: Intern()
{
    //  std:: cout << "Intern: Intern constructor called " << std::endl;
}

Intern::Intern(const Intern &old_obj)
{
    (void)old_obj;
    // std::cout << "Intern: copy constructor called" << std::endl;
}

Intern& Intern:: operator= (const Intern &old_obj)
{
    (void)old_obj;
    return (*this);
}

Form* Intern :: makeForm(std:: string name, std:: string target)
{
    
    std::cout << "Intern: make form function " << std::endl;
    
    int index = ((name == "PresidentialPardonForm") * 0 + (name == "RobotomyRequestForm") * 1 + (name == "ShrubberyCreationForm") *  2);
    if (index == 0 && name != "PresidentialPardonForm")
        throw notfound;
    Form (*arr[]) = { 
                        new PresidentialPardonForm(target),
                        new RobotomyRequestForm(target),
                        new ShrubberyCreationForm(target),
                    };


    for (int i = 0; i < 3; i++)
    {
        if (i != index)
            delete arr[i];
    }
    return arr[index];
    
}

Intern :: ~Intern()
{
    //  std:: cout << "Intern: destructor calles " << std::endl;
}