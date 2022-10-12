/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:55 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 16:08:08 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std:: string name;
    int Hit_points;
    int Energy_point;
    int Attack_damage;
    /* data */
public:
    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(const ClapTrap &a);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap(std::string name, unsigned int Hit_points, unsigned int Energy_point, unsigned int Attack_damage);
    ClapTrap &operator =(const ClapTrap& t);
    ~ClapTrap();
};




