/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:28:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/13 10:29:05 by ael-oual         ###   ########.fr       */
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
    Fixed&  operator = (const Fixed& t); //   support chaining
    float toFloat( void ) const;
    int toInt( void ) const;
};
std ::ostream& operator<<(std ::ostream& COUT,const Fixed &a);
