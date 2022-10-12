/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:31:19 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/12 15:16:03 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public  ClapTrap
{
private:
    
public:
    FragTrap(std:: string name);
    void highFivesGuys();
    FragTrap(const FragTrap &a);
   // FragTrap operator=(const FragTrap& t);
    ~FragTrap();
    FragTrap();
};


