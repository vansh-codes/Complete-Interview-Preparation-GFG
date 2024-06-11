The problem involves calculating the sum of the first `n` natural numbers. While the direct formula for this sum is `n * (n + 1) / 2`, the task is to solve it using recursion. 

### Recursive Approach Explanation

1. **Recursive Relation**:
   - The sum of the first `n` natural numbers can be computed by adding `n` to the sum of the first `n-1` natural numbers. This gives the relation: `getSum(n) = getSum(n-1) + n`.

2. **Base Case**:
   - When `n` is 0, the sum is 0. This serves as the base case to stop further recursion: `if n == 0, return 0`.

3. **Recursive Function Execution**:
   - `getSum(n)` will call `getSum(n-1)`, which will call `getSum(n-2)`, and so on, until `getSum(0)` is reached.
   - The results will then be added back up the call stack: 
     - `getSum(0)` returns 0.
     - `getSum(1)` returns 1 + 0 = 1.
     - `getSum(2)` returns 2 + 1 = 3.
     - And so forth, until `getSum(n)` returns the final sum.

4. **Code**:
    - Solution 1: 
    ```cpp
    int findSumUptoN(int n){    // this is not tail recursive 
        if(n==1 || n==0) return n;
        if(n<0) return -1;          // to handle negative input cases
        return n+findSumUptoN(n-1);
    }
    ```
    - Solution 2:
    ```cpp
        int findSumUptoN(int n,int k=0){    // this is tail recursive 
            if(n==0) return k;
            if(n<0) return -1;   // to handle negative input cases
            return findSumUptoN(n-1,n+k);
        }
    ```

### Time and Space Complexity

1. **Time Complexity**:
   - The function makes `n+1` calls (from `getSum(n)` to `getSum(0)`).
   - Each call performs a constant amount of work (addition and conditional check).
   - Thus, the time complexity is $\Theta(n)$.

2. **Auxiliary Space Complexity**:
   - The recursion call stack will hold up to `n+1` calls at any point in the worst case (from `getSum(n)` down to `getSum(0)`).
   - Therefore, the auxiliary space complexity is $\Theta(n)$.

### Summary

- The problem is to compute the sum of the first `n` natural numbers using recursion.
- The base case is `getSum(0) = 0`.
- The recursive case is `getSum(n) = getSum(n-1) + n`.
- The time complexity of this approach is $\Theta(n)$.
- The auxiliary space complexity (due to the recursion stack) is also $\Theta(n)$.

---