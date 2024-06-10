## Big O Notation

1. **Introduction to Big O Notation**:
   - Big O notation represents an upper bound on the order of growth.
   - It's used when an exact bound is unknown or when expressing an upper bound is sufficient.

2. **Finding Big O Notation**:
   - To find the Big O notation for an expression, determine its order of growth and represent it in Big O notation.
   - Lower order terms and leading constants are ignored in determining the order of growth.

3. **Mathematical Definition of Big O Notation**:
   - Big O notation mathematically states that if $f(n) \leq C \cdot g(n)$ for all $n \geq n_0$, then $f(n)$ is $O(g(n))$.
   - Example: $f(n) = 2n + 3$ can be represented as $O(n)$.

4. **Examples of Big O Notation**:
   - Constant values are represented as $O(1)$.
   - Linear growth is represented as $O(n)$.
   - Logarithmic growth can also be represented as $O(n)$, although $O(\log n)$ is more precise.

5. **Applications of Big O Notation**:
   - Use Theta notation for exact bounds, reserving Big O for upper bounds.
   - It's useful for analyzing algorithm time complexity, especially in worst-case scenarios.
   - Example: A function to check if a number is prime has a time complexity of $O(\sqrt{n})$.

Overall, Big O notation provides a concise way to express the time complexity of algorithms, making it easier to analyze their performance and scalability.

---