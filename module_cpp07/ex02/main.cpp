/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:27:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/06 21:18:52 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
// #include "Array.hpp"
template<class T> class Array
{
private:
    int N;
    T *array;
public:
    Array()
    {
        T *p;
        p = NULL;
    }
    Array (unsigned int n)
    {
        this->N = n;
        this->array = new T[N]();
        std::cout << "i am here in constructor\n";
    }
    
     Array<T> (Array<T>&  obj)
    {
        std::cout << "copy constructor " << obj.size() <<std::endl;
        *this = obj;
        //exit(0);
      // (void)obj;
    }
    
   Array<T>&  operator =(Array<T>&  arr_obj)
    {
        std:: cout << "assignemt operator" << arr_obj.size() <<std::endl;
            this->N = arr_obj.N;
            this->array = new T[N]();
            for (int i = 0; i < arr_obj.N; i++)
            {
                this->array[i] = arr_obj.array[i];
                // std::cout << this ->array[i];
            }
         return *this;   
    }

    T&  operator [](unsigned int position)
    {
        if (position > this->size())
        {
            // exit(0);
            std::string a = "out of range \n";
           throw (a);
        }
        return this->array[position];
    }
    
    unsigned int size()
    {
        return this->N;
    }
    ~Array(){}
};

int main()
{
    Array<int>u(10);
    for (size_t i = 0; i < 10; i++)
        u[i] = i << 8;
    for (size_t i = 0; i < 10; i++)
        std::cout << u[i] << std:: endl;
    /// -------------------------------------------------
    Array<int>  a = u;
     for (size_t i = 0; i < 10; i++)
        std::cout << " i am in main() " << a[i] << std:: endl;





    
// std::cout<< "-------double T-------\n";
//     Array<double>double_array(10);
//     for (size_t i = 0; i < 10; i++)
//         double_array[i] = 1.0/9 * i;
//     for (size_t i = 0; i < 10; i++)
//         std::cout << double_array[i] << std:: endl;
//     try
//     {
//         std:: cout << double_array[100];
//     }
//     catch(const std::string& s)
//     {
//         std::cout << "exeption " << s ;
//     }
// std::cout<< "-------String T-------\n";
//     Array<std::string>string_array(10);
//     for (size_t i = 0; i < 10; i++)
//         string_array[i] = "alami";
//     for (size_t i = 0; i < 10; i++)
//         std::cout << string_array[i] << std:: endl;
//     try
//     {
//         std:: cout << string_array[100];
//     }
//     catch(const std::string& s)
//     {
//         std::cout << "exeption " << s ;
//     }    
}