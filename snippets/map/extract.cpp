/*
    Author : David Bezhanishvili
    Date : 14/06/2020
    Time : 22:30
    Description : demonstration of merge function of map
*/
#include <map>
#include <iostream>
#include <string>

int main()
{
    std::map<int, std::string> m{{2, "papaya"}, {1, "mango"}, {3, "guava"}};
    auto nh = m.extract(2);
    nh.key() = 4;
    m.insert(move(nh));
    for(auto const &kv: m){
        std::cout << kv.first << ", " << kv.second << '\n';
    }
}
