/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:33 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 16:06:07 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name, 100,100,30) //! mablanxch
{
    std:: cout << "FragTrap constructor " << std::endl;
    Hit_points = 100 ;
    Energy_point = 100;
    Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std:: cout << "FragTrap destructor " << std::endl;
}

FragTrap::FragTrap()
{
    std:: cout << "FragTrap default  constructor " << std::endl;
    name = "default";
    Hit_points = 100 ;
    Energy_point = 100;
    Attack_damage = 30;
}


void FragTrap ::highFivesGuys()
{
    std:: cout << " high fives " << std::endl;
}
