/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:52:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/17 11:50:33 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"


Animal::Animal(/* args */)
{
   std:: cout << "animal default constructor called"<< std::endl;
}

Animal::Animal(std::string Type):type(Type)
{
   std:: cout << "animal constructor called"<< std::endl;
}

Animal::Animal(const Animal& a)
{
   std:: cout << "copy Animal operator called" << std::endl;
   this->type = a.type;
}

Animal& Animal::operator=(const Animal &t)
{
   std:: cout << "assignment Animal operator called"<< std::endl;
   this->type = t.type;
   return *this;
}

std::string Animal::getType()const
{
   return type;
}

Animal::~Animal()
{
   std:: cout << "Animal destructor called " << std::endl;
}

// void Animal::makeSound()const
// {
//     std:: cout << " 👾 👾 👾 👾 sound \n";
// }