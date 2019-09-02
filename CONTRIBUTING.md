
## Welcome :smile:
### To start contributing, follow these steps :point_down::

1. [Star](https://help.github.com/en/articles/about-stars) :star: the repository.
2. [Fork](https://help.github.com/en/articles/fork-a-repo) :fork_and_knife: it.
3. Create [Branch](https://help.github.com/en/articles/about-branches) :herb: with your feature `<feature>`.
4. [Push](https://help.github.com/en/articles/pushing-to-a-remote) changes.
5. Submit [Pull Request](https://help.github.com/en/articles/about-pull-requests) :smile:.
6. Make PR(s) in either `snippets` directory or in one of the following :
   - [algorithm](https://github.com/Bhupesh-V/30-seconds-of-cpp/tree/master/algorithm)
   - [list](https://github.com/Bhupesh-V/30-seconds-of-cpp/tree/master/list)
   - [stack](https://github.com/Bhupesh-V/30-seconds-of-cpp/tree/master/stack)
   - [map](https://github.com/Bhupesh-V/30-seconds-of-cpp/tree/master/map)
   - [vector](https://github.com/Bhupesh-V/30-seconds-of-cpp/tree/master/vector)
   - [queue](https://github.com/Bhupesh-V/30-seconds-of-cpp/tree/master/queue)
7. If you are feeling confused on what to contribute, head over to [Projects](https://github.com/Bhupesh-V/30-seconds-of-cpp/projects), select the directory you want to contribute to for e.g choose `<algorithm>` & from the **Algorithms To Implement** column select any one method.You can either submit a small C++ code snippet demonstrating the same in the `snippets` directory or submit a overview of the choosen method in `<name_of_directory>` see for example [all_of.md](https://github.com/Bhupesh-V/30-seconds-of-cpp/blob/master/algorithm/all_of.md).
8. Always follow the style guide(see below).
9. Do not update any `README` or `todo.txt` files (unless you find a typo :sweat_smile:)
9. Enjoy contributing :yum:.
10. If you have any doubts, open a [issue](https://github.com/Bhupesh-V/30-seconds-of-cpp/issues/new). 

For adding functions in different directories, use the following template (copy from raw format): 


---
# name

**Description :**  < description >.
  
**Example** :

```cpp
    // YOUR CODE
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // determine how many integers in a std::vector match a target value.
    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);
    std::cout << "number: " << target1 << " count: " << num_items1 << '\n';
```
**[See Sample code](snippets/vector/example.cpp)**<br>
**[Run Code](https://rextester.com/ABC)**

---

# Style Guide
Follow this style guide to add sample programs:

1. Naming Style: 
   For example if you are demonstrating `erase` in `list` name your file **`erase.md`** and save it in the `list` directory.

2. For adding Code Snippets in the [`snippets`](https://github.com/Bhupesh-V/30-Seconds-of-cpp/snippets/) directory.
   Add the following comment header in every program. The comment header should always be at the top of program.
```cpp
/*
    Author : this must be your name ;)
    Date : Date format dd/mm/yyyy
    Time : Time format hh:mm
    Description : description should be small & one liner.
*/
```
 

3. Add Opening braces on the same line.
```cpp
    int main()
    {
                            // ❌
    }

    int main(){
                            // ✅.
    }
```

4. Indentation : 
    Use **1 Tab** or **4 Spaces**. Be consistent with whatever you choose
    Use only one indenting format for the whole program.

5. Add appropriate comments wherever necessary to explain the code.
> Programs wth NO Comments at all will not be merged.

6. Expression should be readable, Use 1 space between different TOKENS.
```cpp 
    galaxy=stars+asteroids          // ❌
    galaxy = stars + asteroids      // ✅.
```

7. Always add braces in a for/while loop, even if it's a one-liner.
```cpp    
    for(int i=0;i<45;i++)
        cout<<i<<" ";               // ❌
    
    for(int i=0;i<45;i++){
        cout<<i<<" ";               // ✅.
    }
```
8. Always use pre-increment(++i) while looping instead of post-increment(i++).

9. When submitting `markdown` files of methods in different directories, name your file exactly as the function/method name. For example `push_back.md`, `swap.md` etc.

10. Always use prefix ```std::``` for functions and types from the std namespace, either on the `markdown` files and on the snippets files.
```cpp 
    using namespace std; 
    vector<int> ...;       // ❌
    cout << ...;           // ❌

    std::vector<int> ...;  // ✅
    std::cout << ...;      // ✅
```

