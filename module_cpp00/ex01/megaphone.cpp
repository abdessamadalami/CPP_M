/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:14:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/25 13:38:57 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

std::string con_membre(std:: string str )
{
    std:: string command;
    std::cout << str << ": ";
    while (std::getline (std::cin,command) && !std::cin.eof())
    {
         if (command.length()  != 0)
            break;
         std::cout << "invalid " << str << " try again : "  ;
    }
    return command;
}

std:: string check_string(std ::string str)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str.append(".");
    }
    return str;
}

void search( PoneBook alami)
{
    std:: string id;
    int j;
    for (j = 0; j <= 7; j++)
    {
        if(!alami.get_arr()[j].get().length())
        {
            if (j == 0)
            {
                std::cout << " contacts not found" << std::endl;
                j = -1;
            }
            break;
        }
        alami.get_arr()[j].display(j, 1);
    }
    if (j != -1)
    {
        std::cout << "for more information choose an index -> ";
        std::getline (std::cin,id);
        if (id.length() == 1 && id[0] >= '0' && id[0] <= '7')
            alami.get_arr()[id[0] - '0'].display(id[0] - '0',-1);
        else
            std::cout << "error index \n";
    }
}

int main (int argc, char **argv)
{
    std::string command, id;
    int index = 0;
    int j;
    PoneBook alami;
    std::cout << std:: setw(45) << "< ADD | SEARCH | EXIT >\n->>> ";
    while (std::getline (std::cin,command) && !std::cin.eof())
    {
        if (command == "ADD")
        {
            alami.get_arr()[index].set(con_membre("first name"),
                                       con_membre("last_name"),
                                       con_membre("nickname"),
                                       con_membre("phone"),
                                       con_membre("secret"));
            index++;
        }
        if (command == "SEARCH")
        {
            search(alami);
        }
        if (command == "EXIT")
            return 0;
        if (index == 8)
            index = 0;
        std::cout << std:: setw(45) << "< ADD | SEARCH | EXIT >\n->>> ";
    }
}