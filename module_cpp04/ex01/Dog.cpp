/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:05:17 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/17 11:48:39 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "dog constructor called\n";
    brain = new Brain();
}

Dog::Dog(const Dog& a)
{
    std::cout << "copy dog constructor called\n";   
    brain = new Brain();
    this->type = a.type;
    *brain = *a.brain;
}

Dog& Dog::operator=(const Dog &old_obj)
{
    std:: cout << "Assignment Dog operator called"<<std::endl;  
    this->type = old_obj.type;
    *brain = *old_obj.brain;
    return *this;
}

void Dog::makeSound()const
{
    std:: cout << "bark sound 🐶🐶🐶🐶🐶🐶🐶🐶 \n";
}

std::string Dog::getType()
{
    return this->type;
}

void Dog::set_null()
{
    this->brain = NULL;
}

Dog::~Dog()
{
    delete brain;
    std:: cout << "dog destructor called\n";
}