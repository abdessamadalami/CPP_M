/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:23:02 by sultan            #+#    #+#             */
/*   Updated: 2022/09/22 17:59:03 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
private:
    std:: string type;
public:
    const std:: string&  getType();
    void setType( std ::string str);
    Weapon(std ::string str);
    Weapon();
    ~Weapon();
};
