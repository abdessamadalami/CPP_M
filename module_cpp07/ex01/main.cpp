/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:27:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/04 15:25:40 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "iter.hpp"

int main()
{
    int arr[5] = {1,2,3,4,5};
    std:: string S[6] = {"a", "b" , "c" , "d","eee"};
    double d[5] = {1.0/4,2.0/4,3.0/4,4.0/4,5.0/4};
    std::cout << "this int array " << std::endl;
    iter(arr,5,fun_c);
    std::cout << "this string array " << std::endl;
    iter(S,5,fun_c);
     std::cout << "this double array " << std::endl;
    iter(d,5,fun_c);
}