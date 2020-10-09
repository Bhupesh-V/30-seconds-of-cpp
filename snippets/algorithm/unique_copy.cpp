/*
    Author : Eduardo Magalhaes
    Date : 09/10/2020
    Time : 14:24
    Description : Copies the elements in the range [first,last) to the range beginning at result, except consecutive duplicates (elements that compare equal to the element preceding).
*/

#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
 
int main() {
    std::string s1 = "The      string    with many       spaces!";
    std::cout << "before: " << s1 << '\n';
 
    std::string s2;
    std::unique_copy(s1.begin(), s1.end(), std::back_inserter(s2),
                     [](char c1, char c2){ return c1 == ' ' && c2 == ' '; });
 
    std::cout << "after:  " << s2 << '\n';
}