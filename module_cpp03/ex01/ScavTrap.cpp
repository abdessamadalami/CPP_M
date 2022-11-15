/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:36:46 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/14 15:48:10 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(std::string Name):ClapTrap(Name, 100, 50, 20)
{
    std::cout << "ScavTrap: " << this->name <<  " constructor called " << std::endl;
}

ScavTrap::ScavTrap()
{
   std::cout <<  "ScavTrap: default contructor  " << std::endl;
    Hit_points = 100;
    Energy_point = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj)
{
    *this = old_obj;
    std:: cout << "ScavTrap: Copy constructor called\n";
}

ScavTrap& ScavTrap::operator =(const ScavTrap& obj) // assignement
{
    std::cout << "ScavTrap: Assignment operator called " << name << std:: endl;
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_point = obj.Energy_point;
    this->Attack_damage = obj.Attack_damage;
    return *this;
}

void ScavTrap:: guardGate()
{
    if (this->Energy_point == 0)
         std:: cout << "this: " << name << "can't be in a Gatekeeper mode" << std::endl;
    else
        std:: cout << "this: " << name << "now in Gate keeper mode" << std::endl;
}

void ScavTrap:: attack(const std::string& target) // just read 
{
     if (this->Energy_point == 0)
    {
         std::cout<< "ScavTrap: " << this->name << ": My Energy_point is:" << this->Energy_point << " i am D3IF" << std::endl;
        return ; 
    }
    std::cout << "ScavTrap: " << name << " attacks " << target <<  " causing " << Attack_damage << " points of damage! " <<  Energy_point << std:: endl;
    Energy_point--;
}

ScavTrap::~ScavTrap()
{
    std:: cout << "ScavTrap: " << this->name << " destructor" << std::endl;
}
