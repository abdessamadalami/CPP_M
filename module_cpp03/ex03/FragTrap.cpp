/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:33 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/14 18:54:09 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap("default", 100,100,30)
{
    std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name, 100,100,30)
{
    std:: cout << "FragTrap:"<< this->name<<"constructor called" << std::endl;
}

FragTrap:: FragTrap(const FragTrap& old_obj)
{
    std::cout << "FragTrap: copy constructor called" << std::endl;
    *this = old_obj;
}

FragTrap& FragTrap:: operator=(const FragTrap &t)
{
    std::cout << "FragTrap: assingment operator called" << std::endl;
    this->name = t.name;
    this-> Hit_points = t.Hit_points;
    this->Attack_damage = t.Attack_damage;
    this->Energy_point = t.Energy_point;
    return *this;
}

void FragTrap ::highFivesGuys()
{
    std::cout << "FragTrap: high fives" << std::endl;
}

FragTrap::~FragTrap()
{
    std:: cout << "FragTrap:" << this->name << "destructor" << std::endl;
}