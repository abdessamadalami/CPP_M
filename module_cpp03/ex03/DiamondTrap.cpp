/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:17:52 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/14 18:14:41 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#include "DiamondTrap.hpp"
DiamondTrap :: DiamondTrap (std::string Name)
{
     Hit_points = FragTrap::Hit_points;
     this->name = Name;
     std::cout <<  "contructor  DiamondTrap  " << std::endl;
}

DiamondTrap::DiamondTrap()
{
   std::cout <<  "default contructor DiamondTrap " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std:: cout << "destructor DiamondTrap " << std::endl;
}

void DiamondTrap:: whoAmI()
{
    std :: cout << "this" << name << "now in Gate keeper mode" << std::endl;
}

#endif