//Demonstrate count()
#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    // unordered map
    unordered_map<string , int> umap;

    // Inserting elements into the map
    umap.insert(make_pair("car" , 1));
    umap.insert(make_pair("truck" , 2));
    umap.insert(make_pair("bike" , 1));
    umap.insert(make_pair("auto" , 3));
    umap.insert(make_pair("scooty" ,2));

    // Check if element with key car is present using
    // count() function
    if(umap.count("car"))
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }

    return 0;
}
