## Operations on Arrays

In this video, we discuss the delete operation on arrays and provide an overview of time complexities for various array operations.

#### Delete Operation in Arrays
- **Problem Statement**: Given an array and an element to delete, remove the element, reduce the size of the array by one, and maintain the same capacity.
- **Example**: 
  - Initial array: [2, 4, 6, 8, 10], delete 6: Resulting array: [2, 4, 8, 10]
  - Initial array: [3, 5, 7, 9], delete 9 (last element): Resulting array: [3, 5, 7]
- **Implementation**:
  - Traverse the array to find the element.
  - If the element is found, shift all elements after it one position to the left.
  - If the element is not found, return the original size.
- **Time Complexity**: 
  - **Worst-case**: \( \Theta(n) \) as the array might need to be traversed entirely and elements shifted.

#### Code Example
```cpp
int deleteElement(int arr[], int size, int x) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == x)
            break;
    }

    if (i == size)
        return size;

    for (int j = i; j < size - 1; j++) {
        arr[j] = arr[j + 1];
    }

    return size - 1;
}
```

#### Overview of Array Operations
- **Insert Operation**:
  - **Beginning**: \( O(n) \) (most costly as elements need to be shifted).
  - **End**: \( O(1) \) (if there is space available).
- **Search Operation**:
  - **Unsorted Array**: \( O(n) \) (linear search).
  - **Sorted Array**: \( O(\log n) \) (binary search).
- **Delete Operation**:
  - **General Case**: \( O(n) \) (shifting elements after deletion).
  - **Last Element**: \( O(1) \) (simple size reduction).
- **Access Operation**:
  - **Get \( i \)-th Element**: \( O(1) \) (random access).
  - **Update \( i \)-th Element**: \( O(1) \) (direct assignment).

#### Summary
- Arrays offer efficient random access and cache friendliness, making them useful in many scenarios.
- The time complexities of various operations in arrays vary, with some being \( O(n) \) and others \( O(1) \).
- Operations like insertion and deletion can be optimized in specific cases, such as inserting at the end or deleting the last element.

---