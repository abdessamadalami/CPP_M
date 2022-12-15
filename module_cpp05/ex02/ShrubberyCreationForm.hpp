/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:21:11 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 16:48:07 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHUR_HPP
#define SHUR_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std:: string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& old_obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& old_obj);
        void execute(Bureaucrat const & executor);
        static NOT_S not_signed;
        static NOT_EXC not_excute;
        ~ShrubberyCreationForm();
};

#endif