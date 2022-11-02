/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:02:27 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/01 17:36:47 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <iostream>

// int main(int ag, char **av)
// {
    // if (ag <= 1)
    //     return 0;
   // const int a = 10;
    // const int *b = &a;

    // std:: cout << "int: "<<(int) atoi(av[1]) << std::endl;
    // std:: cout << "float: "<<(float)atoi(av[1]) << std::endl;    
    // std:: cout << "float: "<<(double)atoi(av[1]) << std::endl; 
   // int a = 10.234;
    // std :: cout << 
    //printf(" %f ", (float)a);
    // int *a = 10;
    
    //int  *c;
  
    // pass at compile time, may fail at run time
    // int* q = (int*)&c; 
    

// }



#include <iostream>
using namespace std;
class Base {
    public:
        int c;
};
class Derived : public Base 
{
    public:
        int a;
};
int main()
{
    Derived d1;
    d1.a = 1;
    // cout << d1.a
     Derived b1 = (Derived)(d1); // allowed
    // Derived* b2 = static_cast<Derived*>(&d1);
    // cout << b2->a;
    return 0;
}