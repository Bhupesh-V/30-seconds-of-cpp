#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    vector<int> num;
    num.push_back(10);
    num.push_back(15);
    num.push_back(20);
    cout << accumulate(num.begin(),num.end(),0);
}
