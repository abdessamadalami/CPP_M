/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:26:55 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 15:17:06 by ael-oual         ###   ########.fr       */
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
    
    ClapTrap &operator =(const ClapTrap& t);
    // {
    //     this->name = t.name;
    //     this->Hit_points = t.Hit_points;
    //     this->Energy_point = t.Energy_point;
    //     this->Attack_damage = t.Attack_damage;
    //     std:: cout << "Assignment operator called " << std::endl;
    //     return *this;
    // }
    ~ClapTrap();
};




