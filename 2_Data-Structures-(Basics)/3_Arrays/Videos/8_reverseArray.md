## Reversing an Array

This video discusses how to reverse an array in-place, modifying the original array.

**Problem:** Given an array of numbers, reverse the order of its elements.

**Solution:**

1. **Two pointers:**
   - Initialize two variables:
      - `low`: Index of the first element.
      - `high`: Index of the last element.
2. **Swap and move:**
   - Swap the elements at `low` and `high` indices.
   - Increment `low` and decrement `high`.
3. **Loop:**
   - Repeat steps 2.1 and 2.2 until `low` becomes greater than or equal to `high`.

**Explanation:**

The algorithm iterates through the array, swapping elements from the beginning and end. As it progresses, the `low` and `high` pointers move towards each other, effectively reversing the element order. The loop stops when the pointers meet or cross, indicating the entire array has been reversed.

**Code (C++/Java):**

```cpp
void reverseArray(int arr[], int n) {
  int low = 0;
  int high = n - 1;
  while (low < high) {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}
```

**Time Complexity:** $\Theta(n)$ - Iterates through the array almost n/2 times. <br>
**Space Complexity:** $\Theta(1)$ - Uses constant extra space for variables.
<br><br>
**Additional Considerations:**

- The video mentions handling odd and even-sized arrays. The algorithm works for both cases as the loop stops when the pointers meet, regardless of the array size.

---