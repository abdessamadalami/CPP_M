/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:35:52 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/14 13:12:12 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &old_obj);
    ScavTrap&  operator =(const ScavTrap& t);
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
    
};


