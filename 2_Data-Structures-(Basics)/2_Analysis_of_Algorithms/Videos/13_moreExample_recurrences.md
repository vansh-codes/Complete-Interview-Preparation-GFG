## Analysis of Recursive Codes: Recursion Tree Method

1. **Introduction**:
   - Recurrence relations help analyze the time complexity of recursive algorithms.
   - The recursion tree method is a general approach to solve recurrences, especially useful for understanding the work done at each level of recursion.

2. **Example Recurrence Relation**:
   - Given a recurrence $T(n) = 2T(n-1) + C$:
     - **Step 1**: Write the non-recursive part (C) as the root.
     - **Step 2**: Expand the recursive calls to form the tree.
     - **Step 3**: Identify the work done at each level:
       - Level 1: $C$
       - Level 2: $2C$
       - Level 3: $4C$
       - Level 4: $8C$
     - The total work done forms a geometric series $C + 2C + 4C + \ldots$.

3. **Identifying Patterns and Solving the Series**:
   - The series has $n$ terms for input size $n$.
   - It is a geometric progression with a common ratio of 2.
   - The sum of the series is $C \times (2^n - 1) / (2 - 1)$, simplifying to $\Theta(2^n)$.
   - This type of recurrence is common in problems like the Tower of Hanoi.

4. **Binary Search Example**:
   - Given a recurrence $T(n) = T(n/2) + C$:
     - **Step 1**: Write the non-recursive part (C) as the root.
     - **Step 2**: Expand the recursive calls.
     - The work done at each level is $C$.
     - The height of the tree is $\log_2(n)$.
     - The total work done is $C \times \log_2(n)$, giving $\Theta(\log n)$.
     - This type of recurrence is common in binary search algorithms.

5. **Modified Recurrence with Multiple Calls**:
   - Given a recurrence $T(n) = 2T(n/2) + C$:
     - **Step 1**: Write the non-recursive part (C) as the root.
     - **Step 2**: Expand the recursive calls.
     - The work done at each level increases as $C, 2C, 4C, \ldots$.
     - The height of the tree is $\log_2(n)$.
     - The sum of the work done forms a geometric series with $\log_2(n)$ terms.
     - The total work done is $\Theta(n)$.

6. **General Methodology**:
   - Draw the recursion tree.
   - Identify the work done at each level.
   - Sum the series to find the total work.
   - Use geometric series formulas to simplify.

### Summary
The recursion tree method provides a systematic approach to solving recurrence relations by visualizing recursive calls and computing the total work done. This method is intuitive for programmers, especially useful for understanding the time complexity of recursive algorithms like binary search and the Tower of Hanoi. By identifying patterns and summing series, the recursion tree method helps determine the asymptotic behavior of recursive functions effectively.

---