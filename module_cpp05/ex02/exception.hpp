/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:47:26 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 10:51:22 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #ifndef EXPTIONS_HPP
    #define EXPTIONS_HPP
    #include <iostream>
   
   class  GradeTooHighException:public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "Grade Too High Exception";
            }
    };

    class  GradeTooLowException:public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "Grade Too Low Exception";
            }  
    };
    class  GradeTooHighException_form:public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "grade_req_to_sign ||  grade_req_to_execut Too High Exception";
            }
    };
    class  GradeTooLowException_form:public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "grade_req_to_sign || grade_req_to_execut Too Low Exception";
            }  
    };

      class  NOT_S:public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "form not signed ";
            }  
    };
    
    class  NOT_EXC:public std:: exception
    {
        public: 
            const char * what() const throw()
            {
                return "form not heve the req gradeto excute this Form ";
            }  
    };
    #endif