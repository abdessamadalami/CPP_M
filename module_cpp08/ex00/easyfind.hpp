/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:27:57 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/07 15:09:08 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T> 
void easyfind(T Tem, int nbr)
{
    std::string exp = "Element not found.\n";
     std::vector<int>::iterator ptr = std::find(begin(Tem), end(Tem), nbr);;
    if (ptr != Tem.end())
    {
        std::cout <<"Element " << nbr <<" Index : " ;
        std::cout << ptr - Tem.begin() << std::endl ;
    }
    else
        throw(exp);
}

#endif
