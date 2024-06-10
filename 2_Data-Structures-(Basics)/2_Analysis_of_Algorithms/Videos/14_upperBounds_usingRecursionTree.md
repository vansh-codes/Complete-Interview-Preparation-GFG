## Solving Recurrences with Recursion Tree Method: Complex Cases

1. **Introduction**:
   - In previous examples, we were able to find the exact bound (Theta notation) for recurrences.
   - However, some recurrences are complex, making it difficult to determine the exact bound. In such cases, we often aim for an upper bound (Big O notation).

2. **Example 1: Complex Recurrence**:
   - Consider the recurrence $T(n) = T(n/4) + T(n/2) + Cn$ with $T(1) = C$.
   - **Recursion Tree Construction**:
     - Write the non-recursive part at the root.
     - Expand the recursive calls to form the tree.
     - Compute the sum of work done at each level.
   - **Pattern Identification**:
     - The work done at each level forms a geometric progression: $Cn, \frac{3Cn}{4}, \frac{9Cn}{16}, \ldots$.
     - Leaves are not at the same level, making it hard to find the exact bound.
   - **Upper Bound Calculation**:
     - Assume the tree is full for simplicity.
     - The depth of the rightmost leaf is approximately $\log n$.
     - Sum of geometric series: $Cn \left(\frac{1}{1 - \frac{3}{4}}\right)$.
     - This simplifies to $O(n)$.

3. **Example 2: Different Reduction Speeds**:
   - Consider the recurrence $T(n) = T(n-1) + T(n-2) + C$.
   - **Recursion Tree Construction**:
     - Write the non-recursive part at the root.
     - Expand the recursive calls.
     - Compute the sum of work done at each level.
   - **Pattern Identification**:
     - The tree is not balanced; leaves appear at different levels due to varying reduction rates.
     - Work done at each level: $C, 2C, 4C, \ldots$ forms a geometric progression.
   - **Upper Bound Calculation**:
     - Consider the tree as full for simplicity.
     - Use Big O notation for the geometric progression: $O(2^n)$.

4. **General Methodology**:
   - Draw the recursion tree.
   - Identify the work done at each level.
   - Use geometric progression formulas to estimate the sum.
   - Apply Big O notation for an upper bound when exact analysis is complex.

### Summary
The recursion tree method helps visualize and analyze the time complexity of recursive algorithms. In complex cases, where exact bounds are challenging to determine, we use the recursion tree method to estimate an upper bound using Big O notation. This approach simplifies the analysis by assuming the tree is full and using geometric progression formulas to approximate the total work done.

----