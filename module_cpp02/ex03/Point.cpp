/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/28 16:35:25 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

//! Orthodox Canonical Form

Point :: Point(const float x,const float y)
 {
    float X = x;
    float Y = y;
    float v = 1 << shift;
    X = X * v;
    Y = Y * v;
    std:: cout << " X " << X << " Y " << Y  << " Float constructor called " << std::endl;
    fixed_point_x = roundf(X);
    fixed_point_y = roundf(Y);
    
 }

Point :: Point(const int a)
{
    int A = a;
    A = A << 8;
    std :: cout <<  " Int constructor called \n" ;
    fixed_point_x = A;
}

Point::Point()
{
    fixed_point_x = 0;
    std :: cout << "Default constructor called\n";  
}

Point::Point(const Point &a)
{
    fixed_point_x = a.fixed_point_x;
    fixed_point_y = a.fixed_point_y;
    std :: cout << " Copy constructor called\n";
}

// Point  Point::operator = (const Fixed& t)
// {
//     this->fixed_point_x = t.fixed_point_x;
//     this->fixed_point_y = t.fixed_point_y;
//     std:: cout << "Assignment operator called " << std::endl;
//     return *this;
// }
    
Point::~Point()
{
    std :: cout << "Destructor called\n";
}

//! membre functions
 
// int Fixed:: getRawBits(void) const
// {
//     return fixed_point_x;
// }

// void Fixed:: setRawBits( int const raw )
// {
//     fixed_point = raw;
// }

// float Point:: toFloat_x( void ) const
// {
//     float e = fixed_point_x;
//     // std :: cout << e << std::endl;
//     e = e / (1 << 8);
//     return e;
// }

// float Point:: toFloat_y( void ) const
// {
//     float e = fixed_point_y;
//     // std :: cout << e << std::endl;
//     e = e / (1 << 8);
//     return e;
// }
//! membre functions operators << < > >= <=

// bool  Point:: operator<(const Point &a)
// {
//     return (this->fixed_point < a.fixed_point);
// }

// bool  Point:: operator>(const Point &a)
// {
//     return (this->fixed_point > a.fixed_point);
// }

// bool  Point:: operator>=(const Point &a)
// {
//     return (this->fixed_point >= a.fixed_point);
// }

// bool  Point:: operator<=(const Point &a)
// {
//     return (this->fixed_point >= a.fixed_point);
// }
//! membre functions operators != == =+

// bool  Fixed:: operator==(const Fixed &a)
// {
//     return (this->fixed_point == a.fixed_point);
// }
// bool  Fixed:: operator!=(const Fixed &a)
// {
//     return (this->fixed_point != a.fixed_point);
// }

//! membre functions operators + - * /

Point  Point:: operator+(const Point &a)
{
    Point fixed;
    fixed.fixed_point_x = this->fixed_point_x + a.fixed_point_x;
    fixed.fixed_point_y = this->fixed_point_y + a.fixed_point_y;
    
    return (fixed);
}

// Point  Point:: operator-(const Point &a)
// {
//     Point fixed;
//     fixed = this->fixed_point - a.fixed_point;
//     return fixed;
// }

// Point  Point:: operator*(const Point &a)
// {
//     Point fixed;
//     fixed.fixed_point = ((this->fixed_point) * (a.fixed_point)) / 256;
//     return (fixed);
// }

// Point  Point:: operator/(const Point &a)
// {
//     int fixed;
//     fixed = (this->fixed_point / a.fixed_point) / (1 << 8) ;
//     return (this->fixed_point);
// }

//! membre functions operators a++ ++a a-- --a

//! membre functions operators min and max with const and normal 
