## Passing functions as Parameters

Function pointers allow us to pass functionality as an argument to other functions, making our code more flexible and reusable. We demonstrate how to use function pointers with different functions and how they can be applied in real-world scenarios such as sorting arrays with custom criteria.

### Code Examples

#### Using Function Pointers to Add and Multiply
```cpp
#include <iostream>
using namespace std;

// Function to add two integers
int add(int x, int y) {
    return x + y;
}

// Function to multiply two integers
int multiply(int x, int y) {
    return x * y;
}

// Function that takes two integers and a function pointer as arguments
int compute(int x, int y, int (*fun_ptr)(int, int)) {
    return fun_ptr(x, y);
}

int main() {
    // Using the compute function with add and multiply
    cout << "Addition: " << compute(10, 20, add) << endl;        // Output: 30
    cout << "Multiplication: " << compute(10, 20, multiply) << endl; // Output: 200

    return 0;
}
```

#### Using Function Pointers in C++ STL Sort
```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// Comparison function to sort by absolute value
bool compare(int x, int y) {
    return abs(x) < abs(y);
}

int main() {
    int arr[] = { -9, 2, -1, 8, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting array by absolute value using sort function with a custom comparison function
    sort(arr, arr + n, compare);

    // Printing sorted array
    cout << "Sorted array by absolute value: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

### Key Points

- **Function Pointers**: Pointers that store the address of a function and can be used to call the function indirectly.
- **Applications**:
  - **Passing Functionality as Argument**: Function pointers can be passed to other functions to specify custom behavior.
  - **Custom Sorting**: Using function pointers to provide custom comparison functions for sorting algorithms.
- **Syntax**: Declaring and using function pointers can be complex, but `auto` keyword simplifies it by automatically deducing the correct type.

### Practical Example

#### Custom Sorting with Function Pointers
We demonstrate how to use a function pointer to sort an array by absolute value using the `sort` function in C++ STL. By providing a custom comparison function, we can control how the elements are ordered without writing a new sort function from scratch. This shows the power and flexibility of function pointers in real-world applications.