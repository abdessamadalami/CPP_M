/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:55 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/14 14:04:54 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std:: string name;
    unsigned int Hit_points;
    unsigned int Energy_point;
    unsigned int Attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(std::string name, unsigned int Hit_points, unsigned int Energy_point, unsigned int Attack_damage);
    ClapTrap(const ClapTrap &old_obj);
    virtual void attack(const std::string& target);
    ClapTrap& operator =(const ClapTrap& old_obj);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif