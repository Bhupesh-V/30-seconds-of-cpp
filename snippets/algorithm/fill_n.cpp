/*
    Author : Italo Vinicius
    Date   : 02/10/2019
    Time   : 22:30
    Description : Can fill in specific positions a specific number.
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

    //But i want to put number 3 four times starting in the first position
    std::fill_n(v.begin(), 4, 3);

    //And i want to put number 9 in three final positions
    std::fill_n(v.begin()+7, 3, 9);

    for(int i = 0;i<10;i++){
        std::cout<< v[i] << " ";
    }
    std::cout<< "\n";
    
    return 0;
}