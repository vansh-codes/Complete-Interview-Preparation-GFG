### String Functions in C++

This summary covers various functions of the `string` class in C++ through an example program that demonstrates their usage.

#### Example Program and Functions

1. **Creating and Initializing a String**
   - A string `str` is created and initialized with the value `"gfg"`.
   - Example:
     ```cpp
     string str = "gfg";
     ```

2. **Length Function**
   - The `length` function is called on the string `str` to get its length.
   - Output:
     ```cpp
     cout << str.length(); // Output: 3
     ```

3. **Concatenation**
   - The string `"xyz"` is concatenated to the end of `str`.
   - After concatenation, the string becomes `"gfgxyz"`.
   - Example:
     ```cpp
     str += "xyz";
     cout << str; // Output: gfgxyz
     ```

4. **Substring Function (substr)**
   - The `substr` function extracts a substring from the string.
   - It takes two arguments: the starting index and the length of the substring.
   - Example:
     ```cpp
     string sub = str.substr(1, 3);
     cout << sub; // Output: fgx
     ```

5. **Substring Function with Single Parameter**
   - When called with a single parameter, `substr` returns the substring from the specified index to the end of the string.
   - Example:
     ```cpp
     string sub = str.substr(1);
     cout << sub; // Output: fgxyz
     ```

6. **Find Function**
   - The `find` function checks if a given substring is present in the string.
   - It returns the index of the first occurrence of the substring.
   - Example:
     ```cpp
     size_t pos = str.find("fg");
     cout << pos; // Output: 1
     ```

7. **Handling Multiple Occurrences**
   - If the substring occurs multiple times, the `find` function returns the index of the first occurrence.
   - Example:
     ```cpp
     // Assuming str = "gfgfgxyz"
     size_t pos = str.find("fg");
     cout << pos; // Output: 1 (the index of the first occurrence)
     ```

#### Summary

- **Length Function (`length`)**: Returns the length of the string.
- **Concatenation (`+=`)**: Appends another string to the end of the current string.
- **Substring Function (`substr`)**: Extracts a substring from the string. With two arguments, it returns the substring starting from the given index with the specified length. With one argument, it returns the substring from the given index to the end of the string.
- **Find Function (`find`)**: Searches for a substring within the string and returns the index of its first occurrence.

These functions enhance the functionality and ease of string manipulation in C++ compared to C-style strings.