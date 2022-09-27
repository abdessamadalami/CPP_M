/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:41:47 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/24 10:03:22 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp" 

void outfile(std:: string buffer)
{
    std:: ofstream out("out.replace");
    out << buffer;
    out.close();
}

int main(int argc, char **argv)
{
    file_rep rep(argc, argv);
    rep.sed_f();
}