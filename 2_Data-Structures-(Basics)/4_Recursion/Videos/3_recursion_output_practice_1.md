### Practice Questions on Recursion

#### First Program: C++ and Java

**Output**: `3 2 1 1 2 3`

**Explanation**:
1. **Main Function Call**:
   - `main` function calls `fun(3)`.
   - `fun(3)` prints `3` and calls `fun(2)`.
   - `fun(2)` prints `2` and calls `fun(1)`.
   - `fun(1)` prints `1` and calls `fun(0)`.
   - `fun(0)` reaches the base case (n=0) and returns immediately.
2. **Resuming Execution**:
   - `fun(1)` resumes, prints `1` again, and returns.
   - `fun(2)` resumes, prints `2` again, and returns.
   - `fun(3)` resumes, prints `3` again, and returns.
   - The recursive calls result in the sequence: `3`, `2`, `1`, `1`, `2`, `3`.

**C++ Code**:
```cpp
#include <iostream>
using namespace std;

void fun(int n) {
    if (n == 0)
        return;
    cout << n << " ";
    fun(n - 1);
    cout << n << " ";
}

int main() {
    fun(3);
    return 0;
}
```

**Java Code**:
```java
public class Main {
    public static void fun(int n) {
        if (n == 0)
            return;
        System.out.print(n + " ");
        fun(n - 1);
        System.out.print(n + " ");
    }

    public static void main(String[] args) {
        fun(3);
    }
}
```

#### Second Program: C++ and Java

**Output**: `1 2 1 3 1 2 1`

**Explanation**:
1. **Main Function Call**:
   - `main` function calls `fun(3)`.
   - `fun(3)` calls `fun(2)`.
   - `fun(2)` calls `fun(1)`.
   - `fun(1)` calls `fun(0)` which returns immediately.
   - `fun(1)` prints `1`, calls `fun(0)` again, and returns.
   - `fun(2)` prints `2`, calls `fun(1)` which prints `1`, and calls `fun(0)`.
   - `fun(1)` prints `1` and returns.
   - `fun(2)` returns.
2. **Resuming Execution**:
   - `fun(3)` prints `3`, calls `fun(2)`.
   - `fun(2)` calls `fun(1)` which prints `1`, calls `fun(0)`, prints `1`, and returns.
   - `fun(2)` prints `2`, calls `fun(1)` which prints `1`, calls `fun(0)`, prints `1`, and returns.
   - `fun(2)` returns.
   - The recursive calls result in the sequence: `1`, `2`, `1`, `3`, `1`, `2`, `1`.

**C++ Code**:
```cpp
#include <iostream>
using namespace std;

void fun(int n) {
    if (n == 0)
        return;
    fun(n - 1);
    cout << n << " ";
    fun(n - 1);
}

int main() {
    fun(3);
    return 0;
}
```

**Java Code**:
```java
public class Main {
    public static void fun(int n) {
        if (n == 0)
            return;
        fun(n - 1);
        System.out.print(n + " ");
        fun(n - 1);
    }

    public static void main(String[] args) {
        fun(3);
    }
}
```

### Summary of Steps
- **First Program**:
  - Recursive function prints the current value, calls itself with decremented value until it reaches zero.
  - After hitting the base case, the function resumes execution, printing the values in reverse order.

- **Second Program**:
  - Recursive function prints the value after returning from the base case.
  - Calls itself, prints the current value, and then calls itself again before returning, leading to a nested structure that duplicates the initial sequence.

  ---