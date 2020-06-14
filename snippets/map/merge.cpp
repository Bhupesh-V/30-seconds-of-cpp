/*
    Author : David Bezhanishvili
    Date : 14/06/2020
    Time : 19:30
    Description : demonstration of merge function of map
*/
#include <map>
#include <iostream>
#include <string>
 
int main()
{
    std::map<int, std::string> a {{1, "apple"}, {5, "pear"}, {10, "banana"}};
    std::map<int, std::string> b {{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
    std::map<int, std::string> c;

    c.merge(a);
    std::cout << "a.size(): " << a.size() << '\n';
    c.merge(b);
    
    std::cout << "b.size(): " << b.size() << '\n';
    std::cout << "b.at(5): " << b.at(5) << '\n';
    
    for(auto const &kv: c){
        std::cout << kv.first << ", " << kv.second << '\n';
    }
}
