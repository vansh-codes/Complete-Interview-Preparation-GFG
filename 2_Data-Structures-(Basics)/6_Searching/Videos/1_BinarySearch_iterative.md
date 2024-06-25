## Binary Search Overview

We are given a sorted array and an element to search for within the array. The goal is to find the index of this element. If the element is not present, the function should return -1. If the element has multiple occurrences, any index of its occurrences can be returned.

**Examples:**

1. Array: [10, 20, 30, 40, 50, 60, 70], Element: 20, Output: 1
2. Array: [10, 20, 25, 30, 40], Element: 25, Output: 2
3. Array: [10, 20, 30, 40, 50], Element: 20, Output: -1 (if not present)
4. Array: [10, 15, 20, 25, 30], Element: 5, Output: -1 (if not present)
5. Array: [5, 10, 10, 15, 20], Element: 10, Output: 1 or 2 (either index)

**Naive Approach:**

- Perform a linear search comparing each element with the target.
- Time complexity: $O(n)$ in the worst case (when the element is not present).

**Binary Search Concept:**

Binary search leverages the fact that the array is sorted to optimize the search process.

1. **Initialize:**
   - `low` index at the start of the array.
   - `high` index at the end of the array.

2. **Compute Midpoint:**
   - `mid = (low + high) // 2`

3. **Three Cases:**
   - **Case 1:** `arr[mid] == x` - Return the `mid` index.
   - **Case 2:** `arr[mid] > x` - Search in the left half (`high = mid - 1`).
   - **Case 3:** `arr[mid] < x` - Search in the right half (`low = mid + 1`).

4. **Repeat Steps:**
   - Continue adjusting `low` and `high` until `low` is greater than `high`.

**Examples of Binary Search:**

1. **Example 1: Search for 60 in [10, 20, 30, 40, 50, 60, 70]:**
   - Initial `low = 0`, `high = 6`
   - Compute `mid = 3`, `arr[mid] = 40` (smaller than 60), update `low = 4`
   - Compute `mid = 5`, `arr[mid] = 60` (found), return index 5.

2. **Example 2: Search for 25 in [10, 20, 30, 40, 50, 60]:**
   - Initial `low = 0`, `high = 5`
   - Compute `mid = 2`, `arr[mid] = 30` (greater than 25), update `high = 1`
   - Compute `mid = 0`, `arr[mid] = 10` (smaller than 25), update `low = 1`
   - Compute `mid = 1`, `arr[mid] = 20` (smaller than 25), update `low = 2`
   - `low > high`, return -1 (not found).

**Summary of Steps:**

1. Compute the midpoint index.
2. Compare the midpoint value with the target.
3. Adjust the search range based on the comparison.
4. Repeat until the target is found or the search range is exhausted.

**Time Complexity:**

- Binary search operates in $O(\log n)$ time, as it reduces the search range by half with each iteration.

**Key Points:**

- Binary search only works on sorted arrays.
- It is more efficient than linear search for large datasets due to its logarithmic time complexity.
- It may return any index of the element if there are multiple occurrences.

---