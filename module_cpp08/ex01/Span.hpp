/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:26:11 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/08 15:25:14 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
class Span
{
    private:
        int N;
        std::vector<int>lst;
    public:
        Span();
        Span(unsigned int);
        void addNumber(int nbr);
        Span(const Span& old_obj);
        Span operator=(const Span& old_obj);
        int shortestSpan();
        int longestSpan();
        ~Span();
};

#endif