/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:05:17 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/17 13:17:52 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    std:: cout << "dog default constructor called\n";
    this->type = "Dog";
}

Dog& Dog:: operator=(const Dog &t)
{
    std:: cout << "Assignment operator called" ;
    this->type = t.type;
    return *this;
}

void Dog::makeSound()
{
    std:: cout << "dog sound \n";
}

std::string Dog:: getType()
{
    return this->type;
}

Dog::~Dog()
{
     std:: cout << "dog destructor called\n";
}