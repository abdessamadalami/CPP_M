/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:36:46 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/15 19:28:56 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(std::string Name):ClapTrap(Name, 100, 50, 30)
{
     std::cout <<  "contructor  ScavTrap  " << std::endl;
}

ScavTrap::ScavTrap()
{
   std::cout <<  "default contructor ScavTrap " << std::endl;
    Hit_points = 100;
    Energy_point = 50;
    Attack_damage = 30;

}
ScavTrap::~ScavTrap()
{
    std:: cout << "destructor ScavTrap " << std::endl;
}

void ScavTrap:: guardGate()
{
    std :: cout << "this" << name << "now in Gate keeper mode" << std::endl;
}


void ScavTrap:: attack(const std::string& target) // just read 
{
    std::cout << "ScavTrap " << name << " attacks " << target <<  " causing " << Attack_damage << " points of damage!" << std:: endl;
    Energy_point--;
}

ScavTrap& ScavTrap:: operator=(const ScavTrap &t)
{
    this->name = t.name;
    this->Attack_damage = t.Attack_damage;
    this->Energy_point = t.Energy_point;
    this->Hit_points = t.Hit_points;
    return *this;
}
