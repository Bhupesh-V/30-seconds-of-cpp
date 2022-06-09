#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    
    // declares two empty maps. O(1)
    std::unordered_map<std::string, uint32_t> colors_map;
    std::unordered_map<std::string, uint32_t> grocery_map;

    // inserting elements in an unordered_map with O(1) time on average.
    colors_map.insert({"Blue", 65280});
    colors_map.insert({"Green", 16711680});
    colors_map.insert({"Red", 4278190080});

    grocery_map.insert({"Apple", 1});
    grocery_map.insert({"Milk", 2});

    // swap the contents of colors_map and grocery_map
    colors_map.swap(grocery_map);

    std::cout << "colors_map value at \"Apple\": "
    << colors_map.at("Apple") << std::endl;

    std::cout << "grocery_map value at \"Green\": "
    << grocery_map.at("Green") << std::endl;

}