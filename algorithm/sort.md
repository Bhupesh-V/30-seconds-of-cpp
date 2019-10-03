# sort

**Description :**  This function is implemented as Quick-sort. The complexity of it is O(N*log(N)).

**Pseudocode for quick sort**
quickSort(array, low, high)
    if (low < high)
        pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
partition (array, low, high)
    pivot = array[high];  
    i = (low - 1)
    for (j = low; j <= high- 1; j++)
        if (array[j] < pivot)
            i++;
            swap array[i] and array[j]
    swap array[i + 1] and array[high])
    return (i + 1)

**Example** :

```cpp   
    void show(int a[]) { 
        for(int i = 0; i < 10; ++i) 
            std::cout << a[i] << " "; 
    } 
  
    int main() {

        int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
        std::cout << "\n The array before sorting is : "; 
        show(a); 
  
        std::sort(a, a+10); 
  
        std::cout << "\n\n The array after sorting is : "; 
        show(a); 
  
        return 0; 
} 
```
**[Run Code](https://rextester.com/JJZQO18587)**
