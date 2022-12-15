/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:54:40 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 14:55:45 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std:: string target);
        RobotomyRequestForm(const RobotomyRequestForm& old_obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& old_obj);
        void execute(Bureaucrat const & executor);
        static NOT_S not_signed;
        static NOT_EXC not_excute;
        ~RobotomyRequestForm();
};

#endif