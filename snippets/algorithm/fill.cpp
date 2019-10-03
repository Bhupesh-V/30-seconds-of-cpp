/*
    Author : Italo Vincius
    Date   : 01/10/2019
    Time   : 21:00 
    Description : Returns a ordered vector in increasing or decreasing order.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v(10);

    //Lets print what we have in the vector
    for(int i = 0;i<10;i++){
        std::cout<< v[i] << " ";
    }
    std::cout<< "\n";

    //But i want to put number 8 five times starting in the fourth position
    std::fill(v.begin()+3, v.end() - 1, 8);

    //Print the changes in the vector

    for(int i = 0;i<10;i++){
        std::cout<< v[i] << " ";
    }
    std::cout<< "\n";

	return 0;
}