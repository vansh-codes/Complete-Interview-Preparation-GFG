## Left Rotation of an Array by One Element

This video explains how to rotate an array by one element to the left (counter-clockwise) in-place, modifying the original array.
<br><br>
**Left Rotation:**

A left rotation by one position signifies moving all elements of the array one position to the left (counter-clockwise). The first element becomes the last element.

**Example:**

Consider the array `[1, 2, 3, 4, 5]`. After a left rotation by one, the array becomes `[2, 3, 4, 5, 1]`.

<br>

**Solution (O(n) time, O(1) space):**

1. Store the first element of the array in a temporary variable `temp`.
2. Shift all elements from the second position (`i = 1`) to the end (`i < n`) one position to the left using a loop: `arr[i] = arr[i - 1]`.
3. Place the temporary element (`temp`) at the last position: `arr[n - 1] = temp`.

**Code (C++/Java):**

```cpp
void leftRotateByOne(int arr[], int n) {
  int temp = arr[0];
  for (int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
}
```

**Explanation:**

- The temporary variable `temp` holds the first element for later placement at the end.
- The loop iterates from the second element (`i = 1`) to the second last element (`i < n`) and shifts each element one position to the left using `arr[i - 1] = arr[i]`. This creates a space at the beginning for the first element.
- Finally, the temporary variable `temp` (containing the original first element) is assigned to the last position (`arr[n - 1]`).

**Time Complexity:** \( \Theta(n) \) due to the single loop iterating through the array. <br>
**Space Complexity:** \( \Theta(1) \) as it uses only a constant amount of extra space for the temporary variable.

---