/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:03:42 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/17 11:50:19 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
public:
    Dog();
    Dog(const Dog &obj);
    Dog& operator=(const Dog &t);
    void makeSound()const;
    std::string getType();
    ~Dog();
};
#endif