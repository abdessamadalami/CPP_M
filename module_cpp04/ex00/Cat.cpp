/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/17 16:52:16 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() :Animal("Cat")
{
    std:: cout << "cat default constructor called\n";
    type = "Cat";
}

Cat::~Cat()
{
     std:: cout << "cat destructor called\n";
}

Cat& Cat:: operator=(const Cat &t)
{
    std:: cout << "cat assignemt oprator calld";
    this->type = t.type;
    return *this;
}

void Cat:: makeSound() const
{
    std:: cout << "meeew sound  🐱🐱🐱🐱🐱🐱🐱🐱🐱 \n";
}

std::string Cat:: getType()
{
    return this->type;
}