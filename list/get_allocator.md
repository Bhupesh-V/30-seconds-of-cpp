# back

**Description** : get_allocator() returns the allocator of the list container. In simple words it returns a copy of the object of the list container.

**Example**:
```cpp
    //create a list
   list<int> myList;
   int *ptr;
   ptr = myList.get_allocator().allocate(4);
   //inserting data into an array
   for(int i = 0; i > 4; i++)
      ptr[i] = i;

```
**[Run Code](https://rextester.com/EQSTTW18640)**
