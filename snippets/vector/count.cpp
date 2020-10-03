/*
    Author : Rajvir Singh
    Date   : 03/10/2020
    Time   : 19:45
    Description : It helps in counting the occurences of an element in a vector
*/



#include<bits/stdc++.h>
int main(){
    std::vector<int> v;
    
    // Initialize vector with the values {2,4,5,6,7,8,9,7,9,7,9,5,4,9,8}
    v = {2,4,5,6,7,8,9,7,9,7,9,5,4,9,8};
    
    // Output: "2 4 5 6 7 8 9 7 9 7 9 5 4 9 8" 
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // variable to store the count the frequency of 9 
    int f=0;
    // the count function in use 
    f = count(v.begin(),v.end(),9); 


    // Output is  4 
        std::cout << f << " ";
    
    std::cout << std::endl;

    return 0;
}
