/*
 Author : Aaryavrat Arora
 Date : 14/10/2019
 Time : 12:00 PM

 Description : adjacent_difference() function can be used to perform some operations on a range of iterators.
 It takes the iterator to initial and final positions of a sequence, iterator to the initial position of the
 destination sequence and an optional binary operation function.Without a binary operation function it performs difference operation on the
 adjacent elements of a sequence, and with a binary operation function passed as an argument it performs the operation in the
 the binary operation function

*/

#include<iostream>
#include<vector>
#include<numeric>
//A function performing addition binary operation.
int myfunction(int x, int y){
    return x + y;
}

int main(){
    //Pre-Populated vector

    std::vector<int> myvector = {1, 2, 3, 4, 5};
    std::vector<int> result(5);

    //without binary operation function
    std::adjacent_difference(myvector.begin(), myvector.end(), result.begin());
 
   //suppose {a1, a2, a3, a4, a5} are the elemnts of myvector, result vector will contain {a1, a2 - a1, a3 - a2, a4 - a3, a5 - a4}. 
   
   for(auto i: result){
        std::cout<<i<<" ";
    }

    //output - 1 1 1 1 1
    
    std::cout<<"\n";


    //with binary operation function passed

    std::adjacent_difference(myvector.begin(), myvector.end(), result.begin(), myfunction);

    //suppose {a1, a2, a3, a4, a5} are the elements of myvector, result vector will contain {a1, a2 + a1, a3 + a2, a4 + a3, a5 + a4}

    for(auto i: result){
        std::cout<<i<<" ";
    }

    //output - 1 3 5 7 9
}

