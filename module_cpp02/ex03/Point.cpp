/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/29 16:23:30 by ael-oual         ###   ########.fr       */
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
    // std:: cout << " X " << X << " Y " << Y  << " Float constructor called " << std::endl;
    fixed_point_x = roundf(X);
    fixed_point_y = roundf(Y);
    
}

Point :: Point(const int a)
{
    int A = a;
    A = A << 8;
    fixed_point_x = A;
}

Point::Point()
{
    fixed_point_x = 0;
    fixed_point_y = 0;
}

Point::Point(const Point &a)
{
    fixed_point_x = a.fixed_point_x;
    fixed_point_y = a.fixed_point_y;
    // std :: cout << " Copy constructor called\n";
}

Point  Point::operator = (const Point& t)
{
    this->fixed_point_x = t.fixed_point_x;
    this->fixed_point_y = t.fixed_point_y;
    // std:: cout << "Assignment operator called " << std::endl;
    return *this;
}

std ::ostream& operator<<(std ::ostream& COUT, const Point &a)
{
    float x,y;
    y = a.toFloat_y();
    x =  a.toFloat_x();
    COUT << x << "_" << y ;
    return (COUT);
}
    
Point::~Point()
{
    // std :: cout << "Destructor called\n";
}

//! membre functions
 
int Point :: getRawBits_x(void) const
{
    return fixed_point_x;
}

int Point :: getRawBits_y(void) const
{
    return fixed_point_y;
}

float Point:: toFloat_x( void ) const
{
    float e = fixed_point_x;
    e = e / (1 << 8);
    return e;
}

float Point:: toFloat_y( void ) const
{
    float e = fixed_point_y;
    e = e / (1 << 8);
    return e;
}


bool  Point:: operator==(const Point &a)
{
    return (this->fixed_point_x == a.fixed_point_x &&
            this->fixed_point_y == a.fixed_point_y
            );
}
 bool Point :: operator!=(const Point &a)
 {
    return (this->fixed_point_x != a.fixed_point_x ||
            this->fixed_point_y != a.fixed_point_y
            );
 }


Point  Point:: operator+(const Point &a)
{
    Point fixed;
    fixed.fixed_point_x = this->fixed_point_x + a.fixed_point_x;
    fixed.fixed_point_y = this->fixed_point_y + a.fixed_point_y;
    
    return (fixed);
}

Point  Point:: operator-(const Point &a)
{
    Point fixed;
    fixed.fixed_point_x = this->fixed_point_x - a.fixed_point_x;
    fixed.fixed_point_y = this->fixed_point_y - a.fixed_point_y;
    
    return (fixed);
}

