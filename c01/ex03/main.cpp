/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:58:29 by sultan            #+#    #+#             */
/*   Updated: 2022/09/22 19:03:07 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//#include "Weapon.hpp"
#include "HumanA.hpp"
// #include "HumanB.hpp"

int main()
{
    
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    
// {
//     Weapon club = Weapon("crude spiked club");
//     HumanB jim("Jim");
//     jim.setWeapon(club);
//     jim.attack();
//     club.setType("some other type of club");
//     jim.attack();
// }
return 0;
}