/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:16:51 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/28 11:14:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp" 
#include <iostream>

Base * generate(void)
{
    int ran;
    std::cout << " .  jj " << time(0) << std::endl;
    srand(time(0));
    ran = rand();
    if (ran % 2 == 0)
        return  (new A);
    else if (ran % 3 == 0)
        return (new B);
    return (new C);
}

void identify(Base* base)
{
    A *drive_a = dynamic_cast <A*>(base);
    B *drive_b = dynamic_cast <B*>(base);
    C *drive_c = dynamic_cast <C*>(base);
    
    if (drive_a != NULL)
        std:: cout << "this is A\n";
    else if(drive_b != NULL)
        std:: cout << "this is B\n"; 
    else if (drive_c != NULL)
        std:: cout << "this is C\n";    
}

void identify(Base& base)
{
    try
    {
        A drive_a = dynamic_cast <A&>(base);
        std:: cout << "this is A\n";
    }

    catch (const std::bad_cast& e)
    {
        try
        {
            B drive_b = dynamic_cast <B&>(base);
            std::cout << "this is B\n";
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                C drive_c = dynamic_cast <C&>(base);
                std::cout << "this is C\n";
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
