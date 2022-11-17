/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:31:19 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/15 12:11:56 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public  ClapTrap
{
public:
    FragTrap();
    FragTrap(std:: string name);
    FragTrap(const FragTrap& old_obj);
    FragTrap& operator=(const FragTrap &t);
    void highFivesGuys();
    ~FragTrap();
};

#endif
