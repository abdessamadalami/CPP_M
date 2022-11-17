/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:54 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/17 11:50:10 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat (const Cat &a);
        Cat&operator=(const Cat &t);
        
        void makeSound() const;
        std::string getType();
        ~Cat();
};

#endif