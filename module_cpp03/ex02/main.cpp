/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:51:23 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/15 12:12:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
//class FragTrap : public  ClapTrap
//class ScavTrap: public ClapTrap
int main()
{
    // ClapTrap a("alami");
    ScavTrap s("al ouali alami");
    s.attack("abdessmad");
   // s.guardGate();
    FragTrap a("abessamd");
    a.attack("alami");
}