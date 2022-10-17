/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:17:52 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/15 18:35:17 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap (std::string Name) : ClapTrap(Name + "__clap_name")
{
    this->name = Name;
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_point = ScavTrap ::Energy_point;
    this->Attack_damage = FragTrap ::Attack_damage;
     std::cout <<  "contructor  DiamondTrap  " << this->Attack_damage<< std::endl;
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
    
    std :: cout << "this"  << name << "now in Gate keeper mode "<<ClapTrap::name << std::endl;
}

void DiamondTrap:: attack(const std::string& target) // just read 
{
   ScavTrap::attack(target);
}

DiamondTrap& DiamondTrap:: operator= (const DiamondTrap &t)
{
    this->name = t.name;
    this->Attack_damage = t.Attack_damage;
    this->Energy_point = t.Energy_point;
    this->Hit_points = t.Hit_points;
    return *this;
}

#endif