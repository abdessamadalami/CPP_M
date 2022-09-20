/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headr.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:44:58 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/18 12:56:32 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
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

class PoneBook
{
    private:
        Contact arr[8];
    public:
        void add(Contact contact, int index);
        Contact *get_arr();
};
std:: string check_dtring(std ::string str);