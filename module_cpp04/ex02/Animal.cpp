/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:52:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/18 13:02:00 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"


Animal::Animal(/* args */)
{
   std:: cout << "animal default constructor called \n";
}

Animal::Animal(std::string Type):type(Type)
{
   std:: cout << "animal constructor called \n";
}

Animal::~Animal()
{
   std:: cout << "Animal destructor called \n";

}

std::string Animal:: getType()const
{
   return type;
}

Animal& Animal:: operator=(const Animal &t)
{
   std:: cout << "assignment Animal operator called \n";
    this->type = t.type;
    return *this;
}


Animal::Animal(const Animal& a)
{
 std:: cout << "copy Animal operator called _" << a.type <<"_\n" ;
   
    this->type = a.type;
}

// void Animal::makeSound()const
// {
//     std:: cout << " 👾 👾 👾 👾 sound \n";
// }