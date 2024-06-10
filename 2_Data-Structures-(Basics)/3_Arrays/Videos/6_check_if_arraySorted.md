## Determining if an Array is Sorted

#### Problem Statement
Given an array, the task is to determine if the array is sorted in non-decreasing order.

#### Naive Approach
1. **Concept**:
   - Traverse the array from left to right.
   - For each element, check if there are no smaller elements on its right side.

2. **Implementation**:
   - **C++**:
     ```cpp
     bool isSorted(int arr[], int n) {
         for (int i = 0; i < n; i++) {
             for (int j = i + 1; j < n; j++) {
                 if (arr[j] < arr[i]) {
                     return false;
                 }
             }
         }
         return true;
     }
     ```
   - **Java**:
     ```java
     boolean isSorted(int[] arr) {
         int n = arr.length;
         for (int i = 0; i < n; i++) {
             for (int j = i + 1; j < n; j++) {
                 if (arr[j] < arr[i]) {
                     return false;
                 }
             }
         }
         return true;
     }
     ```

3. **Time Complexity**: $O(n^2)$ in the worst case.

#### Efficient Approach
1. **Concept**:
   - Traverse the array from left to right.
   - For each element, check if it is greater than or equal to the previous element.
   - If not, return `false`.

2. **Implementation**:
   - **C++**:
     ```cpp
     bool isSorted(int arr[], int n) {
         for (int i = 1; i < n; i++) {
             if (arr[i] < arr[i - 1]) {
                 return false;
             }
         }
         return true;
     }
     ```
   - **Java**:
     ```java
     boolean isSorted(int[] arr) {
         int n = arr.length;
         for (int i = 1; i < n; i++) {
             if (arr[i] < arr[i - 1]) {
                 return false;
             }
         }
         return true;
     }
     ```

3. **Time Complexity**: $O(n)$ always.

#### Summary
- **Naive Approach**: Compares every element with all elements to its right, resulting in $O(n^2)$ time complexity.
- **Efficient Approach**: Checks each element against its previous one, achieving $O(n)$ time complexity.
- The efficient approach is preferred due to its linear time complexity and constant auxiliary space requirement.

---