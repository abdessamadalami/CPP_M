/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:14:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/16 10:35:12 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
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
        void display(int index)
        {
         if(first_name.empty())
        {
            printf("contact not found \n");
            return;
        }
          std::cout
          << "index: " << std:: setw(10) << index << "|" 
          << "first name: " << std:: setw(10) << first_name << "|" 
          << "last name:" << std:: setw(10) << last_name << "|" 
          << "nickname "<< std:: setw(10) << nickname << "|\n";
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
         std::cout << std:: setw(5) <<"invalid command-> ADD | SEARCH | EXIT" << std::endl;
    }
    return command;
}

std::string con_membre(std:: string str )
{
    std:: string command;
    std::cout << str << ": ";
    while (std::getline (std::cin,command) && !std::cin.eof())
    {
         if (command.length()  != 0)
            break;
         std::cout << "invalid command " << str <<std::endl;
    }
    return command;
}

int main (int argc, char **argv)
{
    std::string command, first_name,last_name, nickname, phone, secret, id;
    int index = 0;
    int n;
    PoneBook alami;
    Contact contact;
    std::cout << std:: setw(30) << "< ADD | SEARCH | EXIT >\n";
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
            //alami.get_arr()[0].display(index);
            index++;
        }
        if (command == "SEARCH")
        {
            std::getline (std::cin,id);
            if (id.length() == 1 && id[0] >= '0' && id[0] <= '7')
                alami.get_arr()[id[0] - '0'].display(id[0] - '0');
            else
                std::cout << "error index \n";
        }
        if (command == "EXIT")
            return 0;
        if (index == 8)
            index = 0;
        std::cout << std:: setw(30) << "< ADD | SEARCH | EXIT >\n";
    }
   
}