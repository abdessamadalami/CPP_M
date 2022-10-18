/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:29:22 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/18 12:47:59 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain(/* args */)
{
    std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
    std:: cout << "Brain destructor called \n";
}

Brain& Brain:: operator=(const Brain &t)
{
    std:: cout << "Assignment Brain operator called\n" ;
   //*this = t;
    for (size_t i = 0; i < 100; i++)
        this->ideas[0] = t.ideas[0];
    return *this;
}
Brain::Brain(const Brain& a)
{
    std:: cout << "Brain copy constructor called\n";
    for (size_t i = 0; i < 100; i++)
        this->ideas[0] = a.ideas[0];
}