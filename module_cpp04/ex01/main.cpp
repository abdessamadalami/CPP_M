/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:31:33 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/18 11:20:54 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

 void wrongtest()
 {
        int a(2);
        
        if (a <= 0)
                return ;
        WrongAnimal** meta = new WrongAnimal*[a];
        for (int  i = 0; i < a; i++)
        {
                // if (i < a/2)
                //     meta[i] = new Dog();
                // else
                    meta[i] = new WrongCat();
                meta[i]->makeSound();
        }
        std::cout << "\n";
        for(int i = 0; i < a; i++)
                delete meta[i];
        // delete[] meta;
       
 }
 void test()
 {
        
        // Dog g;
        // Dog b(g);
//---------------------
        // Dog o;
        // {
        //         Dog p(o);
        //         // o = p;
        // }

//-----------------------------
        int a(2);
        // Dog b;
        // Dog c = b;
        
        if (a <= 0)
                return ;
        Animal** meta = new Animal*[a];
        for (int  i = 0; i < a; i++)
        {
                if (i < a/2)
                    meta[i] = new Dog();
                else
                    meta[i] = new Cat();
                meta[i]->makeSound();
        }
        std::cout << "\n";
        for(int i = 0; i < a; i++)
                delete meta[i];
        // delete[] meta;
       
 }
 
int main()
{
        test();
        wrongtest();
       // delete A;
       // exit(0);
       // delete []meta; 
        // system("leaks Polymorphism");
return 0;
}