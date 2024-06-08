## More Examples of Lambda Expressions

Lambda expressions offer a concise way to pass functionality as parameters without the need to create separate functions. They are particularly useful for small tasks that do not require reuse. 

#### Key Points

1. **Lambda Expressions**:
   - Introduced in C++11 to provide a simpler way to pass functionality as parameters.
   - Often used for small, single-use functions.
   - Syntax: `[capture list] (parameters) {body}`.

2. **for_each Example**:
   - The `for_each` function takes a container as input, typically by passing the first and last iterators.
   - Example: Doubling every element in a vector using a Lambda expression.

3. **count_if Example**:
   - The `count_if` function also takes two iterators and a condition function.
   - It counts the elements that satisfy the given condition.
   - Example: Counting elements greater than or equal to 10 in a vector using a Lambda expression.

4. **find_if Example**:
   - The `find_if` function returns an iterator to the first element that satisfies a given condition.
   - Example: Finding the first element less than 10 in a vector using a Lambda expression.

5. **accumulate Example**:
   - The `accumulate` function sums the elements of a container by default.
   - You can provide other functionalities such as multiplication by using a Lambda expression.
   - Example: Summing and multiplying elements of a vector using Lambda expressions.

### Code Examples

#### Doubling Elements using `for_each`
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Doubling each element using for_each and Lambda expression
    for_each(v.begin(), v.end(), [](int &x) { x = x * 2; });

    // Printing doubled elements
    for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });  // Output: 20 40 60
    cout << endl;

    return 0;
}
```

#### Counting Elements using `count_if`
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 5, 3, 20, 100};

    // Counting elements greater than or equal to 10
    int count = count_if(v.begin(), v.end(), [](int x) { return x >= 10; });
    cout << "Count of elements >= 10: " << count << endl;   // Output: 3

    return 0;
}
```

#### Finding First Element using `find_if`
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 5, 3, 20, 100};

    // Finding the first element less than 10
    auto it = find_if(v.begin(), v.end(), [](int x) { return x < 10; });
    if (it != v.end()) {
        cout << "First element less than 10: " << *it << endl;  // Output: 5
    } else {
        cout << "No element less than 10 found" << endl;
    }

    return 0;
}
```

#### Using `accumulate` with Lambda Expression
```cpp
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 2, 1};

    // Summing elements using accumulate
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of elements: " << sum << endl;     // Output: 10

    // Multiplying elements using accumulate and Lambda expression
    int product = accumulate(v.begin(), v.end(), 1, [](int x, int y) { return x * y; });    // Output: 16
    cout << "Product of elements: " << product << endl;

    return 0;
}
```

### Conclusion
Lambda expressions provide a concise and efficient way to pass functionality as parameters in C++. They simplify the code, making it easier to read and maintain, especially for small, single-use functions.