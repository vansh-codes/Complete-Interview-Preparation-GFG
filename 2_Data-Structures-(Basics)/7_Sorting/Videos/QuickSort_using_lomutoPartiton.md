## Quicksort Algorithm with Lomuto Partition

### Overview

In this video, we explore the quicksort algorithm using the Lomuto partition method. The algorithm efficiently sorts an array by recursively partitioning it around a pivot element.

### Recap of Lomuto Partition

- **Lomuto Partition**:
  - Takes the last element as the pivot.
  - Places the pivot at its correct position in the sorted array.
  - Ensures elements to the left of the pivot are smaller or equal.
  - Ensures elements to the right of the pivot are greater or equal.
  - Returns the index of the pivot.

### Example

Given array: `[4, 3, 5, 9, 8, 10, 7]`

1. **Initial Call**:
   - L = 0, H = 6
   - Array: `[4, 3, 5, 9, 8, 10, 7]`

2. **Partition**:
   - Pivot: 7
   - Result: `[4, 3, 5, 7, 8, 10, 9]`
   - Pivot Index: 3

3. **Recursive Calls**:
   - Left subarray: `[4, 3, 5]`
     - Pivot: 5
     - Result: `[4, 3, 5]`
     - Pivot Index: 2
   - Right subarray: `[8, 10, 9]`
     - Pivot: 9
     - Result: `[8, 9, 10]`
     - Pivot Index: 1

### Quicksort Algorithm Steps

1. **Initialization**:
   ```cpp
   void quicksort(int arr[], int low, int high) {
       if (low < high) {
           int p = lomutoPartition(arr, low, high);
           quicksort(arr, low, p - 1);
           quicksort(arr, p + 1, high);
       }
   }
   ```

2. **Lomuto Partition Function**:
   ```cpp
   int lomutoPartition(int arr[], int low, int high) {
       int pivot = arr[high];
       int i = low - 1;
       for (int j = low; j < high; j++) {
           if (arr[j] <= pivot) {
               i++;
               swap(arr[i], arr[j]);
           }
       }
       swap(arr[i + 1], arr[high]);
       return i + 1;
   }
   ```

### Step-by-Step Execution

1. **Initial Call**:
   - `quicksort(arr, 0, 6)`

2. **First Partition**:
   - Pivot: 7
   - Array: `[4, 3, 5, 7, 8, 10, 9]`
   - Recursive Calls: `quicksort(arr, 0, 2)`, `quicksort(arr, 4, 6)`

3. **Left Subarray Partition**:
   - Pivot: 5
   - Array: `[3, 4, 5]`
   - Recursive Calls: `quicksort(arr, 0, 0)`, `quicksort(arr, 2, 2)`

4. **Right Subarray Partition**:
   - Pivot: 9
   - Array: `[8, 9, 10]`
   - Recursive Calls: `quicksort(arr, 4, 4)`, `quicksort(arr, 6, 6)`

### Key Points

- **Lomuto Partition** ensures the pivot is placed at the correct position, with all smaller elements on the left and larger elements on the right.
- **Recursive Calls** continue to sort the left and right subarrays.
- **Efficiency**: The algorithm runs in `O(n log n)` on average but can degrade to `O(n^2)` in the worst case.

### Comparison with Hoare's Partition

- **Hoare's Partition**:
  - Uses the first element as the pivot.
  - Does not guarantee the pivot is at its final sorted position.
  - Generally performs better in practice due to fewer swaps.

### Conclusion

Quicksort with Lomuto partition is an efficient and widely used sorting algorithm. Understanding both Lomuto and Hoare's partition methods is crucial for implementing and optimizing quicksort effectively. In the next video, we will explore different pivot selection methods and analyze the performance of quicksort.

---