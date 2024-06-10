## Summary of the Transcript on Theta Notation

1. **Introduction to Theta Notation**:
   - Theta notation ($\Theta$) is used to represent the exact bound of a function or an algorithm.
   - It is preferred when you know the exact order of growth, as it provides precise information about the algorithm's performance.
   - While Big O notation represents an upper bound and Omega notation represents a lower bound, Theta notation combines both.

<br>

2. **Mathematical Definition**:
   - $f(n)$ is $\Theta(g(n))$ if and only if there exist constants $c_1 > 0$ and $c_2 > 0$, and a constant $n_0 \geq 0$ such that:
     $$\[
     c_1 \cdot g(n) \leq f(n) \leq c_2 \cdot g(n) \quad \text{for all } n \geq n_0
     \]$$

<br>

3. **Examples and Explanation**:
   - **Example with $f(n) = 2n + 3$**:
     - For $\Theta$-notation, we bound the function from both sides.
     - Constants are selected such that $1 \cdot n \leq 2n + 3 \leq 3 \cdot n$ for $n \geq 3$.
     - Here, $c_1 = 1$, $c_2 = 3$, and $n_0 = 3$, proving $f(n) = \Theta(n)$.

<br>

4. **Direct Method for Theta Notation**:
   - Ignore lower-order terms and the constant of the highest-growing term to determine the order of growth.
   - Example:
     - $f(n) = 5n^2 + 4n + 6$ simplifies to $\Theta(n^2)$.
     - $f(n) = 3n^3 + n^2 + 100$ simplifies to $\Theta(n^3)$.

<br>

5. **Facts about Theta Notation**:
   - If $f(n)$ is $\Theta(g(n))$, then:
     \[
     f(n) \text{ can also be written as } O(g(n)) \text{ and } \Omega(g(n))
     \]
   - Example: $f(n) = 2n^2 + n$ can be written as $\Theta(n^2)$, $O(n^2)$, and $\Omega(n^2)$.

<br>

6. **Application of Theta Notation**:
   - Theta notation is useful for representing the exact time complexity of algorithms where the time taken is known precisely.
   - Example: Finding the maximum or minimum in an array is $\Theta(n)$, as it requires traversing the entire array.

<br>

7. **Complex Algorithms**:
   - Even when an algorithm has different complexities for different cases, Theta notation is useful to denote exact bounds.
   - Example: Insertion sort has:
     - Best-case time complexity: $\Theta(n)$ when the array is sorted.
     - Worst-case time complexity: $\Theta(n^2)$ when the array is in reverse order.

<br>

8. **Examples of Theta Notation**:
   - **Constant Values**: $\Theta(1)$
     - $100, \log 2000, 10^4$
   - **Linear Growth**: $\Theta(n)$
     - $3n, 5n + 10, n$
   - **Quadratic Growth**: $\Theta(n^2)$
     - $7n^2 + 3n + 1, 4n^2 + 2n + 6$

<br>

Theta notation is invaluable for representing the exact bounds of an algorithm's time complexity, offering clear and precise information about the algorithm's performance across different input sizes.

---