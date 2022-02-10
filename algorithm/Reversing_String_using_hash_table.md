# Reversing a string using hash table

**Description :** This program shows how to reverse a string using hash tables. This is also demonstrated using an example below.

**Example :**

```cpp

int main()
{
	char a[]="finding";
	cout<<"Original string is ";
	for(int i=0;a[i]!='\0';i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	int h[26] = {0},flag=-1;
	for(int i=0;a[i]!='\0';i++)
	{
		h[a[i]-97]+=1;;
	}
	for(int i=0;i<26;i++)
	{
		if(h[i]>1)
		{
			cout<<char(i+97)<<" appeared "<<h[i]<<" times"<<endl;
			flag=0;
		}
	}
	if(flag==-1)
	{
		cout<<"Nothing is duplicate in the string"<<endl;
	}
}

```

**[Run Code](https://rextester.com/TMYGZ92164)**
