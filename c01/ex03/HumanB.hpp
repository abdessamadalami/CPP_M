/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:48:11 by sultan            #+#    #+#             */
/*   Updated: 2022/09/22 17:14:49 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std:: string name;
    Weapon m4;
public:
    HumanB()
    {}
    ~HumanB()
    {}
    void Attack()
    {
        std:: cout << name <<  "attacks with their weapon type";
    }
};
