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
* [`generate`](#unary)
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

#count
**Description :** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to value).

**Example** : 
```cpp

    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // determine how many integers in a std::vector match a target value.
    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);
    cout << "number: " << target1 << " count: " << num_items1 << '\n';
 
```

#count_if
**Description** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to value).

**Example ** :
```cpp
std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
// use a lambda expression to count elements divisible by 3.
int num_items3 = count_if(v.begin(), v.end(), [](int i){return i % 3 == 0;});
cout << "number divisible by three: " << num_items3 << '\n';
```