//Checking if all elements are same
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //no of elements
    cin>>n;//taking input
    int ip[n+1];
    set<int> unq;
    for(int i=1;i<=n;i++)
    {
        cin>>ip[i];
        unq.insert(ip[i]);
    }
    if(unq.size()==1)
    cout<<"All"<<n<<" Element are same"<<endl;
    else
    cout<<"Different Elements Present"<<endl;
}