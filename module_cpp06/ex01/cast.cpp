/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:16:51 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/28 11:16:15 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
/*
class A {
public:
    int c;
    void fun_a(char o)
    {
        c = o;
        std::cout << " In class A "<< c << std::endl;
    }
    void a()
    {
        std::cout << " i am a a function " << std::endl;
    }
};

void test_function(char *ptr)
{
    // c 
    
    A *obj = reinterpret_cast<A *>(ptr);
    std:: cout << "after " << obj->c << std::endl;
}
*/
 
struct Data
{
    unsigned long a;
    int b;
    int c;
    
};

uintptr_t serialize(Data* ptr)
{
    uintptr_t A = reinterpret_cast <uintptr_t>(ptr);
  //  uintptr_t  *pointer = reinterpret_cast <uintptr_t *>(ptr);
    
    std::cout << sizeof(A) << std::endl;
    std::cout << "after use reinterpret_cast: " << A << std::endl;
    return (A);
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}

int main()
{


    Data data;
    Data *r;
    
    data.a = 1844674407370955;
    data.b = 1000;
    data.c = 118998;
    

    r = deserialize(serialize(&data));
    std::cout << r->a << std::endl;
    std::cout << r->b << std::endl;
    std::cout << r->c << std::endl;


 
      {
        int a[20];
        long ptr;
        for ( int i = 0; i < 20; i++ )
        {
            int *p = &a[i];
            std::cout<< &a[i]<< " ";
            ptr = reinterpret_cast<long>(p);
            std::cout << ptr << std::endl;
        }
    }

       return 0;
}
