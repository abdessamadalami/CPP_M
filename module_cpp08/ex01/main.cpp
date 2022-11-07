/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:27:32 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/07 17:21:32 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include "Span.hpp"



int main()
{
    Span span(0);
try
{
    span.addNumber(2);
    span.addNumber(3);
}
catch(std::string e)
{
    std:: cout<< e << std::endl;
}
    
}