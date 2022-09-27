/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/27 15:12:24 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed:: Fixed(const float F)
 {
    float A = F;
    float v = 1 << 8;
    A = A * v;
    std:: cout << "Float constructor called " << std::endl;
    fixed_point = roundf(A);
 }

Fixed :: Fixed(const int a)
{

    int A = a;
    A = A  << 8;
    std :: cout << " Int constructor called \n" ;
    fixed_point = A;
}

Fixed::Fixed()
{
    fixed_point = 0;
    std :: cout << "Default constructor called\n";  
}

Fixed::Fixed(const Fixed &a)
{
    fixed_point = a.fixed_point;
    std :: cout << " Copy constructor called\n";
}
 Fixed  Fixed::operator = (const Fixed& t)
 {
    this->fixed_point = t.fixed_point;
    std:: cout << "Assignment operator called " << std::endl;
    return *this;
 }
    
Fixed::~Fixed()
{
    std :: cout << "Destructor called\n";
}

int Fixed:: getRawBits(void) const
{
    return fixed_point;
}

void Fixed:: setRawBits( int const raw )
{
}

float Fixed:: toFloat( void ) const
{
float e = fixed_point;
e = e / (1 << 8);
return e;
}

int Fixed:: toInt( void ) const
{
return toFloat() ;
}