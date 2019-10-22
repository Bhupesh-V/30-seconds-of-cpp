## Partition (used in merge sort)
##### **Description** : input is two iterators (start and end of the array) and output is the iterator of the pivot where all elements before it are smaller then it while all elements after it are larger than it. assuming that the last element in input data is the pivot. 
##### **Example** :
```cpp
template <typename T>
T med_pivot(T s,T m,T e)
{
    if(*s<*e)
    {
        if(*m<*s)   return s;
        if(*e<*m)   return e;

        return m;
    }
    if(*m<*e)   return e;
    if(*s<*m)   return s;

    return m;
}

template <typename T>		// Given starting and ending iterator 
T partition(T s,T e) 		// assuming pivot is the last element
{
    T temp = s, pivot = med_pivot(s,s + (e-s)/2,e-1);

    if(pivot != (e-1))  	// replace pivot with the last element
        *pivot+=*(e-1),    *(e-1)=*pivot-*(e-1),     *pivot-=*(e-1),    pivot = e-1;

    for(T it=s;it!=e;it++) 	// make the elements smaller than pivot be at left of pivot and the larger be at right of pivot
        if(*it<*pivot)
        {
            if(temp != it)  *temp+=*it,    *it=*temp-*it,     *temp-=*it; // replace "temp" content with "it" content
            temp++;
        }
    if(temp != pivot)   *temp+=*pivot,    *pivot=*temp-*pivot,     *temp-=*pivot; // replace temp content with pivot content

    return temp;    		// return pivot;
}
```
