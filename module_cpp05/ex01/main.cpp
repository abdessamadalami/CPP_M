/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:39:05 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 19:44:21 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B) //! const object need const member function for gurante to stay constan 
{
    COUT << B.getName() << "," << "Bureaucrat grade "<< B.getGrade();
    return COUT;
}

std::ostream& operator<< (std:: ostream& COUT, const Form& B) //! const object need const member function for gurante to stay constan 
{
    COUT << B.get_name() << "," << " index : " << B.get_index() ;
    return COUT;
}
int main()
{
    try
    {
        Bureaucrat alami("alami", 16);
        Form goole("google",1, 14,12);
        std::cout << "grade req =? " << goole.get_grade_req_to_sign() << std::endl;
        goole.beSigned(alami);
        alami.signForm(goole);
        // std::cout << "alami";
        // alami.increment();
        // alami.increment();
    }
    catch (const std::exception& myCustomException) //! the catch call destructor for destroy the object 
    {
        std::cout << "exception: " << myCustomException.what() << std::endl;
    }
    return 0;
}