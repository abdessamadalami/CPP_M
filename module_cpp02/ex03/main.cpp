/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:29:20 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/28 16:55:34 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <iostream>

bool bsp( Point  a, Point  b, Point  c, Point  point)
{
  std ::cout << "alalmi";
  //std:: cout << a + b;
  return true;
}
int main( void ) 
{
  Point  a(11,11);
  Point  b(12,12);
  Point  c(10,10);
  Point  point(11,12);
  bsp( a, b, c, point);
}