## Operations on Arrays

In this video, we discuss key operations on arrays: searching and inserting elements. We'll cover the time complexities of these operations and provide implementation details.

#### 1. Searching an Element in an Array
- **Problem Statement**: Given an array and an element $X$, find whether $X$ is present in the array. If $X$ is present, return the index of its first occurrence. If not, return -1.
- **Example**: 
  - Array: [3, 5, 7, 9]
  - Search for 5: Output is 1.
  - Search for 15: Output is -1.
- **Implementation**:
  - Traverse the array from index 0 to $n-1$.
  - For each element, check if it equals $X$.
  - If found, return the index; if not, return -1 after the loop.
- **Time Complexity**: 
  - Worst-case: $O(n)$ (when the element is not present in the array).

#### 2. Inserting an Element in an Array
- **Fixed-Sized Array**: 
  - **Condition**: Cannot insert if the array is already full.
  - **Problem Statement**: Given an array with extra space, insert an element $X$ at a specified position.
  - **Example**:
    - Initial array: [5, 10, 20] with capacity 5.
    - Insert 7 at position 2: Result is [5, 7, 10, 20].
    - Insert 3 at position 2: Result is [5, 3, 7, 10, 20].
  - **Implementation**:
    - Check if the array is full.
    - Calculate the index for insertion.
    - Shift elements from the insertion point one position ahead.
    - Insert the new element.
- **Time Complexity**: 
  - Worst-case: $O(n)$ (when inserting at the beginning).
  - Best-case: $O(1)$ (when inserting at the end).

#### 3. Inserting in a Dynamic-Sized Array
- **Dynamic-Sized Arrays**:
  - **Characteristics**: Automatically resize themselves when the capacity is reached.
  - **Implementation Example**: 
    - Initially allocate some capacity (e.g., $n$).
    - Normal insertions occur as in fixed-sized arrays.
    - When full, double the size, copy elements, and insert the new element.
- **Average Time Complexity**:
  - **Amortized Analysis**:
    - For the first $n$ inserts: $O(1)$ per insert.
    - For the $n+1$-th insert: $O(n)$.
    - Average over $n+1$ inserts: $O(1)$ per insert.
  - **Conclusion**: Despite occasional costly operations (doubling and copying), the average time complexity for insertions is $O(1)$.

#### 4. Practical Considerations
- **Real-Time Applications**: Avoid dynamic-sized arrays if every insert operation must be consistently fast, as some inserts can be costly.
- **Terminology**:
  - **Push Back (C++)**: `push_back` operation in vectors.
  - **Add (Java)**: `add` operation in ArrayList.

### Summary
- **Searching**: Linear search in unsorted arrays has a time complexity of $O(n)$. Binary search in sorted arrays has a time complexity of $O(\log n)$.
- **Inserting**:
  - In fixed-sized arrays: $O(n)$ for the worst-case (inserting at the beginning) and $O(1)$ for the best-case (inserting at the end).
  - In dynamic-sized arrays: Amortized time complexity is $O(1)$, but occasional costly operations (doubling and copying) can occur.

---