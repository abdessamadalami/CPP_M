/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:48:11 by sultan            #+#    #+#             */
/*   Updated: 2022/09/21 18:49:56 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std:: string name;
    Weapon m4;
public:
    HumanB(/* args */);
    ~HumanB();
    void Attack()
    {
        std:: cout << name <<  "attacks with their weapon type";
        
    }
};

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}
