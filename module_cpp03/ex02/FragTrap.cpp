/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:33 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/15 19:29:46 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name, 100,100,30) //! mablanxch
{
    std:: cout << "FragTrap constructor " << std::endl;
}

FragTrap::~FragTrap()
{
    std:: cout << "FragTrap destructor " << std::endl;
}

FragTrap::FragTrap()
{
    std:: cout << "FragTrap default constructor " << std::endl;
    Hit_points = 100;
    Energy_point = 100;
    Attack_damage = 30;
}


void FragTrap ::highFivesGuys()
{
    std:: cout << " high fives " << std::endl;
}

void FragTrap:: attack(const std::string& target) // just read 
{
    std::cout << "FragTrap " << name << " attacks " << target <<  " causing " << Attack_damage << " points of damage!" << std:: endl;
    Energy_point--;
}

FragTrap& FragTrap:: operator=(const FragTrap &t)
{
    this->name = t.name;
    this-> Hit_points = t.Hit_points;
    this->Attack_damage = t.Attack_damage;
    this->Energy_point = t.Energy_point;
    return *this;
}