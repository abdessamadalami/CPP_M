/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:29:55 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/25 08:35:43 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <utility>

void Harl:: debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl:: info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl:: warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month\n"; 
}

void Harl:: error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now\n";
}

void Harl:: complain( std::string level )
{
    int index;
    index = 0;
    std:: string ptr[] = {"DEBUG" ,"INFO","WARNING", "ERROR" };
    void (Harl::*arr[]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (index < 4)
    {
        if (level == ptr[index])
        {
            (this->*arr[index])();
            exit(1);
        }
        index++;
    }
}