/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:29:49 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/04 11:25:25 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template<typename T> T min(T a, T b)
{
     if (a > b) 
        return (b);
    return (a); 
}

template<typename T> T max(T a, T b)
{
     if (a > b)
        return (a);
    return (b); 
}

template<typename Ta>
void swap(Ta& a, Ta& b)
{
    Ta c;

    c = a;
    a = b;
    b = c;
}

#endif