## Analysis of Common Loops

1. **Introduction to Loop Analysis**:
   - Understanding the order of growth of loops is crucial in algorithm analysis.
   - Analyzing common loop structures helps in determining their time complexities.

2. **Single Loop**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         // constant time operations
     }
     ```
   - **Analysis**:
     - The loop runs from 0 to $n-1$, executing $n$ times.
     - Each iteration performs a constant number of operations.
     - **Time Complexity**: $O(n)$.

3. **Nested Loops**:
   - **Example 1**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             // constant time operations
         }
     }
     ```
   - **Analysis**:
     - The outer loop runs $n$ times.
     - For each iteration of the outer loop, the inner loop also runs $n$ times.
     - Total iterations: $n \times n = n^2$.
     - **Time Complexity**: $O(n^2)$.

   - **Example 2**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < i; j++) {
             // constant time operations
         }
     }
     ```
   - **Analysis**:
     - The outer loop runs $n$ times.
     - The inner loop runs $i$ times for each iteration of the outer loop.
     - Total iterations: $0 + 1 + 2 + \ldots + (n-1) = \frac{n(n-1)}{2}$.
     - **Time Complexity**: $O(n^2)$.

4. **Logarithmic Loop**:
   - **Example**:
     ```cpp
     for (int i = 1; i < n; i = i * 2) {
         // constant time operations
     }
     ```
   - **Analysis**:
     - The loop variable $i$ doubles each iteration.
     - The number of iterations is $\log_2{n}$.
     - **Time Complexity**: $O(\log{n})$.

5. **Loop with Linear and Logarithmic Components**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 1; j < n; j = j * 2) {
             // constant time operations
         }
     }
     ```
   - **Analysis**:
     - The outer loop runs $n$ times.
     - The inner loop runs $\log_2{n}$ times for each iteration of the outer loop.
     - Total iterations: $n \times \log_2{n}$.
     - **Time Complexity**: $O(n \log{n})$.

6. **Example with Multiple Variables**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
             // constant time operations
         }
     }
     ```
   - **Analysis**:
     - The outer loop runs $n$ times.
     - The inner loop runs $m$ times for each iteration of the outer loop.
     - Total iterations: $n \times m$.
     - **Time Complexity**: $O(nm)$.

### Summary:
Analyzing loops is essential for understanding the time complexity of algorithms. Common loops include single loops, nested loops, logarithmic loops, and combinations of these. The key takeaway is:
- Single loops generally have a time complexity of $O(n)$.
- Nested loops' time complexities depend on the multiplicative effect of each loop, often resulting in $O(n^2)$ or higher.
- Logarithmic loops exhibit $O(\log{n})$ complexity.
- Combining linear and logarithmic loops results in $O(n \log{n})$.
- Loops with multiple variables involve $O(nm)$ time complexity, indicating the dependency on multiple input sizes.