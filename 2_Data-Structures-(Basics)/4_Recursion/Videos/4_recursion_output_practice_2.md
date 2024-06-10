## Recursion Practice Questions

#### First Program: Finding Log Base 2 of N

**Output**: `4` for `n = 16`

**Explanation**:
- **Main Function Call**: 
  - `main` calls `fun(16)`.
  - `fun(16)` checks if `n` is 1; it isn't, so it calls `1 + fun(8)`.
  - `fun(8)` calls `1 + fun(4)`.
  - `fun(4)` calls `1 + fun(2)`.
  - `fun(2)` calls `1 + fun(1)`.
  - `fun(1)` returns `0` as it is the base case.
- **Returning Values**:
  - `fun(2)` receives `0` and returns `1 + 0 = 1`.
  - `fun(4)` receives `1` and returns `1 + 1 = 2`.
  - `fun(8)` receives `2` and returns `1 + 2 = 3`.
  - `fun(16)` receives `3` and returns `1 + 3 = 4`.

**General Functionality**:
- This function computes the floor of the logarithm base 2 of `n` when `n` is a power of 2.
- For non-powers of 2, the function returns the same as the nearest lower power of 2.

**C++ Code**:
```cpp
#include <iostream>
using namespace std;

int fun(int n) {
    if (n == 1)
        return 0;
    else
        return 1 + fun(n / 2);
}

int main() {
    int result = fun(16);
    cout << result << endl; // Output: 4
    return 0;
}
```

**Java Code**:
```java
public class Main {
    public static int fun(int n) {
        if (n == 1)
            return 0;
        else
            return 1 + fun(n / 2);
    }

    public static void main(String[] args) {
        int result = fun(16);
        System.out.println(result); // Output: 4
    }
}
```

#### Second Program: Printing Binary Equivalent

**Output**: `111` for `n = 7`

**Explanation**:
- **Main Function Call**: 
  - `main` calls `fun(7)`.
  - `fun(7)` calls `fun(3)` before printing `7 % 2`.
  - `fun(3)` calls `fun(1)` before printing `3 % 2`.
  - `fun(1)` calls `fun(0)` before printing `1 % 2`.
  - `fun(0)` is the base case and returns immediately.
- **Returning Values**:
  - `fun(1)` prints `1` and returns.
  - `fun(3)` prints `1` and returns.
  - `fun(7)` prints `1` and returns.

**General Functionality**:
- This function prints the binary equivalent of a decimal number `n`, where `n` is greater than 0.

**C++ Code**:
```cpp
#include <iostream>
using namespace std;

void fun(int n) {
    if (n == 0)
        return;
    fun(n / 2);
    cout << n % 2;
}

int main() {
    fun(7); // Output: 111
    return 0;
}
```

**Java Code**:
```java
public class Main {
    public static void fun(int n) {
        if (n == 0)
            return;
        fun(n / 2);
        System.out.print(n % 2);
    }

    public static void main(String[] args) {
        fun(7); // Output: 111
    }
}
```

---