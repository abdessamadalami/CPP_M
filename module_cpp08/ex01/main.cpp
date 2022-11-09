/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:27:32 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/08 15:45:25 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "Span.hpp"
#include <algorithm>
#include <cmath>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
//     Span span(5);
// try
// {
//     span.addNumber(2);
//     span.addNumber(3);
//     span.addNumber(12);
//     span.addNumber(31);
//     span.addNumber(2);
//     std:: cout<< " the short diffrence "<< span.shortestSpan() << std::endl;
//     std:: cout << "the long diffrence " << span.longestSpan() << std::endl;  
// }
// catch(std::string e)
// {
//     std:: cout<< e << std::endl;
// }