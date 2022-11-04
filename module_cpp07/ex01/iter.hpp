/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:38:15 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/04 16:14:08 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T> 
void fun_c(T a)
{
    std:: cout << "in fun_c " << a << std::endl;
}

template<typename T> 
void iter(T *array, size_t lenght, void fun_c(T))
{
    for (size_t i = 0; i < lenght; i++)
    {
        fun_c(array[i]);
    }
    
}