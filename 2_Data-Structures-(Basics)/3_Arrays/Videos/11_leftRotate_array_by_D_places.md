## Left Rotation of an Array by D Elements

This video discusses three solutions to rotate an array by D elements (counter-clockwise) in-place, modifying the original array.

<br>

**Left Rotation:**

A left rotation by D positions signifies moving all elements of the array D positions to the left (counter-clockwise). The first D elements become the last D elements.

<br>

**Example:**

Consider the array `[1, 2, 3, 4, 5]`. After a left rotation by 2, the array becomes `[3, 4, 5, 1, 2]`.

<br>

**Solutions:**

1. **Naive Solution (\( \Theta(n*D) \) time, \( \Theta(1) \) space):**
   - Call the left rotate by one function D times. (Discussed in previous video)

2. **Efficient Solution with \( \Theta(D) \) Extra Space (\( \Theta(n) \) time, \( \Theta(D) \) space):**
   - Create a temporary array of size D to store the first D elements.
   - Shift the remaining elements (n-D) to the left by D positions.
   - Copy the temporary elements back to the beginning of the array.

3. **Efficient Solution with \( \Theta(1) \) Extra Space (Theta(n) time, \( \Theta(1) \) space):**
   - Reverse the first D elements.
   - Reverse the remaining (n-D) elements.
   - Reverse the entire array.

**Explanation (Solution 3):**

1. Reversing the first D elements positions these elements at the end of the array.
2. Reversing the remaining (n-D) elements positions the original (n-D) elements at the beginning of the array (shifted D positions to the left).
3. Reversing the entire array moves the reversed (n-D) elements to their correct positions (originally at the end, now at the beginning) and the reversed first D elements to their correct positions (originally at the beginning, now at the end).

**Code (C++/Java - Solution 3):**

```cpp
void leftRotate(int arr[], int n, int d) {
    if(d>n){
        d = d%n;
    }
    reverse(arr, 0, d - 1); // Reverse first D elements
    reverse(arr, d, n - 1); // Reverse remaining n-D elements
    reverse(arr, 0, n - 1); // Reverse entire array
}

void reverse(int arr[], int low, int high) {
  while (low < high) {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}
```

**Time Complexity:**

- Solution 1: \( \Theta(n*D) \)
- Solution 2 & 3: \( \Theta(n) \)

**Space Complexity:**

- Solution 1 & 3: \( \Theta(1) \)
- Solution 2: \( \Theta(D) \)

---