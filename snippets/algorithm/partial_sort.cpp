/*
    Author : Italo Vinicius Pereira Guimaraes
    Date : 01/10/2020
    Time : 20:22
    Description : Selects n elements from a sequence
*/

#include <iostream> 
#include <vector> 
#include <algorithm> 

int main() { 
    // Imagine that is gonna happen a game, but the winners are just the first 4 that have the minor number
    std::vector<int> patients = { 5, 14, 12, 7, 3, 8, 10, 20, 21 }, i; 
  
    std::vector<int>::iterator ip; 
  
    // Using std::partial_sort just in 4 first numbers
    std::partial_sort(patients.begin(), patients.begin() + 4, patients.end()); 
  
    // Displaying the vector after applying 
    // std::partial_sort 
    std::cout<< "The winners are the first 4 of the vector: ";
    for (ip = patients.begin(); ip != patients.end(); ++ip) { 
        std::cout << *ip << " "; 
    } 
    std::cout<< "\n";
  
    return 0; 
}