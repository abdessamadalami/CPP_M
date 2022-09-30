/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:29:20 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/30 08:31:28 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int area(Point p1, Point p2, Point p3)
{
int are = ((p1.getRawBits_x() * (p2.getRawBits_y() - p3.getRawBits_y())
            + p2.getRawBits_x() * (p3.getRawBits_y() - p1.getRawBits_y())
            + p3.getRawBits_x() * (p1.getRawBits_y() - p2.getRawBits_y()))/2);
   (are < 0) ? are *= -1 : are;
 return (are);
}

bool bsp( Point  a, Point  b, Point  c, Point  point)
{
    float T,A1,A2,A3;
    if (point == a || point == b || point == c)
        return false;
    T  =  area (a,b,c);
    A1 = area (point, b, c);
    A2 = area (a, point, c);
    A3 = area (a, b, point);
    
    std:: cout << " abc " << T << std::endl;
    std:: cout << " Pbc " << A1 << std::endl;
    std:: cout << " aPc " << A2 << std::endl;
    std:: cout << " abP " << A3 << std::endl;
    if (A1  == 0 || A2 == 0 || A3 == 0)
      return false;
    if(T ==  A1 + A2 + A3) 
        return true;
      return false;  
}

int main( void ) 
{
  Point  a(4,8);
  Point  b(2,4);
  Point  c(5,2);
  Point  point(4,4);
  (bsp( a, b, c, point)) ? std::cout << "true\n": std::cout << "false\n" ;
  return  0;
}