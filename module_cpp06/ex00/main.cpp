/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:02:27 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/03 11:37:21 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <iostream>

void check_type_arg(char *ptr)
{
     std:: cout << ptr;
    std:: string str (ptr);
    
    std::cout << str.length();
    if (str.length() == 1 && (str[0] < '0' && str[0] > '9'))
    {
        if (!isdigit(str[0] - '0'))
        {
            if (!isprint(str[0]))
                std:: cout << "not printible char \n";
            else
                std ::cout << "i am char\n";
        }
        else
            std::cout << "is didgit" << isdigit(str[0] - '0');
    }
}

int main(int ag, char **av)
{
    if (ag <= 1)
    {
        std:: cout << "error argument\n";
        return 1;
    }
  //  char c ='\n';
    // av[1][0] = '\n';
    //  std::string a(av[1]);
    //  std::cout << isprint(a[0]);
    // std:: cout << "good " << a[0];
    //std::cout << a[0];
     check_type_arg(av[1]);
    

    

    // double d  = *(double *)av[1];
    // std:: cout << a << std:: endl << b << std:: endl << c << std :: endl << d << std::endl;
}
