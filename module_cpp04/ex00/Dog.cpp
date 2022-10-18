/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:05:17 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/17 16:53:58 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std:: cout << "dog constructor called\n";
}

Dog& Dog:: operator=(const Dog &t)
{
    std:: cout << "Assignment operator called" ;
    this->type = t.type;
    return *this;
}

void Dog::makeSound()const
{
    std:: cout << "bark sound 🐶🐶🐶🐶🐶🐶🐶🐶 \n";
}

Dog::~Dog()
{
     std:: cout << "dog destructor called\n";
}