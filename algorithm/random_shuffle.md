DESCRIPTION:
1. random_shuffle() is used to generate random permutations of an array/vector passed as a parameter.
2. Does not return anything.

void using_random_shuffle()
{
	  srand(time(0));	///FOR GENERATING RANDOM SEED

    ///USING random_shuffle function with an array
    int arr[5];
    for(int i=0;i<5;i++)
    	arr[i]=i;

    ///USING random_shuffle(arr,arr+N)
    random_shuffle(arr,arr+5);

    for(int i=0;i<5;i++)
    	cout<<arr[i]<<" ";
    cout<<endl;
    /*
    OUTPUT:
    2 1 4 3 0 
    */

    ///USING random_shuffle function with a vector
    vector<int> vec;
    for(int i=0;i<5;i++)
    	vec.push_back(i);

    ///USING random_shuffle(vec.begin(),vec.end())
    random_shuffle(vec.begin(),vec.end());

    for(int i=0;i<5;i++)
    	cout<<vec[i]<<" ";
    cout<<endl;

    /*
    OUTPUT:
    3 0 4 2 1
    */

}
