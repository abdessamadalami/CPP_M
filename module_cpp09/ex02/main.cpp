#include <iostream>
#include <fstream>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <ctime>

template<typename T>
void print(T &Numbers)
{
    for (size_t i = 0; i < Numbers.size(); i++)
    {
        std::cout << Numbers[i] << " ";
    }
}

void MergeSortVector(std::vector<int> &Numbers)
{
    std::vector<int> mainchein;
    
    int last;
    last = -1;
    if(Numbers.size() %2 != 0)
    {
        last = Numbers[Numbers.size() - 1];
        Numbers.pop_back();
    }
    std::vector<std::pair<int, int> > Vectorsofpair;
    for (size_t i = 0; i < Numbers.size(); i+=2)
    {
        std::pair<int, int>pair;
        if( Numbers[i] > Numbers[i+1])
            std::swap(Numbers[i],Numbers[i + 1]);
        pair.first = Numbers[i];
        pair.second = Numbers[i + 1];
        Vectorsofpair.push_back(pair);
    }
    std::sort(begin(Vectorsofpair), end(Vectorsofpair));
    for (size_t i = 0; i < Vectorsofpair.size(); i++)
    {
        mainchein.push_back(Vectorsofpair[i].first);
        //std::cout  << " first: "<<  Vectorsofpair[i].first << " second: " <<  Vectorsofpair[i].second << std::endl;
    }

    std::vector<int>::iterator it;
    for (size_t i = 0; i < Vectorsofpair.size(); i++)
    {
        it = std::upper_bound(begin(mainchein), end(mainchein), Vectorsofpair[i].second);
        mainchein.insert(it, Vectorsofpair[i].second);
    }
     if(last != -1)
    {
        it = std::upper_bound(begin(mainchein), end(mainchein), last);
        mainchein.insert(it, last);
    }
    std::cout<< "After:  ";
    print(mainchein);
}

void MergeSortDeque(std::deque<int> &Numbers)
{
    std::deque<int> mainchein;
    
    int  last;
    last = -1;
    if(Numbers.size() %2 != 0)
    {
        last = Numbers[Numbers.size() - 1];
        Numbers.pop_back();
    }
    std::deque<std::pair<int, int> > Dequesofpair;
    for (size_t i = 0; i < Numbers.size(); i+=2)
    {
        std::pair<int, int>pair;
        if(Numbers[i] > Numbers[i+1])
            std::swap(Numbers[i],Numbers[i + 1]);
        pair.first = Numbers[i];
        pair.second = Numbers[i + 1];
        Dequesofpair.push_back(pair);
    }
    std::sort(begin(Dequesofpair), end(Dequesofpair));
    for (size_t i = 0; i < Dequesofpair.size(); i++)
        mainchein.push_back(Dequesofpair[i].first);

    std::deque<int>::iterator it;
    for (size_t i = 0; i < Dequesofpair.size(); i++)
    {
        it = std::upper_bound(begin(mainchein), end(mainchein), Dequesofpair[i].second);
        mainchein.insert(it, Dequesofpair[i].second);
    }
    if(last != -1)
    {
        it = std::upper_bound(begin(mainchein), end(mainchein), last);
        mainchein.insert(it, last);
    }
}

int main(int ag , char **av) 
{
    int i = 1;

     if(ag != 2)
    {
        std::cout << "error\n";
        return 0;
    }
    std::vector<int> Numbers; 
    std::deque<int> Numbers1; 
    //NewNumbers.push_back(5);
    std::cout << "Before:  ";
    while (i < ag)
    {
        std::cout << av[i] << " ";
        Numbers.push_back(atoi(av[i]));
        Numbers1.push_back(atoi(av[i]));
        i++;
    }
    std::cout << std::endl;
    clock_t time_req = clock();
    MergeSortVector(Numbers);
    clock_t time_req1 = clock() - time_req;
    std::cout << "\nTime to process a range of   "<< ag - 1 << " elements with std::vector is:" <<  (double)time_req1 << std::endl;
    time_req = clock();
    MergeSortDeque(Numbers1);
    time_req1 = clock() - time_req;
    std::cout << "Time to process a range of   "<< ag - 1 << " elements with std::deque is:" <<  (double)time_req1 << std::endl;
    
}
