/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:36:46 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/14 19:06:00 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(std::string Name):ClapTrap(Name, 100, 50, 20)
{
    std::cout << "ClapTrap constructor" << std::endl;
}

ScavTrap::ScavTrap()
{
   std::cout <<  "default contructor ScavTrap " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std:: cout << "destructor ScavTrap " << std::endl;
}

void ScavTrap:: guardGate()
{
    std :: cout << "this" << name << "now in Gate keeper mode" << std::endl;
}

ScavTrap& ScavTrap:: operator =(const ScavTrap& t) // assignement
{
    std::cout << "Assignment operator called " << name << std :: endl;
    this->name = t.name;
    this->Hit_points = t.Hit_points;
    this->Energy_point = t.Energy_point;
    this->Attack_damage = t.Attack_damage;
    return *this;
}

void ScavTrap:: attack(const std::string& target) // just read 
{
    std::cout << "ScavTrap " << name << " attacks " << target <<  " causing " << Attack_damage << " points of damage!" << std:: endl;
    Energy_point--;
}