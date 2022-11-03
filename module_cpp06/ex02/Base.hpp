/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:15:58 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/03 20:13:57 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
class Base
{
    public:
        Base(){}
        virtual ~Base() {} // why virtual 
        // virtual void prin_t(){std:: cout << "this is A \n";}
};

class A :public Base{};
class B :public Base{};
class C :public Base {};

Base * generate(void);
void identify(Base* p);
#endif