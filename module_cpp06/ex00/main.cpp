/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:02:27 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/02 18:38:24 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <iostream>

void check_type_arg(char *ptr)
{
    // std:: cout << ptr;
    std:: string str (ptr);
    
    std::cout << str.length();
    if (str.length() == 1 && !isdigit(str[0] - '0') )
    {
        std :: cout << " i am "<< str[0] << '\n';
        if (!isprint(str[0]))
            std:: cout << "not printible char \n";
        else
            std ::cout << "i am char\n";
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
    std::string a(av[1]);
    std::cout << isprint(a);
    std:: cout << "good " << a[0];
    //std::cout << a[0];
    // check_type_arg(av[1]);
    

    

    // double d  = *(double *)av[1];
    // std:: cout << a << std:: endl << b << std:: endl << c << std :: endl << d << std::endl;
}
