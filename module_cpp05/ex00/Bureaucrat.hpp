/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:07:07 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/23 14:19:22 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class  GradeTooHighException:public std::exception
{
    public: 
        const char * what() const throw()
        {
            return "Grade Too High Exception";
        }
};

class  GradeTooLowException : public std::exception
{
    public: 
        const char * what() const throw()
        {
            return "Grade Too Low Exception";
        }  
};

class Bureaucrat
{
private:
    const std:: string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);   
    Bureaucrat( const Bureaucrat &B);
    Bureaucrat& operator=( const Bureaucrat &B);
    int getGrade()const;
    std:: string getName()const;
    void increment();
    void decriment();
    ~Bureaucrat();
    static GradeTooLowException GradeTooLow_Exception;
    static GradeTooHighException GradeTooHigh_Exception;
};
std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B);