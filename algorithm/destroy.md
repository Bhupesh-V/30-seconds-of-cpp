# destroy

**Description :** Destroys the objects in the range [first, last], as if by
```
for (; first != last; ++first)
  std::destroy_at(std::addressof(*first));

  ```
If executed according to policy. This overload does not participate in overload resolution unless
```
std::is_execution_policy_v<std::decay_t<ExecutionPolicy>> (until C++20) 
std::is_execution_policy_v<std::remove_cvref_t<ExecutionPolicy>> (since C++20) is true.
  ```

**Parameters :**

first, last	-	the range of elements to destroy
policy	-	the execution policy to use.

The following example demonstrates how to use destroy to destroy a contiguous sequence of elements.

**Example** :
```cpp
#include <memory>
#include <new>
#include <iostream>
 
struct Tracer {
    int value;
    ~Tracer() { std::cout << value << " destructed\n"; }
};
 
int main(){
    alignas(Tracer) unsigned char buffer[sizeof(Tracer) * 8];
 
    for (int i = 0; i < 8; ++i)
        new(buffer + sizeof(Tracer) * i) Tracer{i}; //manually construct objects
 
    auto ptr = std::launder(reinterpret_cast<Tracer*>(buffer));
 
    std::destroy(ptr, ptr + 8);
}
```
**[Run Code](https://coliru.stacked-crooked.com/a/85dc7ed44d845c7a)**