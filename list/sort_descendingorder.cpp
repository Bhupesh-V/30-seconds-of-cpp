  int n; cin>>n; int arr[n];
  for(int i=0;i<n;i++)
   cin>>arr[i];
    // Sort the array in descending order 
    sort(arr, arr + n, greater<int>()); 
  
    // Print the sorted array 
    cout << "\nDescending Sorted Array:\n"; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    
