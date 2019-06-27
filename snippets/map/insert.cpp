// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Luis Malicay
    Date : 06/06/2019
    Time : 12:43 PM
    Description : Demonstrate the insert key value pair of STL map
*/
#include <iostream>
#include <map>
#include <string>

int main(){
    // Create container and insert values
    std::map<std::string, int> grades;
    grades.insert({"John", 98});
    grades.insert({"Joe", 95});
    grades.insert({"Sally", 97});
    grades.insert({"Jane", 96});

    // Print contents of map
    std::cout << "Key\tValue\n";
    for(auto i = grades.begin(); i != grades.end(); ++i){
        std::cout << i->first << '\t'
                  << i->second << '\n';
    }

    return 0;
}
[RUN CODE]( https://rextester.com/WHE7428)
           
