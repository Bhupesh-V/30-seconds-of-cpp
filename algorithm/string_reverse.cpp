#include <bits/stdc++.h>
using namespace std;

string Reverse_str(string &str)
{
	stack<char> s;
	string q;
	for (int i = 0; i <str.length();++i)
	{
	 	s.push(str[i]);
	}
	 
	int i=0;
	while(!s.empty())
	{
	 	q[i]= s.top();
	 	cout<<q[i];
	 	s.pop();
	 	i++;
	}
	return q;
} 
int main()
{
	string str;
	cin>>str;
	string r=Reverse_str(str);
	cout<<r;
}