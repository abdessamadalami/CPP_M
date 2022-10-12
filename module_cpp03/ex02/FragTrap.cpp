/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:33 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 15:17:33 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ScavTrap(name) //! mablanxch
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
//  FragTrap  FragTrap ::operator = (const FragTrap& t)
//  {
//     this->name = t.name;
//     this->Hit_points = t.Hit_points;
//     this->Energy_point = t.Energy_point;
//     this->Attack_damage = t.Attack_damage;
//     std:: cout << "Assignment operator called " << std::endl;
//     return *this;
//  }