DESCRIPTION:
1. rbegin() function returns an REVERSE iterator pointing towards the last element of the vector.
2. Can be used to iterate a vector in reverse order.

void using_rbegin(){

    vector<int> vec;
    for(int i=0;i<5;i++)
    	vec.push_back(i);

    cout<<"ORIGINAL VECTOR"<<endl;
    for(int i=0;i<5;i++)
    	cout<<vec[i]<<" ";
    cout<<endl;
    
    cout<<"PRINTING REVERSE ARRAY USING rbegin() function"<<endl;
    for(auto it=vec.rbegin();it!=vec.rend();it++)
    	cout<<*it<<" ";
    cout<<endl;

    /*
    OUTPUT:
    ORIGINAL VECTOR
	  0 1 2 3 4 
	  PRINTING REVERSE ARRAY USING rbegin() function
	  4 3 2 1 0 
	  */
}
