DESCRIPTION:
1. Used to get the next smaller permutation as compared to the array/vector passed as a  parameter.
2. Returns a boolean value.
3. If the next smaller permutation exists, it changes the array and returns a true. Else, it returns a false.
4. The complexity of the function is O(n) where n is the number of elements in the array.

void using_prev_permutation()
{

    ///USING ARRAYS
    int arr[3];
    for(int i=2;i>=0;i--)
    	arr[i]=i;

    do{
    	///PRINTS THE PERMUTATION
    	for(int i=0;i<3;i++)
    		cout<<arr[i]<<" ";
    	cout<<endl;

    }while(prev_permutation(arr,arr+3));	///CHANGES THE ARRAY TO THE NEXT GREATER PERMUTATION

    /*
    OUTPUT: 
    2 1 0
    2 0 1
    1 2 0
    1 0 2
    0 2 1
    0 1 2
    */
    ///USING VECTORS
    vector<int> vec;
    for(int i=2;i>=0;i--)
    	vec.push_back(i);
     do{
    	///PRINTS THE PERMUTATION
    	for(int i=0;i<3;i++)
    		cout<<vec[i]<<" ";
    	cout<<endl;
    }while(prev_permutation(vec.begin(),vec.end()));	///CHANGES THE VECTOR TO THE NEXT GREATER PERMUTATION
    
    /*
    OUTPUT: 
    2 1 0
    2 0 1
    1 2 0
    1 0 2
    0 2 1
    0 1 2
    */
}
