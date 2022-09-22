/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:27:35 by sultan            #+#    #+#             */
/*   Updated: 2022/09/22 19:01:59 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
 
 const std:: string& Weapon:: getType()
 {
    //const std:: string &t = type;
    return type;
 }

void Weapon:: setType( std ::string str)
{
    type = str;
}

Weapon:: Weapon( std::string str)
{
   type = str;
}

Weapon:: Weapon()
{
}

Weapon :: ~Weapon()
{ 
}
