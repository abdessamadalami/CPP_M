/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/13 10:25:16 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed:: Fixed(const float F)
 {
    float A = F * (1 << this->shift);
    std:: cout << "Float constructor called " << A << std::endl;
    fixed_point = roundf(A);
 }

Fixed :: Fixed(const int a)
{
    int A = a;
    A = A  << this->shift;
    std :: cout << " Int constructor called \n" ;
    fixed_point = A;
}

Fixed::Fixed()
{
    fixed_point = 0;
    std :: cout << "Default constructor called\n";  
}

Fixed::Fixed(const Fixed &old_obj)
{
    std :: cout << " Copy constructor called\n";
    *this = old_obj;
}

Fixed&  Fixed::operator = (const Fixed& t)
{
    this->fixed_point = t.fixed_point;
    std:: cout << "Copy Assignment operator called " << std::endl;
    return *this;
}

int Fixed:: getRawBits(void) const
{
    return fixed_point;
}

void Fixed:: setRawBits( int const raw )
{
    this->fixed_point = raw;
}

float Fixed:: toFloat( void ) const
{
    float e = fixed_point;
    e = e / (1 << this->shift);
    return e;
}

int Fixed:: toInt( void ) const
{
    return toFloat() ;
}

Fixed::~Fixed()
{
    std :: cout << "Destructor called\n";
}