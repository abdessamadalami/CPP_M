/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:53:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/07 17:22:59 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor" << std::endl;
    this->N = 0;
    lst.reserve(0);
}

Span::Span(unsigned int N)
{
    this->N = N;
    std::cout << "constructor called \n";
}

void Span:: addNumber(int nbr)
{
    std::string ex = " out of rabge \n";
    if (this->lst.size() < (size_t)N)
    {
        std::cout << this->lst.size() << std::endl;
        this->lst.push_back(nbr);
    }
    else
        throw(ex);
}

int shortestSpan()
{
 return 1;   
}

int longestSpan()
{
    return 0;
}

Span::~Span()
{
    
}