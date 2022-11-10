/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:08:10 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/10 10:57:04 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB:: attack()
{
    //std :: cout << "address in attack "  << w << std::endl;
     if (w != NULL)
      std:: cout << name <<  " attacks with their weapon type " << w->getType() << std::endl;
}

HumanB :: HumanB (std::string str)
{
    name = str;
    w = NULL;
}
void HumanB ::  setWeapon(Weapon &club)
{
      w = &club;
}