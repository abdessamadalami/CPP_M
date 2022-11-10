/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:48:11 by sultan            #+#    #+#             */
/*   Updated: 2022/11/10 10:30:32 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

// we can 't make the weapon as a refrence "HumanB may not always have a Weapon"
class HumanB
{
    private:
        std:: string name;
        Weapon *w;
    public:
        HumanB(std::string str);
        void setWeapon(Weapon &club);
        void attack();
};

#endif