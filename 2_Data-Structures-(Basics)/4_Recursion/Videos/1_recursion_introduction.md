## Recursion Explained

### Introduction to Recursion
Recursion is a programming technique where a function calls itself to solve a problem. It can be direct or indirect:
- **Direct Recursion**: A function calls itself directly.
- **Indirect Recursion**: A function calls another function, which in turn calls the first function.

### Understanding Function Calls
Before diving into recursion, it’s important to understand how function calls work in programming languages like C++ and Java. When a function is called:
1. The caller function is paused.
2. The called function executes.
3. Once the called function completes, control returns to the caller function.

### Example of Function Calls
Consider the following programs in C++ and Java that illustrate function calls:

#### C++ Example
```cpp
#include <iostream>
using namespace std;

void fun1() {
    cout << "fun1" << endl;
}

void fun2() {
    cout << "before fun1" << endl;
    fun1();
    cout << "after fun1" << endl;
}

int main() {
    cout << "before fun2" << endl;
    fun2();
    cout << "after fun2" << endl;
    return 0;
}
```

#### Java Example
```java
class Test {
    public static void fun1() {
        System.out.println("fun1");
    }

    public static void fun2() {
        System.out.println("before fun1");
        fun1();
        System.out.println("after fun1");
    }

    public static void main(String[] args) {
        System.out.println("before fun2");
        fun2();
        System.out.println("after fun2");
    }
}
```

### Recursive Function Example
Here’s a simple example of a recursive function in C++ and Java that demonstrates direct recursion:

#### C++ Example
```cpp
#include <iostream>
using namespace std;

void fun1(int n) {
    if (n == 0) return;
    cout << "gfg" << endl;
    fun1(n - 1);
}

int main() {
    fun1(2);
    return 0;
}
```

#### Java Example
```java
class Test {
    public static void fun1(int n) {
        if (n == 0) return;
        System.out.println("gfg");
        fun1(n - 1);
    }

    public static void main(String[] args) {
        fun1(2);
    }
}
```

### Understanding Recursion
In recursion, a function calls itself and should have a terminating condition to avoid infinite loops. This terminating condition is called a **base case**. Without a base case, recursion would continue indefinitely, leading to errors like stack overflow.

### Typical Structure of a Recursive Function
A typical recursive function includes:
1. Base cases to terminate recursion.
2. Some processing.
3. Recursive calls with changed parameters.

### Example of a Recursive Function with a Base Case
The modified version of the recursive function includes a base case to terminate recursion when `n` reaches 0:

#### C++ Example
```cpp
#include <iostream>
using namespace std;

void fun1(int n) {
    if (n == 0) return;
    cout << "gfg" << endl;
    fun1(n - 1);
}

int main() {
    fun1(2);
    return 0;
}
```

#### Java Example
```java
class Test {
    public static void fun1(int n) {
        if (n == 0) return;
        System.out.println("gfg");
        fun1(n - 1);
    }

    public static void main(String[] args) {
        fun1(2);
    }
}
```

### Summary
- **Recursion** is when a function calls itself.
- **Base case** is necessary to stop recursion.
- Typical recursive function includes the base case, some processing, and a recursive call with changed parameters.

---