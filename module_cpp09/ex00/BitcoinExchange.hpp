
#include <iostream>
#include <fstream>
#include <iostream>
#include <map>
#include <algorithm>

class BitcoinExchange
{
private:
    std::map<std::string,std::string> data;
     
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &a);
    BitcoinExchange& operator =(const BitcoinExchange& OldObj);
    void CheckLine(std::string line);
    int CheckStringNumber(std::string &val, int comma);
    ~BitcoinExchange();
};
