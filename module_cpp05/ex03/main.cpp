/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:39:05 by ael-oual          #+#    #+#             */
/*   Updated: 2022/12/14 16:37:36 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B) //! const object need const member function for gurante to stay constan 
{
    COUT << B.getName() << "," << "Bureaucrat grade "<< B.getGrade();
    return COUT;
}

int main()
{
    try
    {
        Bureaucrat alami("alami", 136);
        PresidentialPardonForm google("google");
        RobotomyRequestForm amazon("amazone");
        ShrubberyCreationForm apple("apple");
        
        
        // google.beSigned(alami);
        // google.execute(alami);
        
        // amazon.beSigned(alami);
        // amazon.execute(alami);
        Intern intern; intern.makeForm("PresidentialPardonForm","dsff");
        //apple.beSigned(alami);
        //apple.execute(alami);
  
    }
    catch (const std::exception& myCustomException) //! the catch call destructor for destroy the object 
    {
        std::cout << "alami "  << myCustomException.what() << std::endl;
    }
    return 0;
}