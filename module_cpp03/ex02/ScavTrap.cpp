/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:36:46 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 15:06:35 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(std::string Name):ClapTrap(Name)
{
     std::cout <<  "contructor  ScavTrap  " << std::endl;
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