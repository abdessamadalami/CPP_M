/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/18 11:04:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"
#include"WrongAnimal.hpp"


WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
   std:: cout << "cat constructor called"<< std::endl;
   brain = new Brain();
}

WrongCat::WrongCat(const WrongCat& old_obj)
{
    std::cout<< " copy WrongCat constructor called "<< std::endl;
    this->brain = new Brain();
    this->type = old_obj.type;
    *brain = *old_obj.brain;
}

WrongCat& WrongCat::operator=(const WrongCat &old_obj)
{
    std:: cout << "assignemt WrongCat oprator calld"<< std::endl;
    this->type = old_obj.type;
    *brain = *old_obj.brain;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "meeew sound  🐱🐱🐱🐱🐱🐱🐱🐱🐱 "<< std::endl;
}

std::string WrongCat::getType()
{
    return this->type;
}

WrongCat::~WrongCat()
{
    delete brain;
    std:: cout << "Wrongcat destructor called" << std::endl;
}