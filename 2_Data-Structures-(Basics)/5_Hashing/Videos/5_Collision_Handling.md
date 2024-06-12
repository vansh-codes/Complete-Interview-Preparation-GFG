## Introduction to Collisions in Hashing

#### Recap
- **Hash Functions**: Introduced in the previous video, covering modulo-based hash functions and hash functions for strings.
- **Collision**: When two keys from a large universe map to the same entry in a smaller hash table.

#### Collisions are Inevitable
- **Example**: Using a hash table of size 10 with phone numbers, collisions can occur if two phone numbers have the same last digit.
- **Birthday Paradox**: Demonstrates the likelihood of collisions.
  - **23 People**: 50% chance that two people share the same birthday.
  - **70 People**: 99.9% chance that two people share the same birthday.
- **Conclusion**: Collisions are bound to happen, especially when the keys are unknown in advance.

#### Perfect Hashing
- **Definition**: A method that guarantees no collisions if the keys are known in advance.
- **Usage**: Useful for applications like dictionaries of known words.
- **Preprocessing**: Requires extra work but ensures each key maps to a different slot with no collisions.

#### Handling Collisions
- **Methods**: Two primary methods to handle collisions are chaining and open addressing.
  - **Chaining**: Uses linked lists to handle colliding items in the same slot.
  - **Open Addressing**: Finds another slot within the same array for the colliding item.

### Conclusion
- **Collision Problem**: It is a significant issue in hashing that needs to be addressed.
- **Upcoming Topics**: Detailed discussion on chaining and open addressing in separate videos to understand how to manage collisions effectively.

---