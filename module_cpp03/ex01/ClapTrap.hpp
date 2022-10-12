/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:55 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 15:52:03 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std:: string name;
    unsigned int Hit_points;
    unsigned int Energy_point;
    unsigned int Attack_damage;
    /* data */
public:
    ClapTrap(std::string name);
    ClapTrap(std::string name, unsigned int Hit_points, unsigned int Energy_point, unsigned int Attack_damage);
    void attack(const std::string& target);
    ClapTrap();
    ClapTrap& operator =(const ClapTrap& t);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};




