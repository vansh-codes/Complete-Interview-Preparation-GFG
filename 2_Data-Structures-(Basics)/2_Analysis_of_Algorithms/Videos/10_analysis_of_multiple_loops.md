## Analysis of Multiple Loops

1. **Introduction to Multiple Loops**:
   - Analyzing multiple loops is essential to determine the overall time complexity of algorithms that involve several looping structures.
   - Different types of multiple loops include independent loops, sequential loops, and combined loops.

2. **Independent Loops**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         // constant time operations
     }
     for (int j = 0; j < m; j++) {
         // constant time operations
     }
     ```
   - **Analysis**:
     - The first loop runs \( n \) times, and the second loop runs \( m \) times.
     - These loops run independently of each other.
     - **Total Time Complexity**: \( O(n) + O(m) = O(n + m) \).

3. **Sequential Loops**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         // constant time operations
     }
     for (int j = 0; j < n; j++) {
         // constant time operations
     }
     ```
   - **Analysis**:
     - Both loops run sequentially, each \( n \) times.
     - These loops have the same iteration count.
     - **Total Time Complexity**: \( O(n) + O(n) = O(2n) = O(n) \).

4. **Combined Loops**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
             // constant time operations
         }
     }
     ```
   - **Analysis**:
     - The outer loop runs \( n \) times, and for each iteration of the outer loop, the inner loop runs \( m \) times.
     - **Total Time Complexity**: \( O(n \times m) = O(nm) \).

5. **Nested Loops with Different Ranges**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < i; j++) {
             // constant time operations
         }
     }
     ```
   - **Analysis**:
     - The outer loop runs \( n \) times.
     - The inner loop runs \( i \) times for each iteration of the outer loop.
     - Total iterations: \( 0 + 1 + 2 + \ldots + (n-1) = \frac{n(n-1)}{2} \).
     - **Total Time Complexity**: \( O(n^2) \).

6. **Logarithmic and Linear Combined Loops**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 1; j < n; j = j * 2) {
             // constant time operations
         }
     }
     ```
   - **Analysis**:
     - The outer loop runs \( n \) times.
     - The inner loop runs \( \log_2{n} \) times for each iteration of the outer loop.
     - **Total Time Complexity**: \( O(n \times \log{n}) = O(n \log{n}) \).

7. **Example with Multiple Variables**:
   - **Example**:
     ```cpp
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
             // constant time operations
         }
     }
     for (int k = 0; k < p; k++) {
         // constant time operations
     }
     ```
   - **Analysis**:
     - The first nested loop runs \( n \times m \) times.
     - The second loop runs \( p \) times.
     - **Total Time Complexity**: \( O(nm) + O(p) = O(nm + p) \).

### Summary:
Analyzing multiple loops involves understanding how different looping structures interact and contribute to the overall time complexity of an algorithm. Key takeaways include:
- **Independent Loops**: The total complexity is the sum of individual complexities.
- **Sequential Loops**: If loops run sequentially with the same iteration count, the complexity remains linear.
- **Combined Loops**: The total complexity is the product of the iteration counts of nested loops.
- **Different Ranges**: Nested loops with variable iteration ranges can lead to quadratic or higher complexities.
- **Logarithmic and Linear**: Combining logarithmic and linear loops results in \( O(n \log{n}) \) complexity.
- **Multiple Variables**: When loops involve multiple variables, their combined effect determines the overall complexity.