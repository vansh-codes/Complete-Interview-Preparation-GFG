## Quicksort Algorithm using Hoare's Partition

### Overview

This video covers the QuickSort algorithm using Hoare's partition. It emphasizes how the main QuickSort algorithm changes based on the partition method used. Understanding both Lomuto and Hoare's partition methods is essential as they are taught differently in various academic environments.

### Hoare's Partition Method

- **Pivot Selection**: The first element is chosen as the pivot.
- **Partitioning**: 
  - Elements smaller than or equal to the pivot are placed on the left.
  - Elements greater than or equal to the pivot are placed on the right.
- **Recursion**:
  - Independently sort the left and right partitions.
  - Once the partitions are sorted, the entire array is sorted.

### Example

Given array: `[8, 5, 4, 7, 3, 9, 10]`

1. **Initial Call**:
   - `l = 0, h = 6`
   - Pivot: 8
   - Result after partitioning: `[5, 4, 7, 3, 8, 9, 10]`
   - Pivot Index: 3

2. **Recursive Calls**:
   - Left subarray: `[5, 4, 7, 3]`
     - Partitioning result: `[3, 4, 7, 5]`
     - Pivot Index: 1
     - Further recursive calls:
       - `[3]` (immediate return)
       - `[4]` (immediate return)
   - Right subarray: `[9, 10]`
     - Partitioning result: `[9, 10]`
     - Pivot Index: 4
     - Further recursive calls:
       - `[9]` (immediate return)
       - `[10]` (immediate return)

### Quicksort Algorithm Steps

1. **Initialization**:
   ```cpp
   void quicksort(int arr[], int low, int high) {
       if (low < high) {
           int p = hoarePartition(arr, low, high);
           quicksort(arr, low, p);
           quicksort(arr, p + 1, high);
       }
   }
   ```

2. **Hoare Partition Function**:
   ```cpp
   int hoarePartition(int arr[], int low, int high) {
       int pivot = arr[low];
       int i = low - 1;
       int j = high + 1;
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
   }
   ```

### Key Points

- **Hoare's Partition** ensures elements on the left are smaller than or equal to the pivot, and elements on the right are greater than or equal.
- **Recursive Calls** are made for the left and right subarrays.
- **Efficiency**: Hoare's partition is generally faster than Lomuto's partition and is considered to be about three times faster on average.

### Comparison with Lomuto's Partition

- **Lomuto Partition**:
  - Chooses the last element as the pivot.
  - Ensures the pivot is placed at its correct position.
  - Recursively calls `quicksort` for subarrays `l to p-1` and `p+1 to h`.

- **Hoare's Partition**:
  - Chooses the first element as the pivot.
  - Does not guarantee the pivot is at its final sorted position.
  - Recursively calls `quicksort` for subarrays `l to p` and `p+1 to h`.

### Conclusion

QuickSort with Hoare's partition is an efficient sorting algorithm. It is typically faster than using Lomuto's partition, though both methods have their use cases. Understanding the differences and implementations of both partition methods is crucial for effectively applying QuickSort in various scenarios.

---