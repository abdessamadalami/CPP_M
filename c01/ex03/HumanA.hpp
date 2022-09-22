/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:39:01 by sultan            #+#    #+#             */
/*   Updated: 1980/01/01 01:50:17 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std:: string name;
    Weapon m4;    
public:
    HumanA()
    {}
    HumanA(std:: string str, Weapon m)
    {
        name = str;
        m4 = m;
    }
   
    ~HumanA()
    {}
    void attack()
    {
        std:: cout << name <<  "attacks with their weapon type";
    }
};
