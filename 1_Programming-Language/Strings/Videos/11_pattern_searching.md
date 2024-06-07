### Pattern Searching in C++

This summary explains the process of searching for a pattern within a text string in C++.

#### Problem Statement
Given a text string and a pattern, find all occurrences of the pattern within the text.

#### Example
For example, if the text is "Geeks for geeks" and the pattern is "geek", the output should indicate that the pattern is found at positions 0 and 8.

#### Approach
1. **Using `find()` Function**:
   - Utilize the `find()` function in C++ to search for the pattern within the text.
   - This function returns the starting index of the pattern in the text or `string::npos` if the pattern is not found.
   - Iterate through the text and search for the pattern starting from the previous match index + 1.

#### Code Implementation

```cpp
#include <iostream>
#include <string>

void printIndex(const std::string& text, const std::string& pattern) {
    size_t found = text.find(pattern);
    
    while (found != std::string::npos) {
        std::cout << "Pattern found at " << found << std::endl;
        found = text.find(pattern, found + 1);
    }
}

int main() {
    std::string text, pattern;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);
    std::cout << "Enter pattern: ";
    std::getline(std::cin, pattern);
    
    printIndex(text, pattern);
    
    return 0;
}
```

#### Detailed Steps
1. **Input**:
   - Accept input for the text and the pattern.
2. **Function Call**:
   - Call the `printIndex()` function with the text and pattern arguments.
3. **Pattern Search Function**:
   - Use the `find()` function to locate the pattern within the text.
   - Start the search from the previous match index + 1 to find subsequent occurrences.
   - Print the index where each occurrence of the pattern is found.

#### Output Examples
For text "Geeks for geeks" and pattern "geek":
- Output: 
  ```
  Pattern found at 0
  Pattern found at 8
  ```

This method efficiently searches for a pattern within a text string by utilizing the `find()` function in C++ and iterating through the text to find all occurrences of the pattern.