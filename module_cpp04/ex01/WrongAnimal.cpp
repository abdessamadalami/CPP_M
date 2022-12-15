/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:05:17 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/18 11:07:10 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
   std:: cout << "Wronganimal default constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string Type):type(Type)
{
   std:: cout << "Wronganimal constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old_obj)
{
   std::cout << "copy WrongAnimal constructor called"<< std::endl ;
   this->type = old_obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &t)
{
   std::cout << "assignment WrongAnimal operator called"<< std::endl;
   this->type = t.type;
   return *this;
}

std::string WrongAnimal::getType()const
{
   return type;
}

void WrongAnimal::makeSound()const
{
   std:: cout << " 👾 👾 👾 👾 sound"<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
   std:: cout << "WrongAnimal destructor called"<< std::endl;
}