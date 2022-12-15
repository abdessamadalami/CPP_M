/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:29:42 by ael-oual          #+#    #+#             */
/*   Updated: 2022/12/07 13:22:45 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& a);
    Brain& operator=(const Brain &t); 
    std::string *get()
    {
        std::string id[100];
         for (size_t i = 0; i < 100; i++)
            id[i] = this->ideas[i];
        return ideas;
    }
    ~Brain();
};

#endif