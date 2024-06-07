### Checking for Palindromes in C++

This summary outlines the method for checking whether a given string is a palindrome in C++. 

#### Problem Statement
Given a string, determine if it is a palindrome. A palindrome is a string that reads the same backward as forward. For example:
- Input: `abba`
  - Output: `Yes`
- Input: `abcba`
  - Output: `Yes`
- Input: `abc`
  - Output: `No`

#### Approach
To check if a string is a palindrome:
1. **Initialize Two Pointers**: 
   - `start` at the beginning (index 0) and `end` at the last character (`s.length() - 1`).
   
2. **Compare Characters**:
   - While `start` is less than or equal to `end`, compare characters at `start` and `end`.
   - If characters at `start` and `end` are not the same, the string is not a palindrome.
   - Increment `start` and decrement `end`.

3. **Determine the Result**:
   - If the loop completes without finding a mismatch, the string is a palindrome.

#### Example
For the string `s = "abcba"`:
- Initialize `start` to 0 and `end` to 4.
- Compare characters at indices `0` and `4`, `1` and `3`, `2` and `2`.
- Since all corresponding characters are the same, the string is a palindrome.

#### Code Implementation

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    
    int start = 0;
    int end = s.length() - 1;
    bool isPalindrome = true;

    while (start <= end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
```

#### Detailed Steps
1. **Take Input**: 
   - `std::cin >> s;`
2. **Initialize Pointers**: 
   - `int start = 0;`
   - `int end = s.length() - 1;`
3. **Loop to Compare Characters**:
   ```cpp
   while (start <= end) {
       if (s[start] != s[end]) {
           isPalindrome = false;
           break;
       }
       start++;
       end--;
   }
   ```
4. **Print Result**: 
   - If `isPalindrome` is `true`, print "Yes".
   - Otherwise, print "No".

#### Output Examples
For input `abba`:
- Output: `Yes`

For input `abc`:
- Output: `No`

This method efficiently checks if a string is a palindrome by comparing characters from both ends towards the center.