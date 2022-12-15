/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:27:57 by ael-oual          #+#    #+#             */
/*   Updated: 2022/12/05 12:40:58 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T> 
void easyfind(T Tem, int nbr)
{
    typename T::iterator iter;
    std::string exp = "Element not found.\n";
    iter = std::find(begin(Tem), end(Tem), nbr);
    if (iter != Tem.end())
    {
        std::cout <<"Element " << nbr <<" Index : " ;
        std::cout << std::distance(Tem.begin(), iter) << std::endl ;
    }
    else
        throw(exp);
}

#endif
