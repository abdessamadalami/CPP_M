/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:14:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/07/29 12:35:45 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class PoneBook
{
    private :
        std::string name[8];
        std::string  first_name[8];
        std::string last_name[8];
        std::string nickname[8];
        std::string phone[8];
        std::string number[8]
}

void to_upcase(char **argv)
{
    int index, j;
    char c;
    index = 1;
    std::string abd = "ABCDEFGHIJKLMNOPQRSTUVWXY";
    while (argv[index] != NULL)
    {
        j = 0;
        while(argv[index][j])
        {
            c = toupper(argv[index][j]);
            std::cout << c;
            j++;
        }
        index++;
        if(argv[index] != NULL)
            std::cout << ' ';
    }
}
int main (int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        to_upcase(argv);
    std::cout << std::endl;
}