# priority_queue

**Description :** Priority queues are a type of container, specifically designed such that its first element is always the greatest of the elements.After deleting or inserting into the queue the queue rearranges itself to have the greatest element at the start.There is no ordering among the other elements only the first element is the largest ( hence different from reverse sorting as this is faster in case of upadating and finding largest).

**Example** :

``` cpp

#include <iostream>
#include <queue>
#include <vector>
#include <functional>

int main ()
{
  std::array<int, 4> myints = {10, 60, 50, 20};
  std::vector<int> arr =  {1, 2, 3, 4};
  
  //empty queue
  std::priority_queue<int> first;
  
  //queue creation using array as input
  std::priority_queue<int> second (myints.begin(), myints.end());
  
  //queue creation from vector
  std::priority_queue<int> third (arr.begin(), arr.end());

  // greater int is used to make this queue order in the opposite sense i.e the top element now is the smallest.
  std::priority_queue<int, std::vector<int>, std::greater<int> > fourth (myints.begin(), myints.end());
  
  return 0;
}

```

**[Run Code](https://rextester.com/WNCHA7591)