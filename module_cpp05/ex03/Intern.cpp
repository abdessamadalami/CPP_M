/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:20:08 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/21 18:24:52 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class  Form;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;
Intern:: Intern()
{
    std:: cout << "Intern constructor called " << std::endl;
}
Form* Intern :: makeForm(std:: string name, std:: string target)
{
    
    int index = ((name == "PresidentialPardonForm") * 0 + (name == "RobotomyRequestForm") * 1 +  (name == "ShrubberyCreationForm") *  2 );
    
    switch (index)
    {
    case 0:
        return new PresidentialPardonForm(target);
        break;
    case 1:
        return new RobotomyRequestForm(target);
        break;
    case 2:
        return new ShrubberyCreationForm(target);
        break;
    default:
        return (0);
        break;
    }
}

Intern :: ~Intern()
{
    std:: cout << "Intern destructor calles " << std::endl;
}