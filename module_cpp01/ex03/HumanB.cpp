/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:08:10 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/23 18:18:22 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB:: attack()
{
    //std :: cout << "address in attack "  << w << std::endl;
    std:: cout << name <<  " attacks with their weapon type " << w->getType() << std::endl;
}

HumanB :: HumanB (std::string str)
{
    name = str;
}
void HumanB ::  setWeapon(Weapon &club)
{
  //  std:: cout << "address in set weapon " << &club << "\n";
    w = &club;
   // std:: cout << "address in set weapon " << w << "\n";

}