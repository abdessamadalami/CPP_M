/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:50:54 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/18 12:54:49 by ael-oual         ###   ########.fr       */
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
    virtual Animal& operator=(const Animal &t);
    virtual ~Animal();
    Animal(const Animal &a);
    std:: string getType()const;
    virtual void makeSound()const;
};


#endif