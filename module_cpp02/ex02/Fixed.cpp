/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sultan <sultan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 1980/01/01 00:46:37 by sultan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//! Orthodox Canonical Form

Fixed:: Fixed(const float F)
 {
    float A = F;
    float v = 1 << 8;
    A = A * v;
    std:: cout << "A " << A  << " f" << F << " Float constructor called " << std::endl;
    fixed_point = roundf(A);
 }

Fixed :: Fixed(const int a)
{
    int A = a;
    A = A << 8;
    std :: cout <<  " Int constructor called \n" ;
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

//! membre functions
 
int Fixed:: getRawBits(void) const
{
    return fixed_point;
}

void Fixed:: setRawBits( int const raw )
{
    fixed_point = raw;
}

float Fixed:: toFloat( void ) const
{
    float e = fixed_point;
    // std :: cout << e << std::endl;
    e = e / (1 << 8);
    return e;
}

int Fixed:: toInt( void ) const
{
    return toFloat() ;
}

//! membre functions operators << < > >= <=
//? the operator returns a reference to the ostream it just wrote.

std ::ostream& operator<<(std ::ostream& COUT, const Fixed &a)
{
    float e = a.toFloat();
    COUT << e;
    return (COUT);
}

bool  Fixed:: operator<(const Fixed &a)
{
    return (this->fixed_point < a.fixed_point);
}

bool  Fixed:: operator>(const Fixed &a)
{
    return (this->fixed_point > a.fixed_point);
}

bool  Fixed:: operator>=(const Fixed &a)
{
    return (this->fixed_point >= a.fixed_point);
}

bool  Fixed:: operator<=(const Fixed &a)
{
    return (this->fixed_point >= a.fixed_point);
}
//! membre functions operators != == =+

bool  Fixed:: operator==(const Fixed &a)
{
    return (this->fixed_point == a.fixed_point);
}
bool  Fixed:: operator!=(const Fixed &a)
{
    return (this->fixed_point != a.fixed_point);
}

//! membre functions operators + - * /

Fixed  Fixed:: operator+(const Fixed &a)
{
    Fixed fixed;
    fixed = this->fixed_point + a.fixed_point;
    
    return (fixed);
}

Fixed  Fixed:: operator-(const Fixed &a)
{
    Fixed fixed;
    fixed = this->fixed_point - a.fixed_point;
    return fixed;
}

Fixed  Fixed:: operator*(const Fixed &a)
{
    Fixed fixed;
    fixed.fixed_point = ((this->fixed_point) * (a.fixed_point)) / 256;
    return (fixed);
}

Fixed  Fixed:: operator/(const Fixed &a)
{
    int fixed;
    fixed = (this->fixed_point / a.fixed_point) / (1 << 8) ;
    return (this->fixed_point);
}

//! membre functions operators a++ ++a a-- --a

Fixed Fixed:: operator++() 
{
    Fixed temp;
    this->fixed_point++;
    return (*this);
}

Fixed  Fixed:: operator++(int)
{
    Fixed temp;
    temp.fixed_point = this->fixed_point;
    this->fixed_point++;
    return temp;
}

Fixed Fixed:: operator--() 
{
    Fixed temp;
    this->fixed_point--;
    return (*this);
}

Fixed  Fixed:: operator--(int)
{
    Fixed temp;
    temp.fixed_point = this->fixed_point;
    this->fixed_point--;
    return temp;
}

//! membre functions operators min and max with const and normal 

Fixed Fixed:: min(const Fixed &a, const Fixed &b)
{
    if (a.fixed_point < b.fixed_point)
        return a;
    return b;
}

Fixed Fixed:: max(const Fixed &a, const Fixed &b)
{
    if (a.fixed_point > b.fixed_point)
        return a;
    return b;
}

Fixed Fixed:: min(Fixed &a, Fixed &b)
{
    if (a.fixed_point < b.fixed_point)
        return a;
    return b;
}

Fixed Fixed:: max(Fixed &a, Fixed &b)
{
    if (a.fixed_point > b.fixed_point)
        return a;
    return b;
}