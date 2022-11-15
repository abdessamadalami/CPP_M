/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:35 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/14 15:18:23 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("default"),Hit_points(10),Energy_point(10),Attack_damage(0)
{
    std::cout << "default constructor " << std:: endl;
}

ClapTrap::ClapTrap(std::string name):name(name),Hit_points(10),Energy_point(10),Attack_damage(0)
{
    std::cout<< "ClapTrap "<< this->name << " constructor \n";
}

ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
    *this = old_obj;
    std:: cout << "ClapTrap: Copy constructor called\n";
}

ClapTrap& ClapTrap:: operator =(const ClapTrap& t)
{
    std::cout << "ClapTrap: Assignment operator called " << name << std :: endl;
    this->name = t.name;
    this->Hit_points = t.Hit_points;
    this->Energy_point = t.Energy_point;
    this->Attack_damage = t.Attack_damage;
    return *this;
}

void ClapTrap:: attack(const std::string& target)
{
    
    if (this->Energy_point == 0)
    {
        std::cout<< "ClapTrap " << this->name << ": My Energy_point is:" << this->Energy_point << " i am D3IF" << std::endl;
        return ; 
    }
    std::cout << "ClapTrap " << name << " attacks " << target <<  " causing " << Attack_damage << " points of damage!" << std:: endl;
    Energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
   if ( Hit_points == 0)
    {
        std::cout << "ClapTrap Energy point  = 0 " << std::endl;
        return ;
    }
   if (amount > this->Hit_points)
   {
        std::cout << "ClapTrap:" << name << amount << std:: endl;
        Hit_points = 0;
   }
    else
    {
        std::cout << "ClapTrap:" << name << amount << std:: endl;
        this->Hit_points -= amount;
    }
}

void ClapTrap:: beRepaired(unsigned int amount)
{
    if (Energy_point == 0)
    {
        std::cout << "ClapTrap: "<< this->name << " Energy point  === 0 ):" << std::endl;
        return ;
    }
    std::cout << " ClapTrap: " << name << " repair " << std::endl;
    Hit_points += amount;
    Energy_point--;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: destructor called " << std:: endl;
}
