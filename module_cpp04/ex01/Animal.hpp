/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:50:54 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/16 10:43:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type; 
public:
    Animal();
    Animal(std::string);
    Animal(const Animal &a);
    Animal& operator=(const Animal &t);
    std:: string getType()const;
    virtual void makeSound()const;
    virtual ~Animal();
};


#endif