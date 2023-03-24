/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:23:29 by ael-oual          #+#    #+#             */
/*   Updated: 2023/03/22 16:44:50 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iostream>
#include <map>
#include <algorithm>


void check(std::stack<int> &stack , int i , char **av)
{
    int nbr , n1 , n2;
    if(stack.size() >= 2)
    {
        n1 = stack.top();
        stack.pop();
        n2 = stack.top();
        stack.pop();
        if(av[1][i] == '+'){nbr = n2 + n1;}
        else if(av[1][i] == '-'){nbr = n2 - n1;}
        else if(av[1][i] == '*'){nbr = n2 * n1;}
        else if(av[1][i] == '/')
        {
            if(n1 == 0)
            {
                std::cout << "error" << av[1][i] << std::endl;
                exit(1);
            }
            nbr = n2 / n1;
        }
        else
        {
            std::cout << "error" << av[1][i] << std::endl;
            exit(1);
        }
        stack.push(nbr);
    }
    else
    {
        std::cout << "error\n";
        exit(1);    
    }   
}

int main(int ag , char **av)
{
    int i = 0;
    std::stack<int> stack;
    if(ag != 2)
    {
        std::cout << "error\n";
        return 0;
    }
    while (av[1][i] != '\0')
    {
       
        if (av[1][i] == ' ')
        {
            i++;
            continue;
        }
        if(isdigit(av[1][i]))
            stack.push(av[1][i] - '0');
        else 
            check(stack ,i , av);
        i++;
    }
    if(stack.size() == 0)
        std::cout << "error\n";
    else
        std::cout <<  stack.top() << std::endl;
}

