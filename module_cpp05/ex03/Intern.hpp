/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:21:15 by ael-oual          #+#    #+#             */
/*   Updated: 2022/12/14 16:39:09 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "exception.hpp"

class Intern
{
    public:
       Intern();
       Intern(const Intern &old_obj);
       Intern &operator= (const Intern &old_obj);
       Form* makeForm(std::string name, std::string target);
       static s_GradeTooHighException notfound;
       ~Intern();
};
#endif

