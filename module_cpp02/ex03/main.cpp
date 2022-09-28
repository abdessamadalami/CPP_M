/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:29:20 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/28 19:18:08 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <iostream>

bool det (Point u, Point v)
{
  float fixed;
  // std::cout <<  " u " <<  u << std ::endl;
  // std ::cout << " v " <<  v << std:: endl;
   //Point p = (v.toFloat_x )
   fixed = (u.getRawBits_x() * v.getRawBits_y()) - (u.getRawBits_y() * v.getRawBits_x());
   fixed = fixed /(1 << 16);
   //fixed = (u.getRawBits_x() * v.getRawBits_y())/256 - (u.getRawBits_y() * v.getRawBits_x());
   std:: cout <<  "ALANI " << fixed  << std::endl;
    
   
return true;
  
}
bool bsp( Point  a, Point  b, Point  c, Point  point)
{
  
  Point ab(b - a);
  std ::cout << ab.toFloat_x() << std::endl;
  std ::cout << ab.toFloat_y() << std::endl;
  
  Point ap(point - a);
  std ::cout << ap.toFloat_x() << std::endl;
  std ::cout << ap.toFloat_y() << std::endl;
  
  det(ab,ap);
  
  // Point bc(c - b);
  // std ::cout << bc.toFloat_x() << std::endl;
  // std ::cout << bc.toFloat_y() << std::endl;
  
  // Point bp(point - b);
  // std ::cout << bp.toFloat_x() << std::endl;
  // std ::cout << bp.toFloat_y() << std::endl;
  
  // Point ca(a - c);
  // std ::cout << ca.toFloat_x() << std::endl;
  // std ::cout << ca.toFloat_y() << std::endl;
  

  Point cp(point - c);
  std ::cout << cp.toFloat_x() << std::endl;
  std ::cout << cp.toFloat_y() << std::endl;
  
  
  return true;
}
int main( void ) 
{
  Point  a(3,2);
  Point  b(4,5);
  Point  c(1,2);
  Point  point(3,12);

  bsp( a, b, c, point);
  
}