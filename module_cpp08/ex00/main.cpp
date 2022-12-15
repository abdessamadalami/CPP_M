/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:27:32 by ael-oual          #+#    #+#             */
/*   Updated: 2022/12/05 12:34:47 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    int arr[] = { 10, 20, 30,-1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::vector<int> vect(arr, arr + n);
    try
    {
        easyfind(vect, -1);
       // easyfind(alami, 97);
    }
    catch(std::string e)
    {
        std::cerr << e;
    }
}