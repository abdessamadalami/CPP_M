/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:38:15 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/04 16:35:25 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T> class Array
{
private:
    int N;
public:
    Array()
    {
        T *p;
        p = NULL;
    }
    Array(unsigned int n)
    {
        N = n;
        int * a = new int[N];
    }
    int size()
    {
        return N;
    }
    Array(/* args */){}
    ~Array(){}
};
