/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:29:20 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/13 12:17:27 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#include <iostream>
int main( void ) 
{

  Fixed a;
  Fixed  b( 10 );
  std::cout << &b << std::endl;
  b--;
  std::cout << &b << std::endl;
  // Fixed const c( 42.42f );
  // Fixed const d( b );
  // a = Fixed(1234.4321f);
  // Fixed o = a / b; 
  // Fixed x = a + b; //? the problem of the const and the qualitconst
  // std::cout << "a is " << a << std::endl;
  // std::cout << "b is " << b << std::endl;
  // std::cout << "c_ is " << o << std::endl;
  // std::cout << "d is " << d << std::endl;
  // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  
}