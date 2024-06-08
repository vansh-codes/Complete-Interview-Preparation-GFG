## Function pointers

In this video, we discuss function pointers in C and C++, their advantages, and applications. Function pointers allow us to store the address of a function and pass functionality as an argument to other functions, enabling flexible and reusable code. We also explore coding examples to demonstrate the use of function pointers.

### Code Examples

#### Basic Function Pointer Example
```cpp
#include <iostream>
using namespace std;

// Simple function to print "Gfg" on the screen
void fun() {
    cout << "Gfg" << endl;
}

int main() {
    // Creating a function pointer
    void (*fun_ptr)() = &fun;   // & is optional

    // Calling the function using the function pointer
    fun_ptr();

    // Alternative way to call the function
    (*fun_ptr)();

    // Using auto to simplify the function pointer declaration
    auto fun_ptr_auto = fun;
    fun_ptr_auto();

    return 0;
}
```

#### Function Pointer with Parameters Example
```cpp
#include <iostream>
using namespace std;

// Function to sum two integers
int add(int x, int y) {
    return x + y;
}

int main() {
    // Using auto to create a function pointer
    auto fun_ptr = add;

    // Calling the function using the function pointer
    int result = fun_ptr(10, 20);
    cout << result << endl; // Output: 30

    // Detailed function pointer declaration
    int (*fun_ptr_detailed)(int, int) = add;
    result = fun_ptr_detailed(10, 20);
    cout << result << endl; // Output: 30

    return 0;
}
```

### Key Points

- **Function Pointers**: A function pointer stores the address of a function, enabling indirect function calls.
- **Advantages**:
  - **Passing Functionality as Argument**: Function pointers can be passed as arguments to other functions, providing flexibility. Examples include sorting functions like `qsort()` in C and `sort()` in C++ STL, which use comparison functions to determine the order of elements.
  - **Higher-Order Functions**: Functions like `for_each()` can apply a given function to each element in a collection, enhancing reusability.
  - **Dynamic Polymorphism**: Used in virtual function implementation for achieving dynamic polymorphism, where the vtable (virtual table) stores function pointers.
- **Syntax**: Function pointer syntax can be complex, but the `auto` keyword simplifies it by automatically deducing the correct type.

### Applications

1. **Sorting Functions**: Passing custom comparison functions to sort data in different orders.
2. **Higher-Order Functions**: Applying specific operations to each element in a collection.
3. **Dynamic Polymorphism**: Implementing virtual functions in classes to enable dynamic method binding at runtime.

Function pointers are a powerful feature in C and C++, enabling flexible, reusable, and dynamic code. They allow passing and storing function addresses, enhancing the modularity and functionality of programs.