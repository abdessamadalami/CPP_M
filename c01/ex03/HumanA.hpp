/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:39:01 by sultan            #+#    #+#             */
/*   Updated: 2022/09/22 19:33:53 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    std:: string name;
    Weapon &weapon;
public:
    HumanA(std::string str, Weapon &w) : weapon(w)
    {
        name = str;
    }
    ~HumanA()
    {
    }
    void attack()
    {
        std:: cout << name <<  " attacks with their weapon type " << weapon.getType() << std::endl;
    }
};
