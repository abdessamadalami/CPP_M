/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:29:55 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/22 13:20:29 by ael-oual         ###   ########.fr       */
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
    std:: string ptr[] = {"DEBUG" ,"INFO","WARNING", "ERROR"};
    void (Harl::*arr[]) (void) = { 
                                    &Harl::debug,
                                    &Harl::info,
                                    &Harl::warning,
                                    &Harl::error
                                };
    int index = ((level == "DEBUG") * 0 + (level == "INFO") * 1 +  (level == "WARNING") *  2 + (level == "ERROR") * 3);
    if (index == 0 && level != ptr[0])
    {
        std::cout << "Error: " << std::endl;
        return ;
    }
    (this->*arr[index])();
}