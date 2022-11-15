/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:24:04 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/14 18:43:45 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap ,public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap(/* args */);
    DiamondTrap(std::string name);
    DiamondTrap& operator= (const DiamondTrap &t);
    void attack(const std::string& target);
    void whoAmI();
    ~DiamondTrap();
};


