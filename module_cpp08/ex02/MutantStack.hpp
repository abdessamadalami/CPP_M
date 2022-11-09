/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:03:26 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/09 11:24:28 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <deque>
#include <iostream>
#include <list>
#include <algorithm>
#include <cmath>

template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T> 
{
public:
    typedef typename Container::iterator iterator;
    MutantStack(){}
    MutantStack(MutantStack &old_obj) { *this = old_obj; }
    MutantStack operator= (MutantStack &old_obj) { return old_obj;}
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    ~MutantStack(){}
    
};
#endif