/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:08:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/21 17:42:29 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
    std:: string str;
    std:: string *stringPTR;
    
    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std:: string &stringREF = str ;
    
    std:: cout << "string address " << &str<< std::endl;
    std:: cout << "stringPTR address " << stringPTR << std::endl;
    std :: cout << "string stringREF " << &stringREF << std::endl;
   // std :: cout <<"string ref " << stringREF << std::endl;

    std:: cout << std::endl <<"string value: " << str<< std::endl;
    std:: cout << "stringPTR value: " << *stringPTR << std::endl;
    std :: cout << "string value: " << stringREF << std::endl;

// int i = 5;
// int &r = i;
// int *p = &i;
// int var = 545;

// std ::cout << " p " <<  *p << " " << p <<  std::endl;
// r = var;
// p = &var;
// *p = 90; 
// //std ::cout << " r " <<  r << " " << &r << std::endl;
// //std ::cout << " i " <<  i << " "<<&i <<  std::endl;
// std ::cout << " p " <<  *p << " " << p <<  std::endl;

}