/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:58:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/24 09:59:03 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
file_rep:: file_rep(int ag, char **argv)
{
    std:: ifstream Input;
    if (ag != 4)
    {
        std:: cerr<< "error argument" << std::endl;
        exit(0);
    }
    file_name = argv[1];
    s1 = argv[2];
    s2 = argv[3];
}

void file_rep::sed_f()
{
    std:: ifstream input;
    std:: size_t position;
    input.open(file_name);
    if(!input)
    {
        std:: cerr<< "error file" << std::endl;
        exit(0);
    }
    std:: getline(input, buffer);
    while(!s1.length() && s1 != s2)
    {
        position = buffer.find(s1);
        if (position > buffer.length())
        {
            std::cout <<buffer << std::endl ;
            break;
        }
        buffer.erase(position, s1.length());
        buffer.insert(position, s2);
    }
   outfile(buffer);
}

file_rep::~file_rep()
{
}