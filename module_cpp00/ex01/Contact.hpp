/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:07:10 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/25 11:30:13 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
std:: string check_string(std ::string str);
class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string secret;
    public:
        void set(std::string First_name,std::string Last_name,std::string Nickname,std::string Phone_number,std::string Secret);
        void display(int index, int a);
        std:: string get();
};

#endif