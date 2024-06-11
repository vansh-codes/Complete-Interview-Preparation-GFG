```cpp
#include <iostream>
#include <string>

// Helper function for recursion
bool isPalindromeHelper(const std::string& str, int start, int end) {
    // Base case: If the start index is greater than or equal to the end index, the string is a palindrome
    if (start >= end) {
        return true;
    }
    // Check if the characters at the current indices are equal
    if (str[start] != str[end]) {
        return false;
    }
    // Move towards the center
    return isPalindromeHelper(str, start + 1, end - 1);
}

// Main function to check if the string is a palindrome
bool isPalindrome(const std::string& str) {
    return isPalindromeHelper(str, 0, str.length() - 1);
}

int main() {
    std::string str = "racecar";
    if (isPalindrome(str)) {
        std::cout << str << " is a palindrome" << std::endl;
    } else {
        std::cout << str << " is not a palindrome" << std::endl;
    }

    return 0;
}
```

### Explanation:
- The `isPalindromeHelper` function is a helper function that performs the recursive checks.
- It takes three parameters: the string `str`, the start index `start`, and the end index `end`.
- **Base Case**: If `start` is greater than or equal to `end`, it means we have checked all pairs of characters and found them to be equal, so the string is a palindrome.
- **Recursive Case**: If the characters at `start` and `end` indices are equal, the function recursively calls itself with the next inner pair of indices (`start + 1` and `end - 1`). If they are not equal, the function returns `false`.
- The `isPalindrome` function initializes the recursion by calling `isPalindromeHelper` with the start index 0 and the end index `str.length() - 1`.
- In the `main` function, an example string "racecar" is checked, and the result is printed.

This recursive approach checks pairs of characters from the outermost towards the center of the string, ensuring the string is a palindrome.

---