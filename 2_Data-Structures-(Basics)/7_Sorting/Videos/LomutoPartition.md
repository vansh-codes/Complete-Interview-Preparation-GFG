## Lomuto Partition Algorithm

**Objective**: 
Partition an array around a given pivot using the Lomuto partitioning scheme. The algorithm ensures that elements less than or equal to the pivot are on one side and elements greater than the pivot are on the other side.

**Key Characteristics**:
1. Traverses the input array exactly once.
2. Requires constant extra space (`O(1)`).
3. Assumes the pivot is the last element of the array.

**Algorithm Steps**:
1. **Initialization**:
   - Start with two pointers, `i` initialized to `low - 1` and `j` initialized to `low`.

2. **Traversal and Comparison**:
   - Traverse the array from the `low` index to `high - 1`.
   - For each element, compare it with the pivot (which is the last element of the array):
     - If the current element `arr[j]` is smaller than the pivot:
       - Increment `i`.
       - Swap `arr[i]` with `arr[j]` to extend the window of smaller elements.
     - If the current element is greater than or equal to the pivot, do nothing and move `j` to the next element.

3. **Final Swap**:
   - After the loop ends, swap the pivot element with the element at `i + 1` to place the pivot in its correct position.
   - Return the index of the pivot, which is now correctly placed.

**Dry Run Example**:

- **Given Array**: `[10, 80, 30, 90, 40, 50, 70]`
- **Pivot**: `70`

1. Initialize `i` to `-1`.
2. Start `j` at `0` and traverse the array.
   - `10 < 70`: Increment `i` to `0` and swap `arr[i]` with `arr[j]` (swap 10 with 10).
   - `80 > 70`: Do nothing.
   - `30 < 70`: Increment `i` to `1` and swap `arr[i]` with `arr[j]` (swap 80 with 30).
   - `90 > 70`: Do nothing.
   - `40 < 70`: Increment `i` to `2` and swap `arr[i]` with `arr[j]` (swap 80 with 40).
   - `50 < 70`: Increment `i` to `3` and swap `arr[i]` with `arr[j]` (swap 90 with 50).
3. After the loop, swap the pivot `70` with `arr[i + 1]` (swap 70 with 80).

**Resulting Array**: `[10, 30, 40, 50, 70, 90, 80]`
**Pivot Index**: `4`

### Handling Arbitrary Pivot

If the pivot is not the last element, you can pre-process the array by swapping the chosen pivot with the last element and then applying the standard Lomuto partition.

**Algorithm Adjustment**:
1. Swap the pivot element with the last element.
2. Proceed with the standard Lomuto partition.

### Time and Space Complexity

- **Time Complexity**: `O(n)` - The array is traversed exactly once.
- **Space Complexity**: `O(1)` - Only a few extra variables are used.

### Summary

The Lomuto partition algorithm efficiently partitions an array around a pivot in linear time and constant space. It involves a single traversal of the array and is simpler compared to other partitioning schemes like Hoare's partition.

---