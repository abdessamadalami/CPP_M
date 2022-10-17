/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:31:19 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/17 13:17:30 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public  ClapTrap
{
private:
public:
    FragTrap(std:: string name);
    void highFivesGuys();
    FragTrap(const FragTrap &a);
    void attack(const std::string& target);
    FragTrap& operator=(const FragTrap &t);
    ~FragTrap();
    FragTrap();
};

#endif
