/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:07:07 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/20 12:25:11 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Bureaucrat
{
    class  GradeTooHighException : public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "Grade Too High Exception";
            }
    };

    class  GradeTooLowException : public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "Grade Too Low Exception";
            }  
    };

private:
    const std:: string name;
    int grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(std::string name, int grade);   
    ~Bureaucrat();
    int getGrade()const;
    std:: string getName()const;
    void increment();
    void decriment();
    Bureaucrat& operator=( const Bureaucrat &B);
};
std::ostream& operator<< (std:: ostream& COUT, const Bureaucrat& B);