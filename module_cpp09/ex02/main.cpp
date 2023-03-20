#include <iostream>
#include <fstream>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>


void print(std::vector<int> &Numbers)
{
    std::cout << "------------------------------\n";
    for (size_t i = 0; i < Numbers.size(); i++)
    {
        std::cout << Numbers[i] << " ";
    }
    std::cout << "\n------------------------------\n";
}

void InsertSortvector(std::vector<int> &Numbers)
{
    int nbr1,nbr2,j;

    for (size_t i = 0; i < Numbers.size(); i++)
    {

        nbr1 = Numbers[i];
        j = i - 1;
        while (j >= 0 && Numbers[j] > nbr1)
        {
            Numbers[j + 1] = Numbers[j];
            j = j - 1;
        }
        Numbers[j + 1] = nbr1;   
    }
    std::cout << " in Inserting sort: \n";
    print(Numbers);
}

void Merge(std::vector<int> SubNumbers1,std::vector<int> SubNumbers2)
{
    

}

void MergeSortVector(std::vector<int> &Numbers , std::vector<int> &NewNumbers)
{
   
    int mid;
    mid = Numbers.size()/2;
    std::vector<int> SubNumbers1;
    std::vector<int> SubNumbers2;
    
    //std::copy (Numbers.begin(), Numbers.begin() + mid,SubNumbers1.begin());
    SubNumbers1.assign(Numbers.begin(), Numbers.begin() + mid);
    SubNumbers2.assign(Numbers.begin() + mid, Numbers.end());

    if(SubNumbers1.size() > 3)MergeSortVector(SubNumbers1,NewNumbers);
    if(SubNumbers2.size() > 3)MergeSortVector(SubNumbers2,NewNumbers);

    std::cout << "I am SubNumbers1\n";
    print(SubNumbers1);
    std::cout << "I am SubNumbers2\n";
    print(SubNumbers2);
    if(SubNumbers1.size() <= 3)
        InsertSortvector(SubNumbers1);
    if(SubNumbers2.size() <= 3)
        InsertSortvector(SubNumbers2);
    std::cout << "********************************\n";
    merge(SubNumbers1.begin(), SubNumbers1.end(), SubNumbers2.begin(), SubNumbers2.end(), NewNumbers.begin());
    print(NewNumbers);
  std::cout << "********************************\n";
}

int main(int ag , char **av)
{
    int i = 1;
    int nbr, n1, n2;
    std::vector<int> Numbers; 
    std::vector<int> NewNumbers(ag - 1);
    std::cout << NewNumbers.size() << std::endl;

    //NewNumbers.push_back(5);
    while (i < ag)
    {
        Numbers.push_back(atoi(av[i]));
        i++;
    }
    MergeSortVector(Numbers,NewNumbers);
   /*  if(ag < 6)
        InsertSortvector(Numbers); */
}
