/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:35:52 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/14 16:14:39 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
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

#endif
