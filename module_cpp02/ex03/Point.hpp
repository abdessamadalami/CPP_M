/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:28:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/29 16:22:58 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Point
{
private:
    int fixed_point_x;
    int fixed_point_y;
    const static int shift = 8;
public:
    Point();
    ~Point();
    Point(const Point &a);
    Point(const int I);
    Point(const float x,const float y);
    int getRawBits_x() const;
    int getRawBits_y() const;
    
    void setRawBits( int const raw );
    Point  operator = (const Point& t);
    float toFloat_x( void ) const;
    float toFloat_y( void ) const;
    int toInt( void ) const;
    
    bool operator <(const Point &a);
    bool operator <=(const Point &a);
    bool operator >(const Point &a);
    bool operator >=(const Point &a);
    bool operator !=(const Point &a);
    bool operator ==(const Point &a);
    
    Point  operator +(const Point &a);
    Point  operator -(const Point &a);
    static Point max(Point &a, Point &b);
    static Point min(Point &a, Point &b);   
};
 std ::ostream& operator<<(std ::ostream& COUT,const Point &a);