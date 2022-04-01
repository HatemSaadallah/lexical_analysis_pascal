//
// Created by m.s.i on 4/1/2022.
//
#include <vector>

std::vector<std::size_t> findAllOccurances(std::string data, std::string toSearch)
{
    std::vector<size_t> vec;
    size_t pos = data.find(toSearch);
    while( pos != std::string::npos)
    {
        vec.push_back(pos);
        pos =data.find(toSearch, pos + toSearch.size());
    }
    return vec;
}