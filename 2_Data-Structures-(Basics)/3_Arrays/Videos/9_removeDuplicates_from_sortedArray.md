## Removing Duplicates from a Sorted Array

This video discusses two solutions to remove duplicates from a sorted array in-place, modifying the original array.

<br>

**Problem:** Given a sorted array, remove duplicate elements and return the new size of the array containing only unique elements.

<br>

**Naive Solution (O(n) time, O(n) space):**

1. Create a temporary array of the same size as the original array.
2. Initialize a `result` variable to 1 (to keep track of the number of unique elements seen).
3. Iterate through the original array starting from the second element (since the first element is always unique in a sorted array).
4. For each element:
   - Compare it with the last element copied to the temporary array (using `result - 1` as the index).
   - If they are different, copy the current element to the temporary array at index `result` and increment `result`.
5. Copy the elements from the temporary array back to the original array up to index `result - 1`.
6. Return `result` (the new size of the array).

<br>

**Code (C++/Java):**

```cpp
int removeDuplicates(int arr[], int n) {
  int temp[n]; // Create temporary array of same size
  int result = 1; // Initialize result as 1 (for first element)
  for (int i = 1; i < n; i++) {
    if (arr[i] != arr[result - 1]) {
      temp[result] = arr[i];
      result++;
    }
  }
  // Copy elements from temp to original array
  for (int i = 0; i < result; i++) {
    arr[i] = temp[i];
  }
  return result;
}
```

**Efficient Solution (O(n) time, O(1) space):**

1. Initialize a `result` variable to 1 (similar to the naive solution).
2. Iterate through the original array starting from the second element.
3. For each element:
   - Compare it with the last element included in the result (using `result - 1` as the index).
   - If they are different, it's a unique element. Copy it to the current position (`result`) in the original array and increment `result`.
4. Return `result` (the new size of the array).

<br>

**Explanation:**

This solution directly modifies the original array to store unique elements contiguously. It avoids using extra space for a temporary array.

**Code (C++/Java):**

```cpp
int removeDuplicates(int arr[], int n) {
  int result = 1; // Initialize result as 1
  for (int i = 1; i < n; i++) {
    if (arr[i] != arr[result - 1]) {
      arr[result] = arr[i];
      result++;
    }
  }
  return result;
}
```

Both solutions achieve a time complexity of O(n) as they iterate through the array once. The naive solution has a space complexity of O(n) due to the temporary array, while the efficient solution is space-efficient with O(1) extra space.

---