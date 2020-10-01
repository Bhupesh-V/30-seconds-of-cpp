#include<iostream>
#include<set>
#include<map>
using namespace std;
//in this is problem we have a number 'n' which is predefined or user input. We have to determine the number 'n' is present in given number ranges or not.
void powerOfStl()
{
//     {x,y}
// add[2,3]
// add[30,400]
// add[401,450]
// give the interval in which 13 is present
    set< pair<int,int>> S;
    S.insert({2,3});
    S.insert({10,20});
    S.insert({30,400});
    S.insert({401,450});
    //pair (a,c) is smaller than pair (b,d) iff a<b or (a==b and c<d) eg: {2,3}<{10,20}
    //in this way we can find the order in which pairs are present in set
    //in above example order is {2,3},{10,20},{30,400},{401,450}
    int point=401;
    auto itr = S.upper_bound({point,__INT_MAX__});//the second term in the pair should be large enough to search in the given pairs intervals
    
    if(itr==S.begin())
    {
        cout<<"Given point doesn't lie in any interval ";
        return;
    }
    itr--;
    
    pair<int,int> current= *itr;
    if(current.first<=point && point<=current.second)
    {
        cout<<"Yes it's present "<<current.first<<" "<<current.second;
    }else{
        cout<<"Given point doesn't lie in any interval";
    }
    //the above operation is done in O(logN) time
}
int main()
{
    // C++ STL
    powerOfStl();
}
