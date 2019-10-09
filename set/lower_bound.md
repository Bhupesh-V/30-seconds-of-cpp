DESCRIPTION:
1. lower_bound() is used to get the lower bound of a given element in the set.
2. lower_bound function returns an iterator pointing towards the first element that is greater than or equal to the element passed as the parameter
3. The complexity of the algorithm is O(logN) where N is the number of elements in the set.

void using_set_lower_bound()
{ 
    set<int> S;
    for(int i=0;i<10;i+=2)
    	S.insert(i);

    ///PRINT SET
    for(auto it=S.begin();it!=S.end();it++)
    	cout<<*it<<" ";
    cout<<endl;
   	/*
   	OUTPUT:
   	0 2 4 6 8
   	*/

   	//USING lower_bound
   	auto it = S.lower_bound(4);
   	cout<<*it<<endl;
   	/*
   	OUTPUT:
   	4
   	*/
   	it = S.lower_bound(7);
   	cout<<*it<<endl;
   	/*
   	OUTPUT:
   	8
   	*/
}
