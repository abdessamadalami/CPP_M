/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:27:35 by sultan            #+#    #+#             */
/*   Updated: 2022/09/21 19:00:45 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "weapon.hpp"
 
 std:: string Weapon:: getType()
 {
    return type;
 }
void Weapon:: setType( std ::string str)
{
    type = str;
}
Weapon:: Weapon( std::string str)
{
    std::cout << str << std::endl;
}
Weapon :: ~Weapon()
{
    
}