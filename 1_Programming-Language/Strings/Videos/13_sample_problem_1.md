### Finding the Extra Character in Two Strings

#### Problem Description
Given two strings, where the second string has one extra character compared to the first, identify the extra character. 

#### Example
- Input: `str1 = "abcd"`, `str2 = "abecd"`
  - Output: `e`
- Input: `str1 = "abba"`, `str2 = "abbaa"`
  - Output: `a`

#### Constraints
- Length of `str1` is `n`.
- Length of `str2` is `n + 1`.

#### Method 1: Sorting and Comparing
1. **Approach**:
   - Sort both strings.
   - Compare characters at each index.
   - Return the first mismatching character from `str2`.
   - If no mismatch is found during the comparison, return the last character of `str2`.

2. **Example**:
   - Input: `str1 = "abcd"`, `str2 = "abecd"`
   - Sorted `str1`: `abcd`
   - Sorted `str2`: `abcde`
   - Compare indices: All match except the last character `e`.
   - Output: `e`

3. **Time Complexity**: 
   - Sorting takes `O(n log n)`.
   - Linear comparison takes `O(n)`.
   - Overall: `O(n log n)`.

#### Method 2: Using Count Array
1. **Approach**:
   - Use a count array to track character frequencies.
   - Traverse `str2` and increment the count for each character.
   - Traverse `str1` and decrement the count for each character.
   - The character with count 1 in the end is the extra character.

2. **Example**:
   - Input: `str1 = "abba"`, `str2 = "abbaa"`
   - Count after traversing `str2`: `{'a': 3, 'b': 2}`
   - Count after traversing `str1`: `{'a': 1, 'b': 0}`
   - Character with count 1 is `a`.
   - Output: `a`

3. **Time Complexity**: 
   - Building count array takes `O(n)`.
   - Overall: `O(n)`.

#### Method 3: Using Bitwise XOR
1. **Approach**:
   - Use the XOR operator to find the extra character.
   - XOR all characters in both strings.
   - The properties of XOR ensure that characters present in both strings cancel out, leaving the extra character.

2. **Example**:
   - Input: `str1 = "abba"`, `str2 = "abbaa"`
   - XOR all characters: `a^b^b^a^a^b^b^a^a`
   - Result is the extra character `a`.

3. **Properties of XOR**:
   - `x ^ x = 0`
   - `x ^ 0 = x`
   - XOR is commutative and associative.

4. **Time Complexity**: 
   - Traversing both strings takes `O(n)`.
   - Overall: `O(n)`.

#### Code Implementation (Method 3: Using XOR)

```cpp
#include <iostream>
#include <string>

char findExtraCharacter(const std::string &str1, const std::string &str2) {
    char result = 0;
    for (char c : str1) {
        result ^= c;
    }
    for (char c : str2) {
        result ^= c;
    }
    return result;
}

int main() {
    std::string str1 = "abcd";
    std::string str2 = "abecd";
    char extraChar = findExtraCharacter(str1, str2);
    std::cout << "The extra character is: " << extraChar << std::endl;
    return 0;
}
```

#### Explanation of the Code
1. **Function**: `findExtraCharacter`
   - **Input**: Two strings `str1` and `str2`.
   - **Process**: XOR all characters in both strings.
   - **Output**: The extra character.

2. **Main Function**:
   - **Input**: Example strings `str1 = "abcd"`, `str2 = "abecd"`.
   - **Output**: Prints the extra character.

#### Summary
This problem can be solved using various approaches, with the XOR method being the most efficient due to its linear time complexity. Each method highlights different strategies to identify the extra character efficiently.