/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:14:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/07/29 12:20:13 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// class PoneBook
// {
//     private :
//         string name[8];
//         string 
    
// }
void to_upcase(char **argv)
{
    int index, j;
    char c;
    index = 1;
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