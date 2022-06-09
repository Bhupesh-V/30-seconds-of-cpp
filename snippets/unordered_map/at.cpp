/*
    Author : Adriel Bustamante
    Date : 06/06/2022
    Time : 18:00
    Description : Example of unordered_map::at().
*/

#include <iostream>
#include <string>
#include <unordered_map>

int main(){
    // declares an empty map. O(1)
    std::unordered_map<std::string, uint32_t> my_map;

    // inserting an element in an unordered_map with O(1) time on average.
    my_map.insert({"Blue", 65280});
    my_map.insert({"Green", 16711680});
    my_map.insert({"Red", 4278190080});

    // Get the element at key "Blue"
    std::cout << "Element at key \"Blue\": " <<
    my_map.at("Blue") << std::endl;

    // Try to get the element at non-existent key "Purple"
    try{
        std::cout << "Element at key \"Purple\": " <<
        my_map.at("Purple") << std::endl;
    }
    // Catch the out_of_range exception
    catch(std::out_of_range){
        std::cout << "No such element at key \"Purple\"!" << std::endl;
    }
}