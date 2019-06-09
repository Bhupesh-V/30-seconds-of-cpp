// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Luis Malicay
    Date : 07/06/2019
    Time : 2:25 PM
    Description : Test if the map container is empty
*/
#include <iostream>
#include <map>
#include <string>

// Output message depending on bool value
void results(bool testVal){
    if(testVal){
        std::cout << "Map is empty!" << std::endl;
    }
    else{
        std::cout << "Map is not empty!" << std::endl;
    }
}

int main(){
    // Create an empty map and a map with elements in it
    std::map<std::string, int> map1;
    std::map<std::string, int> map2;

    map1["John"] = 93;
    map1["Jake"] = 95;
    map1["Jack"] = 91;

    // Test the two map containers and output results
    bool m1 = map1.empty();
    bool m2 = map2.empty();
    results(m1);
    results(m2);

    return 0;
}