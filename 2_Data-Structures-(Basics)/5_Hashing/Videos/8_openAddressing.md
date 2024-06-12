## Summary of Implementation of Open Addressing

#### Introduction
- **Open Addressing**: Another method of handling collisions in hash tables, different from chaining.
- All items go into a single array without forming any other data structures.
- **Requirement**: The number of slots in the hash table should be greater than or equal to the number of keys to be inserted.
- **Advantage**: Cache-friendly due to everything being in the same array.

#### Open Addressing Methods
1. **Linear Probing**
2. **Quadratic Probing**
3. **Double Hashing**

#### Example of Linear Probing
1. **Initialization**:
   - Hash function: `hash(key) = key % 7`
   - Hash table size: 7 (indexes 0 to 6)

2. **Insertion Process**:
   - Compute the hash value and insert the key at the corresponding index.
   - If a collision occurs, linearly search for the next empty slot.
   - Example insertions:
     - 50 → Index 1
     - 51 → Index 2
     - 49 → Index 0
     - 16 → Index 3 (after linear probing due to collision at index 2)
     - Continue this process for all keys.

3. **Search Process**:
   - Compute the hash value and check the corresponding index.
   - If the key is not found, linearly search the array until the key is found or an empty slot is encountered.
   - Stop the search when either the key is found or an empty slot is reached, or after traversing the whole table.

4. **Deletion Process**:
   - Mark the slot as "deleted" instead of making it empty to avoid breaking the search chain.
   - Insertions can use slots marked as "deleted".

#### Issues with Linear Probing
1. **Clustering**:
   - Primary clusters form when collisions occur, causing subsequent keys to have higher chances of collision.
   - As clusters grow, operations (search, insert, delete) become more costly.

2. **Quadratic Probing**:
   - Instead of linear probing, quadratic probing uses `i^2` to find the next slot.
   - Reduces primary clustering but introduces secondary clustering.
   - Guarantees finding an empty slot if the load factor is less than 0.5 and the hash table size is a prime number.

#### Example of Quadratic Probing
1. **Initialization**:
   - Hash function: `hash(key) = key % 7`
   - Hash table size: 7 (indexes 0 to 6)

2. **Probing Process**:
   - On collision, use `i^2` to find the next slot.
   - First collision: `i = 1` (next slot)
   - Second collision: `i = 2` (`i^2 = 4`, fourth slot)
   - Continue this process for subsequent collisions.

#### Double Hashing (Preview)
- Addresses the issue of secondary clustering in quadratic probing.
- Uses a second hash function to determine the interval between probes, providing more randomness and reducing clustering.

#### Summary
- **Open Addressing**: Handles collisions by placing all items in a single array.
- **Linear Probing**: Simple, but leads to primary clustering.
- **Quadratic Probing**: Reduces primary clustering but can still form secondary clusters.
- **Double Hashing**: Uses a secondary hash function to mitigate clustering issues.

This video provides a detailed explanation of open addressing, focusing on linear probing and quadratic probing, their implementations, and associated challenges. The next step involves understanding double hashing to address secondary clustering issues in quadratic probing.

---