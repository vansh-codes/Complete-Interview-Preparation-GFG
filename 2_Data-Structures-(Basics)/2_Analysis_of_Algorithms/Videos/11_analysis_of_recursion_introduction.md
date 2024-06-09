## Analysis of Recursive Codes

1. **Introduction to Recursive Codes**:
   - Recursive codes involve a function calling itself.
   - Analyzing time complexity for recursive functions is more challenging than for iterative ones due to the lack of direct counting mechanisms.

2. **Writing Recurrence Relation**:
   - To analyze time complexity for recursive functions, we first write a recurrence relation.
   - **Example Function**: `fun(n)` recursively calls itself for `n/2` and `n/2` if `n >= 0`.
   - **Recurrence Relation**: \( T(n) = 2T(n/2) + \Theta(1) \) for \( n > 0 \), and \( T(0) = \Theta(1) \).
   - This relation accounts for the time taken by the function for different input sizes.

3. **Base Case**:
   - The base case for the recurrence relation is when \( n \leq 0 \), where the function takes constant time.
   - Base Case: \( T(0) = \Theta(1) \).

4. **Exercise**:
   - An exercise is given to the viewer to pause and write the recurrence relation for another recursive function.
   - The provided function involves calls with different fractions of \( n \) and constant time operations.

5. **Additional Exercise**:
   - Another exercise is given to write the recurrence relation for a recursive function that decrements \( n \) with each call.
   - The function takes \( T(n-1) \) time for \( n > 1 \) and constant time for \( n = 1 \).

6. **Conclusion**:
   - Writing recurrence relations is crucial for analyzing the time complexity of recursive functions.
   - In the next video, the process of solving these recurrence relations will be discussed.

### Summary:
Analyzing the time complexity of recursive functions involves writing recurrence relations that describe the function's behavior in terms of its input size. These relations consider the time taken by the function for different input sizes and provide a basis for further analysis. Exercises are provided to practice writing recurrence relations for various types of recursive functions.