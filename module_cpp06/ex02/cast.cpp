/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:16:51 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/03 21:12:05 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp" 
#include <iostream>

Base * generate(void)
{
    
    int ran;
    srand(time(0));
    ran = rand();
    if (ran % 2 == 0)
        return  (new A);
    else if (ran % 3 == 0)
        return (new B);
    return (new C);
}

void identify(Base* p)
{
    A *a = dynamic_cast <A *>(p);
    B *b = dynamic_cast <B *>(p);
    C *c = dynamic_cast <C *>(p);
    
    if (a != NULL)
        std:: cout << "this is A\n";
    else if(b != NULL)
        std:: cout << "this is B\n"; 
    else if (c != NULL)
        std:: cout << "this is C\n";    
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast <A &>(p);
        std:: cout << "this is A\n";
    }

    catch (const std::bad_cast& e)
    {
         try
         {
            B b = dynamic_cast <B &>(p);
            std:: cout << "this is B\n";
         }
         catch(const std::bad_cast& e)
         {
            try
            {
                C c = dynamic_cast <C &>(p);
                std:: cout << "this is C\n";
            }
            catch(const std::bad_cast& e)
            {
                std::cerr << e.what() << '\n';
            }
         }
    }
}

int main()
{
    Base *father;
    father = generate();
    identify(father); 
    identify(*father);
 return 0;
}
