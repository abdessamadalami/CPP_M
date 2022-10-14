/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:35:52 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/14 20:05:34 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    //std:: string name;
public:
    
    ScavTrap(std::string name);
    void attack(const std::string& target);
    ScavTrap&  operator =(const ScavTrap& t);
    void guardGate();
     ScavTrap();
    ~ScavTrap();
    
};


