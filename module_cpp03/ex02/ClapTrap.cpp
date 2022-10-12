/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:35 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 16:07:29 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):name(name),Hit_points(10),Energy_point(10),Attack_damage(0)
{
    std::cout << "ClapTrap  constructor\n";
}

void ClapTrap:: attack(const std::string& target)
{
    std::cout << "ClapTrap " << name << " attacks " << target <<  " causing " << Attack_damage << " points of damage!" << std:: endl;
    Energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take damage" << amount << std:: endl;
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
    std::cout << "default constructor ClapTrap" << std::endl;
    name = "default";
    Hit_points = 10 ;
    Energy_point = 10;
    Attack_damage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& t)
 {
    this->name = t.name;
    this->Hit_points = t.Hit_points;
    this->Energy_point = t.Energy_point;
    this->Attack_damage = t.Attack_damage;
    std:: cout << "Assignment operator called "<< t.name << std::endl;
    return *this;
 }

ClapTrap::~ClapTrap()
{
    std::cout << " ClapTrap destructor" << std:: endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int Hit_points, unsigned int Energy_point, unsigned int Attack_damage)
   :name(name), Hit_points(Hit_points), Energy_point(Energy_point), Attack_damage(Attack_damage)
{
    std::cout << "constructor ClapTrap" << std::endl;
}