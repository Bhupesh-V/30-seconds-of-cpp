
# Heading
//Demonstrates at() function on unordered maps
#include <iostream>
#include <unordered_map>

int main() {
    //the time complexity for declaring an unordered map on average ~O(1)
    std::unordered_map<std::string, std::string> flowers;

    //the time complexity for insertion on average ~O(1)
    flowers.insert({"Rose", "red"});
    flowers.insert({"Lily", "white"});
    flowers.insert({"Sunflower", "yellow"});

    std::cout << "The color of a rose is " << flowers.at("Rose") << std::endl;
    std::cout << "The color of a lily is " << flowers.at("Lily") << std::endl;

    //if at() is attempted on a nonexistent key, an out_of_range exception is thrown
    try {
        std::cout << flowers.at("Hibiscus");
    }
    catch (std::out_of_range& e) {
        std::cout << "The hibiscus flower does not exist in the flowers map";
    }
    return 0;
}
