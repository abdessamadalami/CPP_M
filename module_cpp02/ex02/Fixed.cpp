/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/27 18:49:07 by ael-oual         ###   ########.fr       */
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

std ::ostream& operator<<(std ::ostream& COUT,const Fixed &a)
{
    float e = a.toFloat();
    COUT << e ;
    return COUT;
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

bool  Fixed:: operator==(const Fixed &a)
{
    return (this->fixed_point == a.fixed_point);
}
bool  Fixed:: operator!=(const Fixed &a)
{
    return (this->fixed_point != a.fixed_point);
}

int  Fixed:: operator+(const Fixed &a)
{
    int fixed;
    fixed = this->fixed_point + a.fixed_point;
    
    return (fixed);
}

int  Fixed:: operator-(const Fixed &a)
{
    int fixed;
    fixed = this->fixed_point - a.fixed_point;
    return fixed;
}

int  Fixed:: operator*(const Fixed &a)
{
    float fixed;
    fixed = ((this->fixed_point / 256) * a.fixed_point );
    fixed = (fixed/ (1 << 8));
    return (fixed);
}

int  Fixed:: operator/(const Fixed &a)
{
    int fixed;
    fixed = (this->fixed_point / a.fixed_point) / (1 << 8) ;
    return (this->fixed_point);
}

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

// Fixed Fixed:: operator--()
// {
//     Fixed temp;
//     temp.fixed_point = this->fixed_point--;
//   return temp;
// }

// void  Fixed:: operator--(int)
// {
//   fixed_point -= 1;
// }

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