/*
    Author : Jordan Mingus
    Date : 06/05/2019
    Time : 03:50
    Description : Showcase std::vector::insert to insert numbers into a vector.
*/

#include <iostream>
#include <vector>
 
void print(const std::vector<int>& vec){
    std::cout << '{';
    for (auto x: vec) {
        std::cout << ' ' << x;
    }
    std::cout << " }" << std::endl;
}
 
int main (){
    //Variables, change these to 
    int insertPosition = 1; //Where in the vector it inser starting at 0.
    int number = 42; //Number to be inserted into the vector.
    int repeats = 3; //Number of time the number will be inserted into the vector.
    
    //setup example vector
    std::vector<int> example = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print(example);
    
    //insert with 2 inputs.
    example.insert(example.begin() + insertPosition, number);
    print(example);
    
    //reset example vector
    example = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print(example);
    
    //insert with 3 inputs.
    example.insert(example.begin() + insertPosition, repeats, number);
    print(example);
}