/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/18 12:33:53 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std:: cout << "cat constructor called\n";
   brain = new Brain();
    std:: cout << "cat bran address " << brain << std::endl;
}

Cat::Cat(const Cat& a)
{
    
    std::cout<< " copy Cat constructor called \n";
    type = a.type;
    brain = new Brain();
    // std:: cout << brain << "\n";
    *brain = *a.brain;
}

Cat::~Cat()
{
     std:: cout << "cat destructor called " << brain << " \n" ;
     if (brain != NULL)
        delete brain;
}

Cat& Cat:: operator=(const Cat &t)
{
    std:: cout << "cat assignemt oprator calld";
    this->type = t.type;
    brain = new Brain();
    *brain = *t.brain;
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