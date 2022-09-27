/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:44:58 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/25 11:32:04 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

std:: string check_string(std ::string str);
class PoneBook
{
    private:
        Contact arr[8];
    public:
        void add(Contact contact, int index);
        Contact *get_arr();
};

#endif