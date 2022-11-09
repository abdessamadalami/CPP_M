/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:53:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/08 15:46:00 by ael-oual         ###   ########.fr       */
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
    // std::cout << "constructor called \n";
}

Span::Span(const Span& old_obj)
{
    // std::cout << "copy constructor called \n";
    *this = old_obj;
}

Span Span::operator=(const Span& old_obj)
{
    this->N = old_obj.N;
    this->lst = old_obj.lst; 
    return *this;
}

void Span:: addNumber(int nbr)
{
    std::string ex = " out of range \n";
    if (this->lst.size() < (size_t)N)
    {
        this->lst.push_back(nbr);
    }
    else
        throw(ex);
}

int Span:: shortestSpan()
{
    if (! (std::is_sorted(std::begin(this->lst),std::end(this->lst))))
        std::sort(std::begin(this->lst),std::end(this->lst));
    int defrence = this->lst[1] - this->lst[0];
    for (size_t i = 1; i < lst.size() - 1; i++)
    {
        if ( (lst[i + 1] - lst[i]) < defrence )
            defrence = lst[i + 1] - lst[i];
    }
    return defrence;
}

int Span :: longestSpan()
{
    int defrence = *(std::max_element(begin(this->lst), end(this->lst))) -  *(std::min_element(begin(this->lst), end(this->lst)));
    return defrence;
}

Span::~Span()
{
    // std::cout << "destructor called \n";
}
