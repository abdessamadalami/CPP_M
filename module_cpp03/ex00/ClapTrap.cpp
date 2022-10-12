/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:35 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 08:13:09 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):name(name),Hit_points(10),Energy_point(10),Attack_damage(0)
{
    std::cout << "constructor \n";
}

void ClapTrap:: attack(const std::string& target)
{
    std::cout << "ClapTrap" << name << "attacks" << target <<  "causing" << Attack_damage << "points of damage!" << std:: endl;
    Energy_point--;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap" << name << "take damage" << amount << std:: endl;
    Hit_points-=amount;
}

void ClapTrap:: beRepaired(unsigned int amount)
{
std::cout << "ClapTrap" << name << "repair" <<  std:: endl;
    Hit_points+=amount;
    Energy_point--;
}

ClapTrap::ClapTrap()
{
    std::cout << "default constructor " << std:: endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called " << std:: endl;
}