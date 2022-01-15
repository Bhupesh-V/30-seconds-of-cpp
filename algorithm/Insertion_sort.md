# Insertion_Sort

**Description :** Insertion sort is an in-place, comparison based sorting algorithm. It always keeps the lower part of an array in the sorted order, a new element will be inserted in the sorted part at an appropriate place. The algorithm searches sequentially, move the elements and inserts the new element in the array.

**Example :**

```cpp

int main()
{
	int a[]={10,5,15,20,11,7},temp,j;
	cout<<"Unsorted array"<<endl;
	cout<<"************************"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<6;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<"\nSorted array"<<endl;
	cout<<"************************"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
}
```

**[Run Code](https://rextester.com/VJH10838)**
