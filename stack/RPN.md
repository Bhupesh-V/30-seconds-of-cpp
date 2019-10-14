//Contributor: SudarshanHV
//Description: This is an implementation of the Reverse Polish Notation Algorithm, using stacks.
//It is one of the most standard applications of stack.
//The code is my implementation of a problem on SPOJ: ID 4; Transform The Expression.
//This will be a good application of the problem

#include <stdio.h>
#include <iostream>
#include <stack>
#include <queue>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    t++;
    for(int z=1;z<=t;z++)
    {
         string exp;
         getline(cin,exp);
         int i=0;
         while(exp[i]!='\0'&&exp[i]!=' ')
         {
         	i++;
         }
         if(z==1)continue;
         queue <char>q;
         stack <char>s;
         for(int j=0;j<i;j++)
         {
             if(exp[j]=='+'||exp[j]=='-'||exp[j]=='*'||exp[j]=='/'||exp[j]=='^')
             s.push(exp[j]);
             if(exp[j]==')')
             {
                 q.push(s.top());
                 s.pop();
             }
             if(int(exp[j])>=97&&int(exp[j])<=122)
             q.push(exp[j]);
         }
         
         while(q.empty()!=1)
         {
             printf("%c",q.front());
             q.pop();
         }
         printf("\n");
    }
}
