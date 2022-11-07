/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:38:15 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/07 10:19:59 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<class T> class Array
{
private:
    int N;
    T *array;
public:
    Array()
    {
        this->array = 0;
        this->N = 0;
        std::cout << "Default constructor" <<std::endl;
    }
    Array (unsigned int n)
    {
        this->N = n;
        this->array = new T[N]();
    }
    
     Array<T> (Array<T>&  obj)
    {
        std::cout << "copy constructor" << std::endl;
         *this = obj;
    }
    
   Array<T>&  operator =(Array<T>&  arr_obj)
    {
        std:: cout << "assignemt operator" << arr_obj.size() <<std::endl;
        this->N = arr_obj.N;
        if (arr_obj.array != NULL)
        {
           if (this->array) //! check the old array 
           {
                std:: cout <<  "delete the old \n";
                delete[] this->array;
           }
            this->array = new T[N]();
            for (int i = 0; i < arr_obj.N; i++)
            {
                this->array[i] = arr_obj.array[i];
            }
         }
        else
            this->array = 0; 
         return *this;   
    }

    T&  operator [](unsigned int position)
    {
        if (position > this->size())
        {
           std::string a = "Out of range \n";
           throw (a);
        }
        return this->array[position];
    }
    
    unsigned int size()
    {
        return this->N;
    }
    ~Array(){}
};