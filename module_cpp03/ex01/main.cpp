/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:51:23 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/14 15:48:40 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
      ClapTrap a("A");
      ScavTrap s("B");
       s.guardGate();
      for (int  i = 0; i < 51; i++)
      {
         s.attack("abdessmad");
         /* code */
      }
      
       s.guardGate();

      // ClapTrap a("A");
      // ScavTrap s("B");
      // a.attack("abdessmad");
       s.guardGate();
      
   return 1;
}