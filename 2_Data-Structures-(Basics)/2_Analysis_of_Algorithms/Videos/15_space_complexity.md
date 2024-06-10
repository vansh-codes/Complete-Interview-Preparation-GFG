   ## Space Complexity of Algorithms: Overview and Examples

   #### Definition and Basics:
   - **Space Complexity**: Measures the order of growth of memory space (RAM) required by an algorithm in terms of input size.
   - **Time Complexity**: Measures the order of growth of time taken by an algorithm in terms of input size.
   - Both space and time complexities use the same asymptotic notations (Big O, Theta, Omega).

   #### Examples:
   1. **Simple Program**:
      - Example: A program with a constant number of variables (`n`, `sum`, `i`).
      - **Space Complexity**: $\Theta(1)$ or $O(1)$ because it uses a constant amount of space regardless of input size.

   2. **Array Sum Function**:
      - Example: A program that sums elements in an array of size `n`.
      - **Space Complexity**: $\Theta(n)$ since the array size grows linearly with the input size.
      - **Auxiliary Space**: $\Theta(1)$ since no extra space is used beyond the input array.

   #### Auxiliary Space:
   - **Auxiliary Space**: Measures the order of growth of extra space (excluding input/output) required by an algorithm.
   - Example: In an array sum function, the auxiliary space is $\Theta(1)$ while the overall space complexity is $\Theta(n)$.

   #### Sorting Algorithms:
   - **Insertion Sort, Bubble Sort, Selection Sort**:
   - **Auxiliary Space**: $\Theta(1)$ since they do not use extra arrays.
   - **Merge Sort**:
   - **Auxiliary Space**: $\Theta(n)$ due to the additional array used for sorting.
   - **Quick Sort**:
   - **Auxiliary Space**: $\Theta(\log n)$ in the best case due to recursion.

   #### Recursive Function Example:
   - **Sum of First n Natural Numbers**:
   - Example: A recursive function to calculate the sum of first `n` natural numbers.
   - **Space Complexity**: $\Theta(n)$ due to the recursive call stack storing up to `n + 1` function calls.
   - **Auxiliary Space**: $\Theta(n)$ for the same reason.

   #### Fibonacci Number Examples:
   1. **Simple Recursive Solution**:
      - Example: A recursive function to compute Fibonacci numbers.
      - **Space Complexity & Auxiliary Space**: $\Theta(n)$ due to the height of the recursion tree.

   2. **Array-Based Solution**:
      - Example: An iterative solution using an array to store Fibonacci numbers.
      - **Space Complexity & Auxiliary Space**: $\Theta(n)$ as it uses an array of size `n + 1`.

   3. **Optimized Space Solution**:
      - Example: An iterative solution using only two variables to store the previous two Fibonacci numbers.
      - **Space Complexity & Auxiliary Space**: $\Theta(1)$ because it uses a constant amount of space.

   ### Summary:
   - **Space Complexity**: Focuses on the total memory required by an algorithm.
   - **Auxiliary Space**: Focuses on the extra memory required beyond the input data.
   - Auxiliary space is often a more useful metric for comparing algorithms, especially when dealing with input containers like arrays or lists.

   ---