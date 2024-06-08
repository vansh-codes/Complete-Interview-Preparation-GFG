## Lambda Expression

Lambda expressions in C++ were introduced in C++11. Lambda expressions provide a more concise way to pass functionality as arguments compared to function pointers, especially for small tasks where creating a separate function would be cumbersome. Lambda expressions, also known as anonymous functions, allow you to implement and pass functionality without needing to define a named function.

#### Key Points

1. **Lambda Expressions**:
   - Provide a quick way to pass functionality without creating separate functions.
   - Useful for small tasks that do not require reuse.
   - Syntax: `[capture list] (parameters) {body}`
   - Capture list allows the Lambda to access variables from its enclosing scope.

2. **Sort Example**:
   - By default, `sort` in C++ STL sorts in increasing order.
   - A custom comparison function can be passed as the third parameter to `sort`.
   - Lambda expressions make it easy to provide custom comparison functions.

3. **Capture List**:
   - Enables Lambda expressions to capture and use variables from their enclosing scope.
   - Variables can be captured by value or by reference.

4. **Code Example**:
   - Demonstrates the usage of Lambda expressions for sorting an array by absolute values.
   - Shows how to declare and use Lambda expressions directly or by assigning them to a variable.

### Code Examples

#### Simple Sort with Lambda Expression
```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int arr[] = { -9, 2, -1, 8, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting array by absolute value using Lambda expression
    sort(arr, arr + n, [](int a, int b) {
        return abs(a) < abs(b);
    });

    // Printing sorted array
    cout << "Sorted array by absolute value: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

#### Using Capture List in Lambda Expression
```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int arr[] = { -9, 2, -1, 8, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    // Sorting array by absolute value using Lambda expression with capture list
    sort(arr, arr + n, [x](int a, int b) {
        cout << "Value of x: " << x << endl; // Accessing captured variable
        return abs(a) < abs(b);
    });

    // Printing sorted array
    cout << "Sorted array by absolute value: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

#### Assigning Lambda Expression to a Variable
```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int arr[] = { -9, 2, -1, 8, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Lambda expression assigned to a variable
    auto mycmp = [](int a, int b) {
        return abs(a) < abs(b);
    };

    // Sorting array by absolute value using Lambda expression variable
    sort(arr, arr + n, mycmp);

    // Printing sorted array
    cout << "Sorted array by absolute value: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

### Conclusion
Lambda expressions provide a more efficient and concise way to pass functionality as parameters in C++ compared to function pointers. They are especially useful for small tasks and help in keeping the code clean and readable.