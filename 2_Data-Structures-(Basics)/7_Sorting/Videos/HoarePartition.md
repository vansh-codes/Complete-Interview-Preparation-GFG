## Hoare's Partition Algorithm

### Overview

Hoare's partition method is an efficient partitioning algorithm that works better than the Lomuto partition method. Like Lomuto, it requires `O(1)` extra space, `O(n)` time complexity, and only one traversal of the input array.

### Key Characteristics

1. **Pivot Selection**: The pivot is the first element of the array.
2. **Indices Initialization**: 
   - `i` starts from `low - 1`.
   - `j` starts from `high + 1`.
3. **Traversal**:
   - Move `i` from left to right.
   - Move `j` from right to left.
   - Stop when `i` and `j` cross each other or meet.

### Algorithm Steps

1. **Initialization**:
   ```cpp
   int i = low - 1;
   int j = high + 1;
   int pivot = arr[low];
   ```

2. **Loop until `i` and `j` cross**:
   ```cpp
   while (true) {
       do {
           i++;
       } while (arr[i] < pivot);

       do {
           j--;
       } while (arr[j] > pivot);

       if (i >= j) return j;

       swap(arr[i], arr[j]);
   }
   ```

### Example

Given array: `[5, 10, 3, 8, 2, 9, 4, 6]`
- Pivot: `5`

**Step-by-Step Execution**:

1. **Initialization**:
   - `i = -1`
   - `j = 8`

2. **Iteration**:
   - Increment `i` until `arr[i] >= pivot`.
   - Decrement `j` until `arr[j] <= pivot`.
   - Swap `arr[i]` and `arr[j]`.

3. **Repeat** until `i` and `j` cross.

**Result**:
- Array after partitioning: `[4, 2, 3, 5, 9, 8, 10, 6]`
- Pivot index: `3`

### Comparison with Lomuto Partition

- **Lomuto**: Fixes pivot at its correct position.
- **Hoare**: Ensures elements to the left of the pivot are less than or equal, and elements to the right are greater than or equal, but the pivot itself might not be in the correct position.

### Corner Cases

1. **Pivot is the smallest element**:
   - Stops immediately.
   - Array remains mostly unchanged except for the position of the pivot.

2. **Pivot is the largest element**:
   - Moves through the entire array.
   - Returns the correct partition point.

3. **All elements are the same**:
   - Swaps elements unnecessarily.
   - Demonstrates that Hoare's partition is not stable (changes the relative order of equal elements).

### Stability

- **Hoare's Partition**: Not stable due to swapping equal elements.
- **Lomuto's Partition**: Also not stable.
- **Naive Partition**: Stable because it maintains the relative order of equal elements by copying them into an auxiliary array.

### Summary

Hoare's partition is an efficient algorithm for partitioning arrays and typically performs better than Lomuto partition. However, it does not guarantee that the pivot is at its final sorted position. Understanding both Hoare's and Lomuto's partitions is crucial for implementing efficient sorting algorithms like quicksort.

---