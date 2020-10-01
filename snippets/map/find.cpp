// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Italo Vinicius
    Date : 01/10/2020
    Time : 17:29 PM
    Description : Demonstrate the function find of STL map
*/
#include <iostream>
#include <map>
#include <string>

int main(){
    // Create container and insert values
    std::map<std::string, float> heights;
    heights.insert({"Italo", 1.81});
    heights.insert({"Carol", 1.69});
    heights.insert({"Julia", 1.89});
    heights.insert({"Fernando", 1.92});

    // Print the height of Italo
    std::cout << "Italo height = " << heights.find("Italo")->second<< " m" << '\n';
    

    return 0;
}