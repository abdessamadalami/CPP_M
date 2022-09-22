/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:52:10 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/21 15:37:31 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *alami;
    alami = new Zombie[N];
    for(int i=0; i<N; i++)
    {
        alami[i].set_name("abdessamd");
    }
    return (alami);
}