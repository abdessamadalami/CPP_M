/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:05:17 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/18 11:50:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std:: cout << "dog constructor called\n";
    brain = new Brain();
    
}

Dog::Dog(const Dog& a)
{
    std:: cout << "dog copy constructor called\n";
    type = a.type;
    brain = new Brain();
    *brain = *a.brain;
}

Dog& Dog:: operator=(const Dog &t)
{
    std:: cout << "Assignment Dog operator called" ;
    this->type = t.type;
    brain = new Brain();
    *brain = *t.brain;
    return *this;
}

void Dog::makeSound()const
{
    std:: cout << "bark sound 🐶🐶🐶🐶🐶🐶🐶🐶 \n";
}

Dog::~Dog()
{
     std:: cout << "dog destructor called\n";
     delete brain;
}

std::string Dog:: getType()
{
    return this->type;
}

//the copy constructor called when one object initialize  other object