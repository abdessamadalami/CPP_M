/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:08:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/11 09:53:54 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *abdessamd;
    abdessamd = newZombie("zombie");
    abdessamd->announs();
    randomChump("alami");
    delete abdessamd; 
}