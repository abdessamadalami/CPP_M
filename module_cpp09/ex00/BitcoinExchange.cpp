#include "BitcoinExchange.hpp"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h> 
BitcoinExchange::BitcoinExchange(const BitcoinExchange &a)
{
    *this = a;
}

BitcoinExchange& BitcoinExchange:: operator=(const BitcoinExchange& OldObj)
{
    this->data = OldObj.data;
    return *this;
}
int BitcoinExchange:: CheckStringNumber(std::string &val, int comma)
{
    int date = 0;
    if (comma == 1)
        date = 1;
    for (size_t i = 0; i < val.length(); i++)
    {
        if(val[i] == '-' && date == 1)
            continue;
        if(((!isdigit(val[i])) && val[i] != '.' && val[i] != ',') ||  comma > 1 )
        {
            if(val[i] == '-')
                std::cerr << "Error: not a positive number.\n" ;
            else
                std::cerr << "Error: bad input => " << val << std::endl;
            return 1;
        }
         if( val[i] == '.' || val[i] == ',' )
            comma++;
    }
    return 0;
}

void BitcoinExchange:: CheckLine(std::string line)
{
    std::string key, val;
    int   Year, Month, Day;
    float value;
    size_t position = line.find(" | ");
    if(position > line.length())
    {
        std::cerr << "Error: bad input => " << line << std::endl;
        return;
    }
    Year =  Month =  Day = 0;
    key = line.substr(0, position);
    if(key.length() == 10)
    {
        if(CheckStringNumber(key, 1))
            return;
        Year = stoi(key.substr(0, 4));
        Month = stoi(key.substr(5, 2));
        Day = stoi(key.substr(8,2));
    }
    val = line.substr(position + 3);
    if (CheckStringNumber(val, 0))
        return;
    value = stof(line.substr(position + 3));
    if(value < 0 || value > 1000)
    {
        (value < 0) ? std::cerr << "Error: not a positive number.\n" : std::cerr << "Error: too large a number.\n";
        return;
    }
    if((Year <= 2022 && Year >= 2009) 
        && (Day >= 1 && Day <= 31)
        && (Month >= 1 && Month <= 12))
    {
        if((Month == 2 && Day > 28) || ((Month == 4 || Month == 6 ||
            Month == 9 || Month == 11) && Day > 30))
        {
            std::cerr << "Error: bad input => " << key << std::endl;
            return;
        }
        if(this->data[key].empty())
        {
            std::map<std::string,std::string>::iterator it2 = this->data.lower_bound(key); 
            if(it2 == this->data.begin())
            {
                std::cerr << "Error: bad input => " << key << std::endl;
                return;
            }
            it2--;
            char *str;
            std::cout<< key << " => " << value <<  " = " << value * strtof(it2->second.c_str(), &str) << std::endl;
        }
        else
            std::cout<< key << " => " << value <<  " = " << value * stof(this->data[key]) << std::endl;
    }
    else
        std::cerr << "Error: bad input => " << key << std::endl;
}

BitcoinExchange::BitcoinExchange(/* args */)
{
    std:: ifstream input; //  read file 
    std:: size_t position;
    std:: string line;
    std::string key ,value;
    input.open("data.csv");
    if(!input)
    {
        std:: cerr<< "error file" << std::endl;
        exit(1);
    }
    std:: getline(input, line);
    while (input)
    {
        std:: getline(input, line);
        position = line.find(",");
        if(line.empty())
            break ;
        key = line.substr(0, position);
        value = line.substr(position + 1);
        this->data.insert(std::pair<std::string,std::string >(key,value));
    }
}
BitcoinExchange::~BitcoinExchange()
{
}