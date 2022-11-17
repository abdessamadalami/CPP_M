/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:29:22 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/17 11:50:42 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain(/* args */)
{
    std::cout << "Brain constructor called"<< std::endl;
}

Brain::Brain(const Brain& a)
{
    std:: cout << "Brain copy constructor called"<< std::endl;
    *this = a;
}

Brain& Brain::operator=(const Brain &t)
{
    std:: cout << "Assignment Brain operator called"<< std::endl ;
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = t.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std:: cout << "Brain destructor called "<< std::endl;
}