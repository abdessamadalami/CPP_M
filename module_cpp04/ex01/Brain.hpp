/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:29:42 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/18 12:00:52 by ael-oual         ###   ########.fr       */
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
    
    Brain(/* args */);
    Brain(const Brain& a);
    Brain& operator=(const Brain &t);
    ~Brain();
};

#endif