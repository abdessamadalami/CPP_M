/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:08:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/02 16:53:26 by ael-oual         ###   ########.fr       */
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
    std:: cout << "string stringREF " << &stringREF << std::endl;
   // std :: cout <<"string ref " << stringREF << std::endl;

    std:: cout << std::endl <<"string value: " << str<< std::endl;
    std:: cout << "stringPTR value: " << *stringPTR << std::endl;
    std :: cout << "string value: " << stringREF << std::endl;
}