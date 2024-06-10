## Solving Recurrences: Recursion Tree Method

1. **Introduction to Recurrence Solving**:
   - Multiple methods are available for solving recurrences, such as the Master method and recursion tree method.
   - This video focuses on the recursion tree method, which is more general and doesn't require memorizing formulas.

2. **Recursion Tree Method Overview**:
   - The recursion tree method involves drawing a tree representing recursive calls and computing the total work done.
   - It provides an upper bound but is intuitive for programmers accustomed to visualizing recursion.

3. **Drawing the Recursion Tree**:
   - **Steps**:
     1. Write the non-recursive part as the root.
     2. Write the recursive calls as children.
     3. Further expand the calls by substituting values and continuing the process.

4. **Computing Total Work**:
   - Add up the values of all nodes in the tree to compute the total work done.
   - Recognize patterns to stop drawing the tree when possible.

5. **Finding the Height of the Tree**:
   - The height of the binary tree represents the number of recursive levels.
   - It can be expressed as $\Theta(\log n)$, where $n$ is the input size.

6. **Determining Total Work**:
   - The total work done is $\Theta(n \log n)$ by analyzing the number of terms and their values.
   - Lower-order terms are ignored in asymptotic analysis.

7. **Consideration of Different Constants**:
   - In practical scenarios like merge sort, different constants may be present for different operations.
   - However, the overall complexity remains $\Theta(n \log n)$ due to the dominant term.

### Summary:
The recursion tree method provides a general approach to solving recurrences without relying on specific formulas. By drawing a tree representing recursive calls and computing the total work done, programmers can intuitively analyze the time complexity of recursive algorithms. Despite variations in constants, the asymptotic complexity remains consistent, making it a practical tool for algorithm analysis.

---