## Introduction to Hashing Concepts

#### Overview
Before diving into hashing, it's essential to understand the concept of a Direct Address Table (DAT). The principle of hashing is based on this simple yet powerful idea.

#### Direct Address Table (DAT)
- **Problem Setup**: 
  - You have 1,000 keys with values ranging from 0 to 999.
  - You want to perform search, insert, and delete operations efficiently.
- **Operations Example**:
  - Insert 10, 20, and 119.
  - Search 10 (should return true).
  - Delete 119, then search 119 (should return false).

#### Solution using DAT
- **Boolean Array**: 
  - Create a Boolean array of size 1,000, initialized to 0.
  - Indices range from 0 to 999.
  - Insert operation: Set the index value to 1.
  - Search operation: Check if the index value is 1.
  - Delete operation: Set the index value to 0.

#### Implementation in Pseudocode
- **Insert**:
  ```cpp
  table[i] = 1;
  ```
- **Search**:
  ```cpp
  return table[i];
  ```
- **Delete**:
  ```cpp
  table[i] = 0;
  ```

#### Handling Different Ranges
- **Example**: Keys ranging from 1000 to 1999.
  - Adjust by subtracting 1000 from each key.
  - Insert 1010: Subtract 1000 and treat it as 10 in the previous example.

#### Limitations of DAT
1. **Large Keys**: 
   - Example: Phone numbers with 10 digits (array size of \(10^{10}\)).
2. **Floating Point Numbers**:
   - Example: 10.137 cannot be used as an array index.
3. **Strings and Addresses**:
   - Example: "geeksforgeeks" cannot be directly used as an index.

#### Conclusion
While the Direct Address Table is efficient for small, simple keys, it falls short when dealing with large keys, floating point numbers, strings, or other complex types. This is where hashing comes into play. In the next video, we will discuss the concept of hashing and how it overcomes these limitations.

---