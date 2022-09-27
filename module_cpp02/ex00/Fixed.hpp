/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:28:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/26 18:18:04 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed
{
private:
    int value;
    const static int shift = 8;
public:
    Fixed(/* args */);
    ~Fixed();
    Fixed(const Fixed &a);
    int getRawBits() const;
    void setRawBits( int const raw );
};


