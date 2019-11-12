/*
    Author : Rishabh Arora
    Date   : 14/10/2019
    Time   : 21:42
    Description :  The function returns a constant iterator to the reverse end of the sequence.

*/

#include <iostream>
#include <vector>

int main(){
    //Declaring a vector
    std::vector<int> vectorSample;

    //Inititializing the vector
    vectorSample.push_back(10);
    vectorSample.push_back(20);
    vectorSample.push_back(30);
    vectorSample.push_back(40);
    vectorSample.push_back(50);

    //Printing the vector using crend() to point to the
    //beginning of the vector
    std::cout << "Contents of the vector:" << std::endl;
    for (auto itr = vectorSample.crend();itr >= vectorSample.crbegin(); --itr){
        std::cout << *itr << std::endl;
    }
    return 0;
}
