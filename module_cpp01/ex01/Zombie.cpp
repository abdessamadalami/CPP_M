/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:46:36 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/02 18:30:15 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: ~Zombie()
{
    std:: cout << "this zombie destroyed " <<name<< std::endl;
}

Zombie:: Zombie() {}

std::string Zombie:: get_name()
{
    return name;
}

void Zombie:: set_name(std:: string Name)
{
    name=Name;
}

void Zombie:: announs()
{
    std:: cout << name << ": BraiiiiiiinnnzzzZ\n" ;
}
