/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:23:02 by sultan            #+#    #+#             */
/*   Updated: 2022/09/21 19:02:06 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
private:
    std:: string type;
public:
    std:: string getType();
    void setType( std ::string str);
    Weapon(std ::string str);
    ~Weapon();
};

