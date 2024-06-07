### Traversing and Modifying Strings in C++

In C++, there are several ways to traverse and modify strings. This summary provides an overview of different methods using a sample string `"gfg"`.

#### 1. Traversing Using Indexes
You can traverse a string using indexes just like you would with a normal array. Here’s an example:
```cpp
std::string str = "gfg";
for (int i = 0; i < str.length(); ++i) {
    std::cout << str[i];
}
```
- **Output**: `gfg`
- **Explanation**: This loop uses the `length()` function to determine the string length and prints each character using indexing.

#### 2. Traversing Using a Range-Based For Loop
A range-based for loop can be used to iterate through each character in the string:
```cpp
for (char ch : str) {
    std::cout << ch;
}
```
- **Output**: `gfg`
- **Explanation**: This loop iterates over each character in the string and prints it.

#### 3. Traversing Using Iterators
C++ Standard Template Library (STL) iterators can be used to traverse strings:
```cpp
for (auto it = str.begin(); it != str.end(); ++it) {
    std::cout << *it;
}
```
- **Output**: `gfg`
- **Explanation**: This loop uses `begin()` and `end()` functions to get iterators and traverses the string by dereferencing the iterator.

#### 4. Modifying Individual Elements
You can modify individual elements of the string using indexes or iterators. Here’s an example of modifying characters by incrementing their ASCII values:
```cpp
for (int i = 0; i < str.length(); ++i) {
    str[i] = str[i] + 1;
}
std::cout << str;
```
- **Output**: `hgh`
- **Explanation**: This loop increments the ASCII value of each character in the string by 1.

Alternatively, you can use iterators to modify elements:
```cpp
for (auto it = str.begin(); it != str.end(); ++it) {
    *it = *it + 1;
}
std::cout << str;
```
- **Output**: `hgh`
- **Explanation**: This loop also increments the ASCII value of each character in the string by 1 using iterators.

### Summary
- **Index-Based Traversal**: Using indexes to access each character.
- **Range-Based For Loop**: Simplifies traversal with a cleaner syntax.
- **Iterator-Based Traversal**: Uses STL iterators for traversing and allows compatibility with other STL algorithms.
- **Modifying Elements**: Individual characters can be modified using either indexes or iterators.

These methods provide flexibility in string manipulation and traversal, leveraging C++'s rich feature set for efficient and readable code.