/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:07:07 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/19 12:03:36 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Bureaucrat
{
private:
    const std:: string name;
    int grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(std::string name, int grade);   
    ~Bureaucrat();
    void GradeTooHighException();
    void GradeTooLowException();
    int getGrade();
    std:: string getName();
    void increment();
    void decriment();
   // Bureaucrat operator=( const Bureaucrat &B);
};
std::ostream operator<< (std:: ostream& COUT, const Bureaucrat& B);