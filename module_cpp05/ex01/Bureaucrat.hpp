/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:07:07 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/19 14:16:29 by sultan           ###   ########.fr       */
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
    int getGrade()const;
    std:: string getName()const;
    void increment();
    void decriment();
   // Bureaucrat operator=( const Bureaucrat &B);
};
std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B);