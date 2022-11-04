/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:27:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/04 16:57:27 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
// #include "Array.hpp"
template<typename T> class Array
{
private:
    int N;
public:
    Array()
    {
        T *p;
        p = NULL;
    }
    Array (unsigned int n)
    {
        std:: cout << "i am here in \n";
        N = n;
        int * a = new int[N];
        // std:: cout << a[0] << "almai";
        (void)a;
    }
    //  Array<T>(const T&  arr)
    // {
    //     *this == arr;
    // }
    
   T&  operator =(Array<T> const T arr)
    {
        return *this;   
    }
    
    int size()
    {
        return N;
    }
    ~Array(){}
};

int main()
{
    Array<int> u(5);
}