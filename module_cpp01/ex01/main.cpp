/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:08:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/02 18:29:44 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void Zo()
// {
//      Zombie *abdessamd;
     
//     abdessamd = zombieHorde(7, "zombie");
//     for (int i = 0; i < 7; i++)
//        abdessamd[i].announs();
// }

int main()
{
    Zombie *abdessamd;

    abdessamd = zombieHorde(7, "zombie");
    delete[] abdessamd;
}