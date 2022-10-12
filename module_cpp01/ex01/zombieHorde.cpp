/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:52:10 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/02 18:30:40 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *alami;
    alami = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        alami[i].set_name(name);
        alami[i].announs();
    }
    return (alami);
}