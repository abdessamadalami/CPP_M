/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   membres.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:03:44 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/18 12:56:01 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headr.hpp"



void Contact:: display(int index, int a)
    {
        if (a == 1)
        {
        if(first_name.empty())
        {
            printf("contacts not found \n");
            return;
        }
        std::cout
        << "index: " << std:: setw(10) << index << "|" 
        << "first name: " << std:: setw(10) << check_dtring(first_name) << "|" 
        << "last name: " << std:: setw(10) << check_dtring(last_name) << "|" 
        << "nickname: "<< std:: setw(10) << check_dtring(nickname) << "|\n";
        }
        if (a == -1)
        {
            if(first_name.empty())
        {
            printf("contact not found \n");
            return;
        }
        std::cout
        << "index: " << index << "\n"
        << "first name: "  << first_name << "\n" 
        << "last name:"  << last_name <<"\n"
        << "nickname " << nickname << "\n"
        << "phone: " << phone << "\n"
        << "darkest secret: " << secret << "\n";
        }
    }
    
    void  Contact:: set(std::string First_name,std::string Last_name,std::string Nickname,std::string Phone_number,std::string Secret)
    {
        first_name = First_name;
        last_name = Last_name;
        nickname = Nickname;
        phone = Phone_number;
        secret = Secret;
    }
    std:: string Contact:: get()
    {
        return first_name;
    }
    void PoneBook:: add(Contact contact, int index)
    {
        arr[index] = contact;
    }
    Contact *PoneBook:: get_arr()
    {
        return arr;
    }