### Reversing a String in C++

This summary provides an overview of a method to reverse a given string in C++. 

#### Problem Statement
Given a string, reverse it. For example:
- Input: `geeks`
- Output: `skeeg`

- Input: `abbac`
- Output: `cabba`

#### Approach
To reverse a string, you can use a simple algorithm that involves iterating over the string from the end to the beginning and constructing a new reversed string.

1. **Initialize an empty string `new_str`**:
   - This will store the reversed string.

2. **Determine the length of the input string `s`**:
   - Use `s.length() - 1` to get the index of the last character.

3. **Iterate from the end of the string to the beginning**:
   - Append each character to `new_str`.

4. **Print the reversed string**.

#### Example
For the string `s = "geeks"`:
- Initialize `new_str` as an empty string.
- Set `l` to `s.length() - 1`, which is `4`.
- Iterate from `4` to `0`, appending each character to `new_str`.

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s, new_str;
    std::cout << "Enter a string: ";
    std::cin >> s;
    
    int l = s.length() - 1;
    
    while (l >= 0) {
        new_str += s[l];
        l--;
    }
    
    std::cout << "Reversed string: " << new_str << std::endl;
    return 0;
}
```

#### Detailed Steps
1. **Take input**: `std::cin >> s;`
2. **Initialize an empty string**: `std::string new_str = "";`
3. **Calculate length**: `int l = s.length() - 1;`
4. **Iterate using a while loop**:
   ```cpp
   while (l >= 0) {
       new_str += s[l];
       l--;
   }
   ```
5. **Print the result**: `std::cout << "Reversed string: " << new_str << std::endl;`

#### Output Examples
For input `geeks`:
- Output: `skeeg`

For input `abbac`:
- Output: `cabba`

This code efficiently reverses the input string and prints the reversed string as output.