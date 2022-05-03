# Bubble sort

**Description :** Simplest sorting algorthim that works by comparing consecutive items and replaces the bigger number to the righ until highest number is at the end of the list and does it until all items are in the correct order.

**Example** :
```cpp
def bubble_sort(list):
    n = len(list)

    for i in range(n-1):
        for j in range(n-1):
            if list[j] > list[j+1]: 
                tmp = list[j]
                list[j] = list[j+1]
                list[j+1] = tmp

    return list
   

int main() {
    list = [100,4,5,6]
    bubble_sort(list)
    print(list)
                            
    }
```
