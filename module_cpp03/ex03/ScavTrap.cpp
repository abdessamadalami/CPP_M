/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:36:46 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/15 12:09:49 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("Default", 100, 50, 30)//what tfc is: this inishialise list not happen
{
    std::cout << "ScavTrap: "<< this->name << " default contructor" << std::endl;
}

ScavTrap::ScavTrap(std::string Name):ClapTrap(Name, 100, 50, 30)
{
    std::cout << "ScavTrap: "<< this->name << " contructor called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout<< "ScavTrap: copy constructor called " << std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &t)
{
    std:: cout << "ScavTrap: assingment operator" << std::endl;
    this->name = t.name;
    this->Attack_damage = t.Attack_damage;
    this->Energy_point = t.Energy_point;
    this->Hit_points = t.Hit_points;
    return *this;
}

void ScavTrap:: guardGate()
{
     if (this->Energy_point == 0)
         std:: cout << "this: " << this->name << "can't be in a Gatekeeper mode" << std::endl;
    else
        std :: cout << "this ScavTrap: " << this->name << "now in Gate keeper mode" << std::endl;
}

void ScavTrap:: attack(const std::string& target) // just read 
{
    if (this ->Energy_point == 0)
    {
        std::cout<< "ScavTrap: "<< this->name << ": My Energy_point is:" << this->Energy_point << " i am D3IF" << std::endl;
        return ; 
    }
    std::cout << "ScavTrap: " << name << " attacks " << target <<  " causing " << Attack_damage << " points of damage!" << std:: endl;
    Energy_point--;
}

ScavTrap::~ScavTrap()
{
    std:: cout << "ScavTrap: destructor ScavTrap " << std::endl;
}