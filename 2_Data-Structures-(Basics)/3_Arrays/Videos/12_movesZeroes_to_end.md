## Move Zeroes to End

This video discusses two solutions to move all zeros in an array to the end while maintaining the relative order of non-zero elements.

<br>

**Problem:** Move all zeros in an array to the end while keeping the relative order of non-zero elements.

<br>

**Naive Solution ($O(n^2)$ time, $O(1)$ space):**

1. Traverse the array from the left side.
2. If a zero is encountered, search for the first non-zero element to the right and swap them.

**Example:**

```
Original array: [8, 5, 0, 10, 0, 20]
After moving zeros: [8, 5, 10, 20, 0, 0]
```

**Time Complexity:** $O(n^2)$ due to nested loops for searching and swapping.

<br>

**Efficient Solution ($O(n)$ time, $O(1)$ space):**

1. Maintain a `count` of non-zero elements encountered so far.
2. Traverse the array.
3. If the current element is non-zero, swap it with the element at index `count` and increment `count`.
4. Zeros are ignored.

**Explanation:**

- Non-zero elements are swapped to their correct positions based on the `count`.
- Zeros are left as-is since they will eventually be placed at the end of the array.

**Example:**

```
Original array: [10, 8, 0, 0, 12]
After moving zeros: [10, 8, 12, 0, 0]
```

**Code (Java):**

```java
void moveZeros(int arr[], int n) {
  int count = 0; // Count of non-zero elements

  // Traverse the array. If element is non-zero,
  // then replace it with the element at current
  // position 'count' and increment 'count'.
  for (int i = 0; i < n; i++)
    if (arr[i] != 0)
      if (count != i)
        swap(arr[i], arr[count]);
      then count++;
}

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
```

**Time Complexity:** O(n) due to single pass through the array.

**Space Complexity:** O(1) as only a constant amount of extra space is used.

---