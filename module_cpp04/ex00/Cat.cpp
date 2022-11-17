/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/17 11:50:04 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat():Animal("Cat")
{
    std:: cout << "cat constructor called\n";
    // type = "Cat";
}

Cat::Cat(const Cat &t)
{
    std:: cout << "cat copy constructor  calld"<< std::endl;
    *this = t;
}

Cat& Cat::operator=(const Cat &t)
{
    std:: cout << "cat assignemt oprator calld";
    this->type = t.type;
    return *this;
}

void Cat::makeSound() const
{
    std:: cout << "meeew sound 🐱🐱🐱🐱🐱🐱🐱🐱🐱 " << std::endl;
}

std::string Cat::getType()
{
    return this->type;
}

Cat::~Cat()
{
     std::cout << "cat destructor called\n";
}