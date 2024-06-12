## Introduction to Hashing

#### Recap of Direct Address Table
- **Concept**: Use keys as indexes in an array to perform search, insert, and delete operations in O(1) time.
- **Boolean Array**: 0 indicates the element is not present, and 1 indicates it is present.
- **Limitations**:
  - Only works for small values that can be used as array indices.
  - Cannot handle large keys (e.g., phone numbers), floating-point numbers, strings, or addresses.

#### Introduction to Hashing
- **Idea**: Transform large keys (e.g., phone numbers, names, employee IDs) into smaller values using a hash function.
- **Hash Function**: Converts large keys into small values that can be used as indices in an array (hash table).

#### Requirements for a Hash Function
1. **Consistency**: The hash function should generate the same index for the same key every time.
2. **Range**: It should generate values within the range of 0 to $M-1$ (where M is the hash table size).
3. **Efficiency**: The hash function should be fast, ideally $O(1)$ for integers and $O(length)$ for strings.
4. **Uniform Distribution**: It should uniformly distribute the input keys across the hash table to minimize collisions.

#### Hash Functions for Different Types of Keys
1. **Large Integer Keys**:
   - **Modulo Division**: Use the remainder when the key is divided by the hash table size (e.g., phone number modulo 13).

2. **Hash Function for Strings**:
   - **Sum of ASCII Values**: Compute the sum of ASCII values of all characters, then take modulo M.
   - **Weighted Sum**: Use a constant (e.g., 33) raised to the power of the character's position to avoid permutation issues and then take modulo M.

3. **Universal Hashing**:
   - **Concept**: Use a set of hash functions and randomly pick one to ensure a more uniform distribution and expected $O(1)$ time complexity.

#### Challenges and Solutions
- **Collisions**: Two keys mapping to the same index.
  - **Handling**: Discussed in the next video, as collision handling is a crucial aspect of effective hashing.

#### Key Points
- **Direct Address Table**: Efficient but limited to small keys.
- **Hashing**: Extends the concept to handle larger, more complex keys by using hash functions.
- **Uniform Distribution**: Critical for the efficiency of hash tables.
- **Future Topics**: Collision handling will be covered to address the challenge of multiple keys mapping to the same index.

### Conclusion
Hashing is a powerful technique that allows efficient search, insert, and delete operations for large and complex key sets by converting them into manageable indices using hash functions. The upcoming video will address the handling of collisions, which is essential for maintaining the efficiency of hash tables.

---