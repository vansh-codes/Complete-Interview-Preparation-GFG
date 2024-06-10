## Print N to 1 Using Recursion

**Problem**: Write a function that prints numbers from `N` down to `1` using recursion.

**Concept**:
- Recursion is a powerful tool that can be used to solve problems by breaking them down into smaller sub-problems.
- In this case, the function will call itself with a decremented value of `N` until it reaches the base case.

**Steps to Solve**:
1. **Define the Base Case**: 
   - The base case will be when `N` is less than or equal to `0`. When `N` reaches this point, the function will stop calling itself.
2. **Recursive Call**:
   - Before making the recursive call, print the current value of `N`.
   - Then, call the function with `N-1`.

**Example Execution**:
- Suppose we call `printNto1(3)`:
  - The function will print `3` and then call `printNto1(2)`.
  - `printNto1(2)` will print `2` and call `printNto1(1)`.
  - `printNto1(1)` will print `1` and call `printNto1(0)`.
  - `printNto1(0)` will hit the base case and return without doing anything.

**C++ Code**:
```cpp
#include <iostream>
using namespace std;

void printNto1(int n) {
    if (n <= 0)
        return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    printNto1(3); // Output: 3 2 1
    return 0;
}
```

**Java Code**:
```java
public class Main {
    public static void printNto1(int n) {
        if (n <= 0)
            return;
        System.out.print(n + " ");
        printNto1(n - 1);
    }

    public static void main(String[] args) {
        printNto1(3); // Output: 3 2 1
    }
}
```

**Explanation**:
- **Main Function Call**: 
  - `main` calls `printNto1(3)`.
  - `printNto1(3)` prints `3` and then calls `printNto1(2)`.
  - `printNto1(2)` prints `2` and then calls `printNto1(1)`.
  - `printNto1(1)` prints `1` and then calls `printNto1(0)`.
  - `printNto1(0)` hits the base case and returns, ending the recursion.

**Key Points**:
- Recursive functions must have a base case to avoid infinite recursion.
- The function prints before the recursive call to ensure the numbers are printed in descending order.

---