#include<fstream>
#include <iostream>
#include <cstring>
#include "BitcoinExchange.hpp"
#include <algorithm>


int main(int ag, char **argv)
{
    std::string FileName;
    std:: ifstream input;
    
    if (ag != 2)
    {
        std:: cerr << "error argument" << std::endl;
        return 1;
    }
    FileName=argv[1];
    if(FileName.length() < 5 ||  FileName.substr(FileName.length() - 4) != ".txt")
    {
        std:: cerr<< "error extention " << std::endl;
         return 1;
    }  
    input.open(FileName);
    std::string line;
    if(!input)
    {
        std::cerr<< "error file" << std::endl;
        return 1;
    }
    BitcoinExchange data;
    std:: getline(input, line);
    if(line != "date | value")
    {
        std::cerr<< "Error file" << std::endl;
        return 1;
    }
    while (input)
    {
        std::getline(input, line);
        data.CheckLine(line);
        if(input.eof())// for add \n in the end of line
            break ;
    }
    return 0;
}