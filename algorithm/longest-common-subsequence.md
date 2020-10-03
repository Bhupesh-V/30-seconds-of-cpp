# longest_common_subsequence

**Description :** The longest common subsequence (LCS) is the algorithm used to find the longest subsequence common to all sequences in a set of sequences.
The prototype for longest common subsequence is :
```
longest_common_subsequence(first sequence, second sequence)
'''
**Example** :
```cpp
#include<iostream>
#include<cstring>
using namespace std;

void lcs(char *x , int l1, char *y, int l2)
{
  int c[l1+1][l2+1] = {0};
  char d[l1+1][l2+1] ;
  for(int i=0;i<=l1;i++)
  {
    for(int j=0;j<=l2;j++)
    {
      if(i==0 || j==0)
      {
        c[i][j] = 0;
        d[i][j] = 'O';
      }
      else if(x[i-1] != y[j-1])
      {
        if(c[i-1][j] > c[i][j-1])
        {
          c[i][j] = c[i-1][j];
          d[i][j] = 'L';
        }
        else
        {
          c[i][j] = c[i][j-1];
          d[i][j] = 'U';
        }
      }
      else
      {
        c[i][j] = c[i-1][j-1] + 1;
        d[i][j] = 'D';
      }
    }
  }
  cout<<"Matrix C : "<<endl;
  for(int i=0;i<=l1;i++)
  {
    for(int j=0;j<=l2;j++)
    {
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"\nMatrix D : "<<endl;
  for(int i=0;i<=l1;i++)
  {
    for(int j=0;j<=l2;j++)
    {
      cout<<d[i][j]<<" ";
    }
    cout<<endl;
  }

  char ans[10];
  int index =0;

  cout<<"\nLCS : ";
  int i = l1;
  int j=l2;
  while(i>0 && j >0)
  {
    if(d[i][j]== 'D')
    {
      ans[index]=x[i-1];
      i=i-1;
      j=j-1;
      index = index+1;
    }
    else if(d[i][j]== 'U')
    {
      i=i-1;
    }
    else if(d[i][j]=='L')
    {
      j=j-1;
    }
  }
  int ans_len = strlen(ans)-1;
  while(ans_len >=0)
  {
    cout<<ans[ans_len];
    ans_len--;
  }
}


int main()
{
  char X[] = {'B','D','C','A','B','A'};
  char Y[] = {'A','B','C','B','D','A','B'};
  int len_x = sizeof(X);
  int len_y = sizeof(Y);
  lcs(X,len_x,Y,len_y);
  return 0;
}
'''
