### Writing Base Cases in Recursion

#### Introduction
- Writing base cases in recursion is crucial for preventing errors such as stack overflow or segmentation faults.
- Base cases handle inputs for which the problem cannot be further divided into subproblems.

#### Problem 1: Finding Factorial of a Number
- **Recursive Relation**: `factorial(n) = n * factorial(n-1)`
- **Recursive Function**:
  ```cpp
  int factorial(int n) {
      if (n == 0) return 1; // Base case
      return n * factorial(n - 1);
  }
  ```

- **Base Case**: `n == 0` because `factorial(0) = 1`
- **Importance of Correct Base Case**:
  - Incorrect base cases lead to infinite recursion.
  - Example of incorrect base case (`n == 1`):
    ```cpp
    int factorial(int n) {
        if (n == 1) return 1; // Wrong base case
        return n * factorial(n - 1);
    }
    ```
  - This would cause a segmentation fault (C++) or stack overflow exception (Java) for `n == 0`.

#### Problem 2: Finding the nth Fibonacci Number
- **Recursive Relation**: `fib(n) = fib(n-1) + fib(n-2)`
- **Recursive Function**:
  ```cpp
  int fib(int n) {
      if (n <= 1) return n; // Combined base cases
      return fib(n - 1) + fib(n - 2);
  }
  ```

- **Base Cases**:
  - `n == 0`: `fib(0) = 0`
  - `n == 1`: `fib(1) = 1`
- **Handling Both Base Cases**:
  - Separate base cases:
    ```cpp
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
    ```
  - Combined base case for simplicity:
    ```cpp
    int fib(int n) {
        if (n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
    }
    ```

- **Importance of Handling Both Base Cases**:
  - Incorrect base case (`n == 0` only):
    ```cpp
    int fib(int n) {
        if (n == 0) return 0; // Wrong base case
        return fib(n - 1) + fib(n - 2);
    }
    ```
  - This would cause infinite recursion for `n == 1`, leading to stack overflow or segmentation fault.

#### Summary
- Base cases are essential to prevent infinite recursion.
- Proper base cases must handle all minimal inputs to ensure the recursion terminates correctly.
- For factorial, the base case is `n == 0`.
- For Fibonacci, both `n == 0` and `n == 1` need to be handled.

Understanding and correctly implementing base cases ensure the robustness and correctness of recursive functions.

---