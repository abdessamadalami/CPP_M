/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:28:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/30 16:20:17 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed
{
private:
    int fixed_point;
    const static int shift = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &a);
    Fixed(const int I);
    Fixed(const float F);
    int getRawBits() const;
    void setRawBits( int const raw );
    Fixed  operator = (const Fixed& t);
    float toFloat( void ) const;
    int toInt( void ) const;
    
    bool operator <(const Fixed &a);
    bool operator <=(const Fixed &a);
    bool operator >(const Fixed &a);
    bool operator >=(const Fixed &a);
    bool operator !=(const Fixed &a);
    bool operator ==(const Fixed &a);
    
    Fixed  operator +(const Fixed &a);
    Fixed  operator -(const Fixed &a);
    Fixed  operator *(const Fixed &a);
    Fixed  operator /(const Fixed &a);

   static Fixed min(const Fixed &a, const Fixed &b);
   static Fixed max(const Fixed &a, const Fixed &b);

   static Fixed max(Fixed &a, Fixed &b);
   static Fixed min(Fixed &a, Fixed &b);
    
    
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed  operator--(int);
    
};
    std ::ostream& operator<<(std ::ostream& COUT,const Fixed &a);