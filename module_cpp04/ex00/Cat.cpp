/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/17 13:45:03 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(/* args */):type("cat")
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

void Cat:: makeSound()
{
    std:: cout << "Cat sound meeew \n";
}

std::string Cat:: getType()
{
    return this->type;
}