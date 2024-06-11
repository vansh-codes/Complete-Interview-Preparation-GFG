The problem is to find the sum of the digits of a given number `n` (where `n >= 0`) using a recursive function. 

### Example:
- Input: `253`
  - Output: `2 + 5 + 3 = 10`
- Input: `9987`
  - Output: `9 + 9 + 8 + 7 = 33`
- Input: `10`
  - Output: `1 + 0 = 1`

### Approach:
1. **Idea**:
   - In recursion, the problem is reduced into smaller sub-problems by removing one digit at a time.
   - Removing the last digit is simpler and can be achieved using integer division (`n / 10`).
   - The last digit can be obtained using modulus operation (`n % 10`).
   
2. **Recursive Call**:
   - For a number `n`, recursively call for `n / 10` and add the last digit `n % 10` to the result.

3. **Base Case**:
   - When `n` is 0, return 0.

### Implementation:
- **Recursive Function**:
  ```cpp
  int sumOfDigits(int n) {
      if (n == 0) return 0;
      return sumOfDigits(n / 10) + (n % 10);
  }
  ```

### Execution Flow:
- For `253`:
  - `sumOfDigits(253)` calls `sumOfDigits(25)` and adds `3`.
  - `sumOfDigits(25)` calls `sumOfDigits(2)` and adds `5`.
  - `sumOfDigits(2)` calls `sumOfDigits(0)` and adds `2`.
  - `sumOfDigits(0)` returns `0`.
  - The results are combined: `0 + 2 = 2`, `2 + 5 = 7`, `7 + 3 = 10`.

### Time and Space Complexity:
- **Time Complexity**:
  - The function makes `D+1` recursive calls, where `D` is the number of digits in `n`.
  - Time complexity: O(D).

- **Auxiliary Space Complexity**:
  - The recursion stack will hold up to `D+1` calls at most.
  - Space complexity: O(D).

### Optimization:
- To reduce the number of recursive calls, modify the base case:
  ```cpp
  int sumOfDigits(int n) {
      if (n <= 9) return n;
      return sumOfDigits(n / 10) + (n % 10);
  }
  ```
- Tail Recursive Optimazation:
    ```cpp
    int sumOfDigits(int n, int sum=0){    
        if(n==0){
            return sum;
        }
        return sumOfDigits(n/10, n%10+sum);
    }
    ```

### Iterative Solution:
- An iterative solution is more efficient due to lower overhead and less auxiliary space.
  ```cpp
  int sumOfDigitsIterative(int n) {
      int result = 0;
      while (n > 0) {
          result += n % 10;
          n /= 10;
      }
      return result;
  }
  ```

### Summary:
- The recursive solution teaches the principles of recursion but has higher overhead and space usage.
- The iterative solution is preferred for practical purposes due to its efficiency.

---