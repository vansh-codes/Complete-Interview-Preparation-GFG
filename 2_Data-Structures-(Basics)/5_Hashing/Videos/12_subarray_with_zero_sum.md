## Problem Statement
- **Task**: Determine if there is a subarray with a sum of zero in a given array.
- **Definition**: A subarray consists of contiguous elements within the array.

### Examples
1. **Array**: [1, 4, 13, -3, -10, 5]
   - **Output**: Yes (Subarray with zero sum exists)
2. **Array**: [-1, 2, 3, -5, 6]
   - **Output**: Yes (Subarray with zero sum exists)
3. **Array**: [3, -3, 4, -3, -1, 1]
   - **Output**: Yes (Subarray with zero sum exists)
4. **Array**: [1, 2, 3, 4, 5]
   - **Output**: No (No subarray with zero sum)

### Naive Solution
- **Approach**: Consider every possible subarray and check if its sum is zero.
- **Complexity**: O(n²)
  - **Explanation**: For each starting element, calculate the sum of all subarrays starting from that element. If any subarray sum is zero, return true.

### Efficient Solution
- **Approach**: Use prefix sums and hashing.
- **Idea**:
  1. Traverse the array from left to right.
  2. Compute the prefix sum for each element.
  3. Use a hash table to store the prefix sums.
  4. If a prefix sum repeats, it indicates a subarray with zero sum.
  5. Also, if the prefix sum itself is zero, a subarray with zero sum is found.
- **Complexity**: $O(n)$
  - **Explanation**: Each element is processed once, and hash table operations (insert and lookup) are $O(1)$.

### Implementation Steps
1. **Initialize**:
   - A hash set to store prefix sums.
   - A variable to store the current prefix sum.
2. **Traverse the Array**:
   - For each element, update the prefix sum.
   - Check if the prefix sum is zero or if it is already present in the hash set.
   - If either condition is met, return true.
   - Otherwise, add the prefix sum to the hash set.
3. **Return**:
   - If the traversal completes without finding a zero-sum subarray, return false.

### Pseudocode
```python
def has_zero_sum_subarray(arr):
    prefix_sum = 0
    prefix_set = set()
    
    for num in arr:
        prefix_sum += num
        if prefix_sum == 0 or prefix_sum in prefix_set:
            return True
        prefix_set.add(prefix_sum)
    
    return False
```

### Example Walkthrough
**Array**: [3, -3, 4, -3, -1, 1]
1. Initialize: prefix_sum = 0, prefix_set = {}
2. Traverse:
   - 3 -> prefix_sum = 3, prefix_set = {3}
   - -3 -> prefix_sum = 0, prefix_sum == 0 -> return True (Subarray [3, -3] has zero sum)

### Detailed Implementation
- **C++ Code**:
  ```cpp
  bool hasZeroSumSubarray(vector<int>& arr) {
      unordered_set<int> prefix_set;
      int prefix_sum = 0;
      for (int num : arr) {
          prefix_sum += num;
          if (prefix_sum == 0 || prefix_set.find(prefix_sum) != prefix_set.end()) {
              return true;
          }
          prefix_set.insert(prefix_sum);
      }
      return false;
  }
  ```
- **Java Code**:
  ```java
  boolean hasZeroSumSubarray(int[] arr) {
      Set<Integer> prefixSet = new HashSet<>();
      int prefixSum = 0;
      for (int num : arr) {
          prefixSum += num;
          if (prefixSum == 0 || prefixSet.contains(prefixSum)) {
              return true;
          }
          prefixSet.add(prefixSum);
      }
      return false;
  }
  ```

### Time Complexity
- **Analysis**: $O(n)$
  - **Reason**: Each element is processed once and hash table operations are constant time.

### Conclusion
- The efficient solution using prefix sums and hashing provides a significant performance improvement over the naive approach, making it feasible for larger arrays.

---