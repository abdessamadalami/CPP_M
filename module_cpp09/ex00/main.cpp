#include<fstream>
#include <iostream>
#include <cstring>
#include "BitcoinExchange.hpp"

int main(int ag, char *argv)
{
    std::string FileName;
     std:: ifstream input;
     if (ag != 4)
    {
        std:: cerr<< "error argument" << std::endl;
        exit(1);
    }
    FileName=argv[1];
    input.open(FileName);
    std::string line;
    if(!input)
    {
        std::cerr<< "error file" << std::endl;
        exit(1);
    }
    while (input)
    {
        std:: getline(input, line); 
        if(!input.eof())// for add \n in the end of line
        {
            line += "\n";
        }
        if(line != "date | value")
            BitcoinExchange(lien);

    }

    return 0;
}