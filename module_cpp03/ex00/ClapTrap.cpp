/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:35 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/15 21:03:40 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):name(name),Hit_points(10),Energy_point(10),Attack_damage(0)
{

    std::cout << "constructor \n";
}

void ClapTrap:: attack(const std::string& target)
{
    std::cout << "ClapTrap " << name << " attacks" << target <<  " causing " << Attack_damage << " points of damage!" << std:: endl;
    Energy_point--;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take damage" << amount << std:: endl;
    Hit_points-=amount;
}

void ClapTrap:: beRepaired(unsigned int amount)
{
std::cout << "ClapTrap " << name << " repair" << amount << std:: endl;
    Hit_points+=amount;
    Energy_point--;
}

ClapTrap::ClapTrap()
{
    
    std::cout << "default constructor " << std:: endl;
    name = "default";
    Hit_points = 10;
    Energy_point = 10;
    Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called " << std:: endl;
}
ClapTrap::ClapTrap(const ClapTrap &a)
{
    this->name = a.name;
    this->Hit_points = a.Hit_points;
    this->Attack_damage = a.Attack_damage;
    this->Energy_point = a.Energy_point;
    std:: cout << "Copy constructor called\n";
}

ClapTrap& ClapTrap:: operator =(const ClapTrap& t) // assignement
{
    std::cout << "Assignment operator called " << name << std :: endl;
    this->name = t.name;
    this->Hit_points = t.Hit_points;
    this->Energy_point = t.Energy_point;
    this->Attack_damage = t.Attack_damage;
    return *this;
}
