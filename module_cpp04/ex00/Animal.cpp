/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:52:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/16 13:24:48 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"


Animal::Animal()
{
   std:: cout << "animal default constructor called \n";
}

Animal::Animal(std::string Type):type(Type)
{
   std:: cout << "animal constructor called \n";
}

Animal::Animal(const Animal &obj)
{
   std:: cout << "Animal copy construcor called" << std::endl;
   *this = obj;
}

std::string Animal::getType()const
{
   return type;
}

Animal& Animal::operator=(const Animal &t)
{
   std:: cout << "assignment operator called" << std::endl;;
   this->type = t.type;
   return *this;
}

void Animal::makeSound()const
{
   std:: cout << " 👾 👾 👾 👾 Animal sound" << std::endl;
}

Animal::~Animal()
{
   std:: cout << "Animal destructor called" << std::endl;
}