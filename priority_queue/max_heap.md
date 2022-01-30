// program that checks if priority_queue is a Max Heap

   std::priority_queue<int> my;
    //load priority_queue with elements 
    my.push(2);
    my.push(10);
    my.push(4);
    my.push(6);
    my.push(8);

    // iterates entire queue and one by one extracts items from max heap
    while (!my.empty()) 
    {
      std::cout << my.top() << " ";
        my.pop();
     }
  
    return 0;
  
  //exspected output should be "10 8 6 4 2" 
