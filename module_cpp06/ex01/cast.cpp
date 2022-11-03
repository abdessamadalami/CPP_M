/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:16:51 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/03 21:08:37 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    int a;
    int b;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data data;
    Data *r;
    data.a = 51;
    data.b = 10;
    r = deserialize(serialize(&data));
    std::cout << r->a << std::endl;
    std::cout << r->b << std::endl;
 return 0;
}
