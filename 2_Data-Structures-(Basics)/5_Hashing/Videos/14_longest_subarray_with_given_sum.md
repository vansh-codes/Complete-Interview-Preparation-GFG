## Longest subarray with given sum:

The problem discussed involves finding the length of the longest subarray with a given sum within a given array. A naive solution involves considering all subarrays, computing their sums, and updating the longest length encountered. However, this solution is inefficient as it has a time complexity of $O(n^2)$.

<br>

A more efficient solution is proposed, which utilizes an unordered map in C++ (hashmap in Java) to store prefix sums along with their corresponding indices. The algorithm traverses the array, updating the prefix sum at each step. If the current prefix sum minus the target sum is found in the map, it implies the existence of a subarray with the given sum. The length of this subarray is then calculated and compared with the current longest length, updating it if necessary.

<br>

Here's a structured summary of the efficient approach:

1. Initialize an empty unordered map (hashmap) to store prefix sums and their indices.
2. Initialize variables for prefix sum and the result (longest subarray length) to 0.
3. Traverse the array, updating the prefix sum at each step.
4. Check if the current prefix sum minus the target sum exists in the map.
    - If it exists, calculate the length of the subarray and update the result if necessary.
5. Insert the current prefix sum and its index into the map if it doesn't already exist.
6. Repeat steps 3-5 until the end of the array is reached.
7. Return the final result, which represents the length of the longest subarray with the given sum.

Example:
Consider the array [5, 2, 3, 10, -5, 7, 11, 2] and a target sum of 7.

1. Initialize an empty map and prefix sum to 0.
2. Traverse the array:
   - At index 0: prefix sum = 5, check map (not found), insert (5, 0).
   - At index 1: prefix sum = 7, check map (not found), insert (7, 1).
   - At index 2: prefix sum = 10, check map (not found), insert (10, 2).
   - At index 3: prefix sum = 20, check map (found), update result to 2.
   - At index 4: prefix sum = 15, check map (found), calculate length (4-0 = 4), update result to 4.
   - Continue traversing the array until the end.
3. Return the final result, which is 4, representing the length of the longest subarray with sum 7.

The time complexity of this efficient approach is $O(n)$ since it only requires a single pass through the array, and the space complexity is also $O(n)$ due to the storage of prefix sums in the map.

---