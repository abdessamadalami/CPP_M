/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:08:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/26 16:49:17 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie* newZombie( std::string name )
// {
//     Zombie *alami;
   
//     alami = new Zombie;
//     alami->set_name(name);
//     alami->announs();
//     return alami;
// }

// int main()
// {
//     // Zombie *abdessamd;
//     // abdessamd = newZombie("abdessanad");
//     // delete abdessamd;
//     // randomChump("alami");
    
// }

#include <iostream>
#include <string>
# define max 18446744073709551615
  
int main()
{
    std ::string str = "abava";
    char c;
    int h;
    size_t found;

    for (int i ; i <= str.length(); i++)
    {
        c = str[i];
        h = i;
        found = 0;
        std:: cout << "char " << c << std::endl;
        while ((int)found <= str.length())//! just push the lasr element in sub str array
        {
            found = str.find(c, h + 1);
            if(found == std :: string::npos)
                break;
            std :: cout << " found " << found << " substr " <<  str.substr(i, (int)found) << std ::endl;
            std ::cout  << found << std ::endl;
            h = found;
        }
    }
    return 0;
}