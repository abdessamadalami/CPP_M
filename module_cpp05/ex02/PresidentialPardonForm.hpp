/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:05:06 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 14:53:48 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "exception.hpp"
class Bureaucrat;
class PresidentialPardonForm:public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& old_obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& old_obj);
        void execute(const Bureaucrat& executor);
        static NOT_S not_signed;
        static NOT_EXC not_excute;
        ~PresidentialPardonForm();
};

#endif