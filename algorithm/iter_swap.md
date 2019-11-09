# iter_swap

**Description :**  Swaps the values of the objects pointed to by two iterators..
  
**Example** :

```cpp
    int array1[] = {10, 20, 30, 40, 50};
    std:: vector<int> vector1{60, 70, 80, 90};
    std:: iter_swap(array1, vector1.begin());		//array1: [60] 20 30 40 50
    							//vector1: [10] 70 80 90

  	std::iter_swap(array1 + 3, vector1.begin() + 2);	//array1: 60 20 30 [80] 50
  								//vector1: 10 70 [40] 90

  	std::cout<<"vector1 contains:"<<'\n';
  	for(std::vector<int> ::iterator it = vector1.begin(); it < vector1.end(); ++it)
	{
  		std::cout<<*it<<" ";
	}

  	std::cout<<'\n';
```

**[Run Code](https://rextester.com/WXQUT76012)**

---
