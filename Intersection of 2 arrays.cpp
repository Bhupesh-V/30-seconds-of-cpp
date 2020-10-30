#include<bits/stdc++.h>
using namespace std;

void intersect(int a[],int b[],int n){
	unordered_map<int,int>m;
	int c[n],k=0;
	for(int i=0;i<n;i++){
	m[a[i]]+=1;
	}
	for(int i=0;i<n;i++){
		if(m.count(b[i])){
			if(m[b[i]]>0){
				c[k]=b[i];
				k++;
			}
			m[b[i]]=m[b[i]]-1;
		}
	}
	sort(c,c+k);
	 cout<<"[";
    for(int i=0;i<k;i++)
        {
        cout<<c[i];
        if(i!=k-1) cout<<", ";
        }
        cout<<"]";
}
int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	intersect(a,b,n);
	return 0;
}
