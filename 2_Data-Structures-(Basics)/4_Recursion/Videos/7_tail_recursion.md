##   Tail Recursion

#### Concept Introduction
- **Tail Recursion**: A function is considered tail-recursive when the last action of the function is a recursive call to itself, with no further operations following this call.

#### Function Comparison
- **Two Example Functions**:
  - **Function 1**: Prints numbers from N to 1.
  - **Function 2**: Prints numbers from 1 to N.

#### Function 1: Tail Recursive Example
```cpp
void printNumbers(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNumbers(n - 1);
}
```
- **Execution Flow**:
  - Starts from `main()`, calls `printNumbers(3)`.
  - Prints `3`, then calls `printNumbers(2)`.
  - Prints `2`, then calls `printNumbers(1)`.
  - Prints `1`, then calls `printNumbers(0)`.
  - When `n` is `0`, returns immediately.

- **Tail Recursive**: The last action in the function is the recursive call, making it tail-recursive.

#### Function 2: Non-Tail Recursive Example
```cpp
void printNumbers(int n) {
    if (n == 0) return;
    printNumbers(n - 1);
    cout << n << " ";
}
```
- **Execution Flow**:
  - Starts from `main()`, calls `printNumbers(3)`.
  - Calls `printNumbers(2)`.
  - Calls `printNumbers(1)`.
  - Calls `printNumbers(0)`.
  - When `n` is `0`, returns and then prints `1`.
  - Returns to `printNumbers(2)`, prints `2`.
  - Returns to `printNumbers(3)`, prints `3`.

- **Non-Tail Recursive**: There are operations (printing) after the recursive call, so it is not tail-recursive.

#### Advantages of Tail Recursion
- **Efficiency**: Modern compilers optimize tail-recursive functions through a process called **Tail Call Elimination**.
  - **Optimization Process**: Replaces the recursive call with a loop, thus avoiding the overhead of multiple function calls and reducing auxiliary space.

#### Example of Tail Call Elimination
- **Original Tail-Recursive Function**:
```cpp
void printNumbers(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNumbers(n - 1);
}
```
- **Optimized Version by Compiler**:
```cpp
void printNumbers(int n) {
    start:
    if (n == 0) return;
    cout << n << " ";
    n = n - 1;
    goto start;
}
```

#### Converting Non-Tail Recursive to Tail-Recursive
- **Conversion Example**:
  - **Non-Tail Recursive Factorial Function**:
    ```cpp
    int factorial(int n) {
        if (n == 0) return 1;
        return n * factorial(n - 1);
    }
    ```
  - **Tail-Recursive Factorial Function**:
    ```cpp
    int factorial(int n, int k = 1) {
        if (n == 0) return k;
        return factorial(n - 1, n * k);
    }
    ```
  - **Usage**:
    ```cpp
    factorial(3); // Pass initial value of k as 1
    ```

#### Key Points
- **Tail Recursion**: Preferable because of compiler optimizations that reduce time and space complexity.
- **Not Always Convertible**: Some recursive functions, such as merge sort, cannot be easily converted to tail-recursive functions.

### Practical Considerations
- **Choosing Recursion Type**:
  - When given a choice between tail-recursive and non-tail recursive solutions, opt for tail-recursive.
  - Tail-recursive functions are more likely to be optimized by modern compilers, improving performance.

By understanding and utilizing tail recursion effectively, you can write more efficient recursive programs that leverage compiler optimizations for improved performance.

---