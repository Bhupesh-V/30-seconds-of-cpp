# 30-Seconds-Of-STL
## 30 Seconds Of STL ( Standard Template Library in C++ )

<p align="center">
    <a href="https://github.com/Bhupesh-V/30-Seconds-Of-STL">
        <img src="https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/Logo/stl.png"  height="400" weight = "400"/>
    </a>
    <br>
    <strong>A collection of  STL features (functions/libraries) of C++  which can be learned in 30 seconds or less.</strong>
</p>


[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)
[![license](https://img.shields.io/badge/license-MIT-orange.svg?style=flat-square)](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/LICENSE)

## Contents

### ``<algorithm>``] 

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
* [`copy_backward`](#copy_backward)
* [`move`](#move)
* [`move_backward`](#move_backward)
* [`fill`](#fill)
* [`fill_n`](#fill_n)
* [`transform`](#transform)
* [`generate`](#generate)
* [`generate_n`](#generate_n)
* [`remove`](#remove)
* [`remove_if`](#remove_if)
* [`remove_copy`](#remove_copy)
* [`remove_copy_if`](#remove_copy_if)
* [`replace`](#replace)
* [`replace_if`](#replace_if)
* [`replace_copy`](#replace_copy)
* [`replace_copy_if`](#replace_copy_if)
* [`swap`](#swap)
* [`swap_ranges`](#swap_ranges)
* [`iter_swap`](#iter_swap)
* [`reverse`](#reverse)
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
* [`sort`](#sort)
* [`partial_sort`](#unary)
* [`partial_sort_copy`](#unary)
* [`stable_sort`](#unary)
* [`nth_element`](#unary)
* [`lower_bound`](#unary)
* [`upper_bound`](#unary)
* [`binary_search`](#binary_search)
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

### ``<stack>``]

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

* [`end`](#end-list)
* [`back`](#back-list)
* [`cend`](#cend-list)
* [`flip`](#flip)
* [`rend`](#rend)
* [`size`](#size-list)
* [`sort`](#sort-list)
* [`swap`](#swap-list)
* [`begin`](#begin-list)
* [`clear`](#clear-list)
* [`crend`](#crend)
* [`empty`](#empty-list)
* [`erase`](#erase-list)
* [`front`](#front-list)
* [`merge`](#merge-list)
* [`assign`](#assign-list)
* [`cbegin`](#cbegin)
* [`insert`](#insert)
* [`~list`](#~list)
* [`rbegin`](#rbegin)
* [`remove`](#remove)
* [`resize`](#resize)
* [`splice`](#splice-list)
* [`unique`](#unique)
* [`crbegin`](#crbegin)
* [`emplace`](#emplace-list)
* [`reverse`](#reverse-list)
* [`max_size`](#max_size-list)
* [`pop_back`](#pop_back-list)
* [`pop_front`](#pop_front-list)
* [`push_back`](#push_back-list)
* [`emplace_back`](#emplace_back)
* [`get_allocator`](#get_allocator)
</details>

### ``<queue>``]
  
<details>
<summary>View contents</summary>

* [`pop`](#pop-queue)
* [`back`](#back-queue)
* [`push`](#push-queue)
* [`size`](#size-queue)
* [`swap`](#swap-queue)
* [`empty`](#empty-queue)
* [`front`](#front-queue)
* [`emplace`](#emplace-queue)
* [`queue`](#queue)
* [`~queue`](#~queue)
</details>

### ``<vector>``
  
<details>
<summary>View contents</summary>

* [`at`](#at-vector)
* [`end`](#end-vector)
* [`back`](#back-vector)
* [`cend`](#cend-vector)
* [`data`](#data-vector)
* [`rend`](#rend-vector)
* [`size`](#size-vector)
* [`swap`](#swap-vector)
* [`begin`](#begin-vector)
* [`clear`](#clear-vector)
* [`crend`](#crend-vector)
* [`empty`](#empty-vector)
* [`erase`](#erase-vector)
* [`front`](#front-vector)
* [`assign`](#assign-vector)
* [`cbegin`](#cbegin-vector)
* [`insert`](#insert-vector)
* [`rbegin`](#rbegin-vector)
* [`resize`](#resize-vector)
* [`vector`](#vector)
* [`crbegin`](#crbegin-vector)
* [`emplace`](#emplace-vector)
* [`reserve`](#reserve-vector)
* [`~vector`](#~vector)
* [`capacity`](#capacity-vector)
* [`max_size`](#max_size-vector)
* [`pop_back`](#pop_back-vector)
* [`emplace_back`](#emplace_back-vector)
* [`get_allocator`](#get_allocator-vector)
* [`shrink_to_fit`](#shrink_to_fit-vector)
</details>



### algorithm
To learn about <algorithm>. Go [here](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/algorithm.md)

### stack
To learn about <stack>. Go [here](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/stack.md)

### list
To learn about <list>. Go [here](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/list.md)

### queue
To learn about <queue>. Go [here](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/queue.md)

### vector
To learn about <vector>. Go [here](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/vector.md)


### License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE) file for details

### Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.
