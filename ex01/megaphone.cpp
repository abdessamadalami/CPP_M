/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:14:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/15 16:16:02 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include <iostream>
#include <string>
class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string number;
    public:
        void set(std::string First_name,std::string Last_name,std::string Nickname,std::string Phone_number,std::string Secret)
        {
            first_name = First_name;
            last_name = Last_name;
            nickname = Nickname;
            phone = Phone_number;
            // std::cout << First_name << " " << last_name << " ";
        }
        void display()
        {
          std::cout << "first name " << first_name << "|" << "last name " << last_name << "|" 
            << "nickname "<< nickname << "|" << phone << "\n";
        }
};

class PoneBook
{
    private:
        Contact arr[8];
    public:
        void add(Contact contact, int index)
        {
            arr[index] = contact;  
        }
        Contact *get_arr()
        {
            return arr;
        }
};

std::string get_command()
{
    std:: string command;
    while (std::getline (std::cin,command) && !std::cin.eof())
    {
         if (command.length()  != 0)
            break;
         std::cout << "invalid command-> ADD | SEARCH | EXIT" << std::endl;
    }
    return command;
}

std::string con_membre(std:: string str )
{
    std:: string command;
    std::cout << str << std::endl;
    while (std::getline (std::cin,command) && !std::cin.eof())
    {
         if (command.length()  != 0)
            break;
         std::cout << "invalid " << str <<std::endl;
    }
    return command;
}

int check_string(std::string str)
{
    if (str.length() != 1 || str == )
}

int main (int argc, char **argv)
{
    std::string command, first_name,last_name, nickname, phone, secret, id;
    char *ptr;
    int index = 0;
    int n;
    PoneBook alami;
    Contact contact;
   std::cout << " ADD | SEARCH | EXIT " << std::endl;
    while (std::getline (std::cin,command) && !std::cin.eof())
    {
        if (command.length() == 0)
            command = get_command();
        if (command == "ADD")
        {
            first_name = con_membre("first name");
            last_name = con_membre("last name");
            nickname = con_membre("nickname");
            phone = con_membre("phone numbre");
            secret = con_membre("darkest secret");
            contact.set(first_name, last_name, nickname, phone, secret);
            alami.add(contact, index);
            
            alami.get_arr()[0].display();
            //break;
        }
        if (command == "SEARCH")
        {
            std::getline (std::cin,id);
            // n = stoi(id);
            //std::cout << "nbr " << n;
            if (id != "0")
            {
                printf("error name ");
            }
            //     std:: cout << " Error id we have just 8 contact";
            // else
            // {
            //     std:: cout << "index " << id << "|";
            //     alami.get_arr()[id].display();
            // }
        }
        index++;
        if (index == 8)
            index = 0;
        std::cout << " ADD | SEARCH | EXIT \n\n" << std::endl;
    }
   
}