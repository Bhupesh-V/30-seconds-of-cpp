/*
    Author : Sarah Leon
    Date : Date format 06/03/2020
    Time : Time format 15:48
    Description : Assigns values to the first n elements in a given sequence. Values are determined by a passed function.
*/

#include <iostream>
#include <algorithm>


//function to generate values
int value = 0;
int assignNumber() {
    return ++value * value;
}

int main() {

    //initialize empty array
    int newArray[10];

    //call method to fill array
    std::generate_n(newArray, 10, assignNumber);

    //print filled array
    std::cout << "The array values are:";
    for (int i = 0; i < 10; ++i){
        std::cout << " " << newArray[i];
    }

    return 0;
}
