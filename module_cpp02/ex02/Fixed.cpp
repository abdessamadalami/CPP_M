/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/13 12:16:05 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//! Orthodox Canonical Form

Fixed:: Fixed(const float F)
{
    std:: cout << " Float constructor called " << std::endl;
    fixed_point = roundf( F * (1  << shift));
}

Fixed :: Fixed(const int a)
{
    std :: cout <<  " Int constructor called \n" ;
    this-> fixed_point = a << shift;
}

Fixed::Fixed()
{
    fixed_point = 0;
    std :: cout << "Default constructor called\n";  
}

Fixed::Fixed(const Fixed &a)
{
    this->fixed_point = a.fixed_point;
    std :: cout << " Copy constructor called\n";
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
    return (fixed_point / (1 << shift));
}

int Fixed:: toInt( void ) const
{
    return toFloat();
}

Fixed  Fixed::operator= (const Fixed& t)
{
    this->fixed_point = t.fixed_point;
    std:: cout << "Assignment operator called " << std::endl;
    return *this;
}

//! membre functions operators << < > >= <=
//? the operator returns a reference to the ostream it just wrote.

std ::ostream& operator<<(std ::ostream& COUT, const Fixed &a)
{
    float e = a.toFloat();
    COUT << e;
    return (COUT);
}

bool  Fixed:: operator<(const Fixed &a)const
{
    return (this->fixed_point < a.fixed_point);
}

bool  Fixed:: operator>(const Fixed &a)const
{
    return (this->fixed_point > a.fixed_point);
}

bool  Fixed:: operator>=(const Fixed &a)const
{
    return (this->fixed_point >= a.fixed_point);
}

bool  Fixed:: operator<=(const Fixed &a)const
{
    return (this->fixed_point >= a.fixed_point);
}

/* !* membre functions operators != == =+*/

bool  Fixed:: operator==(const Fixed &a)const
{
    return (this->fixed_point == a.fixed_point);
}

bool  Fixed:: operator!=(const Fixed &a)const
{
    return (this->fixed_point != a.fixed_point);
}

//! membre functions operators + - * /

Fixed  Fixed:: operator+(const Fixed &l_obj)const
{
    Fixed fixed;
    std::cout << l_obj;
    fixed.fixed_point = this->fixed_point + l_obj.fixed_point;
    return (fixed);
}

Fixed  Fixed:: operator-(const Fixed &l_obj)const
{
    Fixed fixed;
    fixed.fixed_point = this->fixed_point - l_obj.fixed_point;
    return fixed;
}

Fixed  Fixed:: operator*(const Fixed &l_obj)const
{
    Fixed fixed;
    fixed.fixed_point = (((this->fixed_point)) * (l_obj.fixed_point)) >> shift;
    return (fixed);
}

Fixed  Fixed:: operator/(const Fixed &l_obj)const
{
    Fixed fixed;
    fixed.fixed_point = (this->fixed_point / l_obj.fixed_point) << shift;
    return (fixed);
}

//! membre functions operators a++ ++a a-- --a

Fixed Fixed:: operator++() // prefix
{
    this->fixed_point++;
    return (*this);
}

Fixed  Fixed:: operator++(int) //postfix int just a signature
{
    Fixed temp;
    temp.fixed_point = this->fixed_point;
    this->fixed_point++;
    return temp;
}

Fixed Fixed:: operator--() 
{
     std::cout << "this is with out int  " <<  this << std::endl;
    this->fixed_point--;
   
    return (*this);
}

Fixed  Fixed:: operator--(int)
{
    Fixed temp;
     std::cout << "this is " <<  this << std::endl;
    temp.fixed_point = this->fixed_point;
    this->fixed_point--;
    return temp;
}

//! membre functions operators min and max with const and normal 

const Fixed& Fixed:: min(const Fixed &a, const Fixed &b)
{
    if (a.fixed_point < b.fixed_point)
        return a;
    return b;
}

const Fixed& Fixed:: max(const Fixed &a, const Fixed &b)
{
    if (a.fixed_point > b.fixed_point)
        return a;
    return b;
}

Fixed& Fixed:: min(Fixed &a, Fixed &b)
{
    if (a.fixed_point < b.fixed_point)
        return a;
    return b;
}

Fixed& Fixed:: max(Fixed &a, Fixed &b)
{
    if (a.fixed_point > b.fixed_point)
        return a;
    return b;
}

Fixed::~Fixed()
{
    std :: cout << "Destructor called\n";
}