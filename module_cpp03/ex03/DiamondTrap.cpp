/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:17:52 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/15 11:55:51 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (std::string Name):ClapTrap(Name + "__clap_name") //why
{
    this->name = Name;
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_point = ScavTrap::Energy_point;
    this->Attack_damage = FragTrap::Attack_damage;
    std::cout <<  "DiamondTrap: "<< this->name <<  " contructor called" << std::endl;
}

DiamondTrap::DiamondTrap()
{
   std::cout <<  "DiamondTrap: default contructor" << std::endl;
}

void DiamondTrap:: whoAmI()
{
    std::cout << " DiamondTrap: this "  << name << " now in Gate keeper mode "<< ClapTrap::name << std::endl;
}

void DiamondTrap:: attack(const std::string& target) // just read 
{
   ScavTrap::attack(target);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &t)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    this->name = t.name;
    this->Attack_damage = t.Attack_damage;
    this->Energy_point = t.Energy_point;
    this->Hit_points = t.Hit_points;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: destructor called " << std::endl;
}

#endif