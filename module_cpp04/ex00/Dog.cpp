/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:05:17 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/16 15:36:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std:: cout << "dog constructor called\n";
}

Dog::Dog(const Dog &obj)
{
    std:: cout << "Dog copy constructor called" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog &t)
{
    std:: cout << "Assignment operator called" ;
    this->type = t.type;
    return *this;
}

void Dog::makeSound()const
{
    std:: cout << "bark sound 🐶🐶🐶🐶🐶🐶🐶🐶" << std::endl;
}

Dog::~Dog()
{
     std:: cout << "dog destructor called" << std::endl;
}