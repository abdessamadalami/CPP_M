/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:21:15 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/21 15:24:38 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
class Intern
{
    public:
        Intern();
       Form* makeForm(std:: string name, std:: string target);
        ~Intern();
        
};
#endif