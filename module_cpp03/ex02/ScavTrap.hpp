/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:35:52 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 13:39:19 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    //std:: string name;
public:
    
    ScavTrap(std::string name);
    ScavTrap();
    ScavTrap(const ScavTrap &a);
    void guardGate();
    ~ScavTrap();
};


