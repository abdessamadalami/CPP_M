/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:11:37 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/21 15:30:25 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    void announs();
    std:: string get_name();
    void set_name(std ::string Name);
    Zombie();
    Zombie(std:: string name);
    ~Zombie();
};
Zombie* zombieHorde( int N, std::string name);