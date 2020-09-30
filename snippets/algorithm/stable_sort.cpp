#include<bits/stdc++.h>

int main(){
    //sample array
    int ar[] = {1,1,3,5,4,9,4};

    //sorting the array
    std::stable_sort(ar,ar+7);

    //array after sorting
    for(int i = 0;i < 7;i++){
        std::cout << ar[i] << " ";
    }
    //outputs 1 1 3 4 4 5 9
    return 0;
}
