//Demonstrating at()

#include <iostream>
#include <unordered_map>

int main() {
    //Declaring an empty unordered_map
    std::unordered_map<char, int> mymap;

    //Inserting elements into mymap
    mymap.insert({'A',1});
    mymap.insert({'B',2});
    mymap.insert({'C',3});
    mymap.insert({'D',4});

    //Accessing the elements using at()
    std::cout << mymap.at('B') << std::endl;  //Prints 2

    //Modifying the element using at()
    mymap.at('B') = 5;
    mymap.at('D') += 3;
    
    //Accessing the elements using at() after modifying
    std::cout << mymap.at('B') << std::endl;  //Prints 5
    std::cout << mymap.at('D') << std::endl;  //Prints 7

    return 0;
}

