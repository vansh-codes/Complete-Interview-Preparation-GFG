## Printing 1 to N Using Recursion

#### Program Explanation

**Objective**:
- Print numbers from 1 to N using recursion.

**C++ Code**:
```cpp
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0)
        return;
    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int n = 5;
    printNumbers(n); // Output: 1 2 3 4 5
    return 0;
}
```

**Java Code**:
```java
public class Main {
    public static void printNumbers(int n) {
        if (n == 0)
            return;
        printNumbers(n - 1);
        System.out.print(n + " ");
    }

    public static void main(String[] args) {
        int n = 5;
        printNumbers(n); // Output: 1 2 3 4 5
    }
}
```

**Explanation**:
- **Base Case**: The function checks if `n` is 0. If it is, the function returns immediately.
- **Recursive Call**: Before printing the current number `n`, the function calls itself with `n - 1`.
- **Printing**: After the recursive call completes, the function prints the current number `n`.

**Execution Flow**:
- The function begins execution from `main` and calls `printNumbers(n)`.
- The recursion unwinds:
  - `printNumbers(5)` calls `printNumbers(4)`.
  - `printNumbers(4)` calls `printNumbers(3)`.
  - `printNumbers(3)` calls `printNumbers(2)`.
  - `printNumbers(2)` calls `printNumbers(1)`.
  - `printNumbers(1)` calls `printNumbers(0)`, which hits the base case and returns.
- After hitting the base case, the functions start returning and printing:
  - `printNumbers(1)` prints `1`.
  - `printNumbers(2)` prints `2`.
  - `printNumbers(3)` prints `3`.
  - `printNumbers(4)` prints `4`.
  - `printNumbers(5)` prints `5`.

The output is `1 2 3 4 5`.

**General Functionality**:
- This function prints numbers from 1 to N in ascending order using recursion.

---