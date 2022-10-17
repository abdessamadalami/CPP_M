/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:52:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/17 13:36:48 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"


Animal::Animal(/* args */)
{
   std:: cout << "animal default constructor called \n";
}

Animal::~Animal()
{
   std:: cout << "Animal destructor called \n";

}

std::string Animal:: getType()
{
   return type;
}

Animal& Animal:: operator=(const Animal &t)
{
   std:: cout << "assignment operator called \n";
    this->type = t.type;
    return *this;
}