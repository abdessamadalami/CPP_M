/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:56:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/24 09:59:26 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>

class file_rep
{
private:
    std:: string buffer;
    std:: string s1;
    std:: string s2;
    std:: string file_name;
public:
    file_rep(int ag, char **argv);
    void sed_f();
    ~file_rep();
};
void outfile(std :: string buffer);
#endif