/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:27:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/07 10:19:51 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
 #include "Array.hpp"


int main()
{
    Array<int>array1(10);
    for (size_t i = 0; i < 10; i++)
        array1[i] = i << 8;
    // try
    // {
    //     for (size_t i = 0; i < 10; i++)
    //     {
    //         std::cout << u[i] << std:: endl;
    //         std:: cout << u[100];
    //     }
    // }
    // catch(const std::string& s)
    // {
    //     std::cout << "exeption " << s ;
    // }
    /// -------------------------------------------------
    Array<int>  array2(10);
     for (size_t i = 0; i < 10; i++)
        array2[i] = i << 5;
    std::cout<< "alami \n";
    array2 = array1;
      for (size_t i = 0; i < 10; i++)
        std::cout << array2[i]  << std::endl;






    
// std::cout<< "-------double T-------\n";
//     Array<double>double_array(10);
//     for (size_t i = 0; i < 10; i++)
//         double_array[i] = 1.0/9 * i;
//     for (size_t i = 0; i < 10; i++)
//         std::cout << double_array[i] << std:: endl;
//     try
//     {
//         std:: cout << double_array[100];
//     }
//     catch(const std::string& s)
//     {
//         std::cout << "exeption " << s ;
//     }
// std::cout<< "-------String T-------\n";
//     Array<std::string>string_array(10);
//     for (size_t i = 0; i < 10; i++)
//         string_array[i] = "alami";
//     for (size_t i = 0; i < 10; i++)
//         std::cout << string_array[i] << std:: endl;
//     try
//     {
//         std:: cout << string_array[100];
//     }
//     catch(const std::string& s)
//     {
//         std::cout << "exeption " << s ;
//     }    
}