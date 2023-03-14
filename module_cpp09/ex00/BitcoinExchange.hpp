
#include <iostream>
#include <fstream>
class BitcoinExchange
{
private:
     std::string lien;
public:
    BitcoinExchange(std::string lien):lien(lien);
    BitcoinExchange();
    void CheckLine();
    ~BitcoinExchange();
};
void BitcoinExchange:: CheckLine()
{
    
    
}

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::BitcoinExchange(std::string line)
{
    CheckLine();

}

BitcoinExchange::~BitcoinExchange()
{
}
