## Finding the Second Largest Element in an Array

This video discusses two algorithms to find the index of the second largest element in an array.

**Problem:** Given an array of numbers, find the index of the second largest element.
<br><br>

**Naive Solution (Two Traversals):**

1. **Find the Largest Element:** This function iterates through the array and keeps track of the index of the largest element seen so far.
2. **Find the Second Largest Element:** This function iterates through the array again, excluding the largest element (found in step 1), and keeps track of the index of the largest element among the remaining elements. This element is the second largest.

**Code (C++/Java):**

```cpp
int getLargest(int arr[], int n) {
  int largest = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[largest]) {
      largest = i;
    }
  }
  return largest;
}

int secondLargest(int arr[], int n) {
  int result = -1;
  int largest = getLargest(arr, n);
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[largest]) {
      if (result == -1 || arr[i] > arr[result]) {
        result = i;
      }
    }
  }
  return result;
}
```

**Time Complexity:** O(n) - Two traversals of the array.
**Space Complexity:** O(1) - Constant extra space.

**Efficient Solution (One Traversal):**

1. Initialize two variables:
   - `largest`: Stores the index of the largest element seen so far.
   - `result`: Stores the index of the second largest element (can be -1 initially).
2. Iterate through the array.
3. For each element:
   - If the element is greater than the current `largest`:
     - Update `result` as the previous `largest` and update `largest` as the current element's index.
   - Else if the element is smaller than `largest` but greater than the current `result`:
     - Update `result` as the current element's index.
4. Return `result`.

**Explanation:**

This approach keeps track of the largest and potential second largest elements seen so far in a single pass. It uses constant time comparisons to update these based on the incoming elements.

**Code (C++/Java):**

```cpp
int secondLargest(int arr[], int n) {
  int result = -1;
  int largest = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[largest]) {
      result = largest;
      largest = i;
    } else if (arr[i] != arr[largest] && arr[i] > arr[result]) {
      result = i;
    }
  }
  return result;
}
```

**Time Complexity:** \( \Theta(n) \) - One traversal of the array. <br>
**Space Complexity:** \( \Theta(1) \) - Constant extra space.

---