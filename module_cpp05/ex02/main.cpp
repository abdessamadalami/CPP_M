/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:39:05 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/20 17:36:32 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"


std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B) //! const object need const member function for gurante to stay constan 
{
    COUT << B.getName() << "," << "Bureaucrat grade "<< B.getGrade();
    return COUT;
}

int main()
{
    try
    {
        Bureaucrat alami("alami", 140);
        // Form goole("google", 0, 2,12);
        // alami.signForm(goole);
       // std::cout << "alami";
        // alami.increment();
        // alami.increment();
        PresidentialPardonForm google("google");
        google.execute(alami);
    }
    catch (const std::exception& myCustomException) //! the catch call destructor for destroy the object 
    {
        std::cout << "alami "  << myCustomException.what() << std::endl;
    }
    return 0;
}