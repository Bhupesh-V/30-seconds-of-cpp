# 30-Seconds-Of-STL
30 Seconds Of STL ( Standard Template Library in C++ ).

## Contents

### ``<algorithm>``

<details>  
<summary>View contents</summary>

* [`allof`](#allof)
* [`anyof`](#anyof)
* [`noneof`](#noneof)
* [`for_each`](#for_each)
* [`for_each_n`](#for_each_n)
* [`count`](#count)
* [`count_if`](#count_if)
* [`mismatch`](#mismatch)
* [`equal`](#equal)
* [`find`](#find)
* [`find_if`](#find_if)
* [`find_if_not`](#find_if_not)
* [`find_end`](#find_end)
* [`find_first_of`](#find_first_of)
* [`adjacent_find`](#adjacent_find)
* [`search`](#search)
* [`search_n`](#search_n)
* [`copy`](#copy)
* [`copy_if`](#copy_if)
* [`copy_n`](#copy_n)
* [`copy_backward`](#unary)
* [`move`](#unary)
* [`move_backward`](#unary)
* [`fill`](#unary)
* [`fill_n`](#unary)
* [`transform`](#unary)
* [`generate`](#generate)
* [`generate_n`](#unary)
* [`remove`](#unary)
* [`remove_if`](#unary)
* [`remove_copy`](#unary)
* [`remove_copy_if`](#unary)
* [`replace`](#unary)
* [`replace_if`](#unary)
* [`replace_copy`](#unary)
* [`replace_copy_if`](#unary)
* [`swap`](#unary)
* [`swap_ranges`](#unary)
* [`iter_swap`](#unary)
* [`reverse`](#unary)
* [`reverse_copy`](#unary)
* [`rotate`](#unary)
* [`rotate_copy`](#unary)
* [`random_shuffle`](#unary)
* [`shuffle`](#unary)
* [`unique`](#unary)
* [`unique_copy`](#unary)
* [`is_partitioned`](#unary)
* [`partition`](#unary)
* [`partition_copy`](#unary)
* [`stable_partition`](#unary)
* [`partition_point`](#unary)
* [`is_sorted`](#unary)
* [`is_sorted_until`](#unary)
* [`sort`](#unary)
* [`partial_sort`](#unary)
* [`partial_sort_copy`](#unary)
* [`stable_sort`](#unary)
* [`nth_element`](#unary)
* [`lower_bound`](#unary)
* [`upper_bound`](#unary)
* [`binary_search`](#unary)
* [`equal_range`](#unary)
* [`merge`](#unary)
* [`inplace_merge`](#unary)
* [`includes`](#unary)
* [`set_difference`](#unary)
* [`set_intersection`](#unary)
* [`set_symmetric_difference`](#unary)
* [`set_union`](#unary)
* [`is_heap`](#unary)
* [`is_heap_until`](#unary)
* [`make_heap`](#unary)
* [`push_heap`](#unary)
* [`pop_heap`](#unary)
* [`sort_heap`](#unary)
* [`clamp`](#unary)
* [`max`](#unary)
* [`max_element`](#unary)
* [`min`](#unary)
* [`min_element`](#unary)
* [`minimax`](#unary)
* [`minimax_element`](#unary)
* [`lexicographical_compare`](#unary)
* [`is_permutation`](#unary)
* [`next_permutation`](#unary)
* [`prev_permutation`](#unary)
</details>

### ``<stack>``
<details>
<summary>View contents</summary>

* [`push`](#push)
* [`pop`](#pop)
* [`top`](#top)
* [`swize`](#swize)
* [`swap`](#swap)
* [`empty`](#empty)
* [`emplace`](#emplace)
</details>

### ``<list>``
  
<details>
<summary>View contents</summary>

* [`ary`](#ary)
* [`call`](#call)
* [`collectInto`](#collectinto)
* [`flip`](#flip)
* [`over`](#over)
* [`overArgs`](#overargs)
* [`pipeAsyncFunctions`](#pipeasyncfunctions)
* [`pipeFunctions`](#pipefunctions)
* [`promisify`](#promisify)
* [`rearg`](#rearg)
* [`spreadOver`](#spreadover)
* [`unary`](#unary)
</details>

### ``<queue>``
  
<details>
<summary>View contents</summary>

* [`ary`](#ary)
* [`call`](#call)
* [`collectInto`](#collectinto)
* [`flip`](#flip)
* [`over`](#over)
* [`overArgs`](#overargs)
* [`pipeAsyncFunctions`](#pipeasyncfunctions)
* [`pipeFunctions`](#pipefunctions)
* [`promisify`](#promisify)
* [`rearg`](#rearg)
* [`spreadOver`](#spreadover)
* [`unary`](#unary)
</details>

### ``<vector>``
  
<details>
<summary>View contents</summary>

* [`ary`](#ary)
* [`call`](#call)
* [`collectInto`](#collectinto)
* [`flip`](#flip)
* [`over`](#over)
* [`overArgs`](#overargs)
* [`pipeAsyncFunctions`](#pipeasyncfunctions)
* [`pipeFunctions`](#pipefunctions)
* [`promisify`](#promisify)
* [`rearg`](#rearg)
* [`spreadOver`](#spreadover)
* [`unary`](#unary)
</details>

# count
**Description :** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

**Example** : 
```cpp
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // determine how many integers in a std::vector match a target value.
    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);
    cout << "number: " << target1 << " count: " << num_items1 << '\n';
 ```

# count_if
**Description** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

**Example**:
```cpp
    vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // use a lambda expression to count elements divisible by 3.
    int num_items3 = count_if(v.begin(), v.end(), [](int i){return i % 3 == 0;});
    cout << "number divisible by three: " << num_items3 << '\n';
```

# find
**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element equal to *value*).

**Example**:
```cpp
    vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };

    int searchme = 4;
    if(find(std::begin(v), std::end(v), searchme) != end(v)){
        cout <<"\n v conatins 3";
    }
    else
        cout<<"No match !!";
```
# find_if
**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element for which predicate/condition p returns *true*).

**Example**:
```cpp
    bool IsOdd (int i) {
    return ((i%2)==1);
    }

    int main(){
        vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        if(find_if(std::begin(v), std::end(v),IsOdd) != end(v)){
            cout <<"\n Odd Value Found";
        }
        else
            cout<<"No match !!";
        return 0;
    }
```

# find_if_not
**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element for which predicate q returns *false*).

**Example**:
```cpp
    bool IsOdd (int i) {
        return ((i%2)==1);
    }

    int main(){
        vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        if(find_if_not(std::begin(v), std::end(v),IsOdd) != end(v)){
            cout <<"\n First Even Value";
        }
        else
            cout<<"No match !!";
        return 0;
    }
```

# find_first_of
**Description** : Return iterator to the first element in the range [first, last) that is equal to an element from the range [s_first; s_last). If no such element is found, last is returned.(Searches the range [first, last) for any of the elements in the range [s_first, s_last) ).

**Example**:
```cpp
    std::vector<int> v{0, 2, 3, 25, 5};
    std::vector<int> t{3, 19, 10, 2};
 
    auto result = std::find_first_of(v.begin(), v.end(), t.begin(), t.end());
 
    if (result == v.end()) {
        std::cout << "no elements of v were equal to 3, 19, 10 or 2\n";
    } else {
        std::cout << "found a match at "
                  << std::distance(v.begin(), result) << "\n";
    }
```

# generate
**Description** : Used to generate numbers based upon a generator function, and then, it assigns those values to the elements in the container in the range [first, last).
The generator function has to be defined by the user, and it is called successively for assigning the numbers.

**Example**:
```cpp
    int gen() { 
        static int i = 0; 
        return ++i; 
    } 
  
    using namespace std; 
    int main() { 
        int i; 
        vector<int> v1(10); 
  
        std::generate(v1.begin(), v1.end(), gen); 
  
        vector<int>::iterator i1; 
        for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
            cout << *i1 << " "; 
        } 
        return 0; 
    } 
```

# push
**Description** : push() function is used to insert an element at the top of the stack. The element is added to the stack container and the size of the stack is increased by 1.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```

# pop
**Description** : pop() function is used to remove an element from the top of the stack(newest element in the stack). The element is removed to the stack container and the size of the stack is decreased by 1.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```

# empty
**Description** : empty() function is used to check if the stack container is empty or not.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```

# top
**Description** : top() function is used to reference the top(or the newest) element of the stack.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```