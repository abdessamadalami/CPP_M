/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:33 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/13 19:10:18 by ael-oual         ###   ########.fr       */
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
}


void FragTrap ::highFivesGuys()
{
    std:: cout << " high fives " << std::endl;
}
