/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:58:14 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/03 12:26:16 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
// :s1(argv[2]),s2(argv[3]),file_name(argv[1])
file_rep:: file_rep(int ag, char **argv)
{
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
    std:: ifstream input; //  read file 
    std:: size_t position;
    std:: string line;
    input.open(file_name);
    if(!input)
    {
        std:: cerr<< "error file" << std::endl;
       return;
    }
    while (input)
    {
        buffer += line;
        std:: getline(input, line);
        if(!input.eof())
        {
            line += "\n";
        }
    }
    while(s1.length() && s1 != s2)
    {
        position = buffer.find(s1); 
        if (position > buffer.length()) // max of size_t 
            break;
        buffer.erase(position, s1.length()); // delete with range
        buffer.insert(position, s2);// insert for position
    }
   outfile(buffer);
}

file_rep::~file_rep()
{
}