/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:03:42 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/18 11:12:20 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type; 
public:
    WrongAnimal();
    WrongAnimal(std::string);
    WrongAnimal(const WrongAnimal &old_obj);
    WrongAnimal& operator=(const WrongAnimal &t);
    std:: string getType()const;
    void makeSound()const;
    virtual ~WrongAnimal();
};


#endif