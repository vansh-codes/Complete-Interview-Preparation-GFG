## Summary of Implementation of Double Hashing

#### Introduction
- **Double Hashing**: A method of collision handling in hash tables that uses two hash functions.
- **First Hash Function**: The original hash function (e.g., `key % m`).
- **Second Hash Function**: Used to find the next slot in case of a collision (e.g., `6 - (key % 6)`).

#### Key Points
- **No Double Size Requirement**: Unlike quadratic probing, double hashing does not require a hash table size to be double the number of keys, as long as `m` (the table size) is relatively prime to the second hash function.
- **Avoids Clustering**: Double hashing avoids both primary and secondary clustering, distributing keys more uniformly.
- **Relatively Prime**: The table size `m` and the value returned by the second hash function should be relatively prime to ensure that every slot can be probed.

#### Example
1. **Hash Table Setup**:
   - Hash table size (`m`): 7
   - **First Hash Function**: `H1(key) = key % 7`
   - **Second Hash Function**: `H2(key) = 6 - (key % 6)`

2. **Insertion Process**:
   - Compute `H1(key)`.
   - If the slot is occupied, compute the next slot using `H2(key)` and probe linearly.
   - Example insertions:
     - Insert 49: Slot 0
     - Insert 63: Collision at Slot 0, compute `H2(63)`, next slot is 3
     - Continue this process for all keys.

3. **Handling Collisions**:
   - **Linear Probing**: Adds a fixed step size to handle collisions.
   - **Quadratic Probing**: Adds a step size that increases quadratically.
   - **Double Hashing**: Adds a step size based on a second hash function, avoiding clustering.

#### Search Process
- **Search Operation**:
   - Compute `H1(key)`.
   - If the key is not found at the computed index, use `H2(key)` to probe the next slot.
   - Stop searching when the key is found, an empty slot is encountered, or the entire table has been traversed.

#### Delete Process
- **Delete Operation**:
   - Mark the slot as "deleted" instead of empty.
   - During search, continue probing past "deleted" slots until an empty slot or the key is found.
   - Insertions can use slots marked as "deleted".

#### Example Analysis
1. **Requirements**:
   - `H2(key)` and `m` should be relatively prime to ensure that all slots can be probed.
   - This ensures that every slot will be visited if there is a free slot.

2. **Algorithm**:
   - **Insert**:
     - Initialize the first position using `H1(key)`.
     - Use `H2(key)` as the offset to handle collisions.
     - Add the offset iteratively for each collision until a free slot is found.
   - **Search**:
     - Works similarly to insert, probing the slots using `H1(key)` and `H2(key)`.

#### Performance Analysis
- **Expected Number of Probes**:
   - For an unsuccessful search, the expected number of probes is `1 / (1 - Alpha)`, where `Alpha` is the load factor (number of keys / table size).
   - If `Alpha` is 0.8, expected probes are 5; if `Alpha` is 0.9, expected probes are 10.

#### Conclusion
- **Double Hashing**: Provides a more uniform distribution of keys and avoids clustering, making it more efficient than linear or quadratic probing under high load factors.
- **Next Steps**: A thorough comparison of open addressing and chaining will be discussed in the next video.

---