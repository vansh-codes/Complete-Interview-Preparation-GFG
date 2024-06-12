## Summary of Implementation of Open Addressing

#### Introduction
- **Objective**: Implement a hash table using open addressing where the user specifies the size of the hash table.
- **Class Definition**: Create a class `MyHash` that includes methods for inserting, searching, and deleting elements.

#### Class MyHash
- **Attributes**:
  - `array`: Pointer to the hash table array.
  - `capacity`: Maximum number of elements the hash table can hold.
  - `size`: Current number of elements in the hash table.
- **Constructor**:
  - Initializes the hash table with a given capacity.
  - Sets all elements in the hash table to -1 (indicating empty).
  - Defines -1 for empty cells and -2 for deleted cells.

#### Functions in MyHash
1. **Search**:
   - **Logic**:
     - Compute the hash for the given key.
     - Linearly probe for the key.
     - Stop if the key is found, an empty slot is encountered, or the entire table has been traversed.
   - **Implementation**:
     - Initialize the hash value.
     - Loop until an empty slot or the key is found, or the table is fully traversed.
     - Return true if the key is found; false otherwise.

2. **Insert**:
   - **Logic**:
     - Check if the hash table is full.
     - Compute the hash for the key.
     - Linearly probe for an empty or deleted slot.
     - Insert the key if a suitable slot is found.
   - **Implementation**:
     - Return false if the table is full.
     - Initialize the hash value.
     - Loop to find an empty or deleted slot, or check if the key already exists.
     - Insert the key and update the size if the key does not already exist.

3. **Erase**:
   - **Logic**:
     - Compute the hash for the key.
     - Linearly probe to find the key.
     - Mark the slot as deleted if the key is found.
   - **Implementation**:
     - Initialize the hash value.
     - Loop to find the key.
     - Mark the slot as deleted (-2) if the key is found; return false if the key is not found.

#### Handling Special Cases
- **Fixed Size and Linear Probing**:
  - Implemented using a fixed-size array and linear probing for simplicity.
- **Handling -1 and -2 as Input Keys**:
  - Libraries typically use pointers or references to handle elements in the hash table.
  - **Null Checks**: Empty slots are indicated by null pointers or references.
  - **Dummy Node for Deletion**:
    - A dummy node is used to mark deleted slots.
    - This node is shared across all functions and indicates deleted slots.

#### Example Usage
- **User Operations**:
  - Create a hash table object with a specified capacity.
  - Insert elements into the hash table.
  - Search for elements and return true if found.
  - Erase elements and mark the slots as deleted.
- **Internal Array Representation**:
  - Uses -1 for empty slots and -2 for deleted slots.
  - Implements circular array traversal for probing.

#### Implementation Summary
- **Class Structure**: Defines a simple hash table class with essential functions.
- **Search, Insert, Erase Functions**: Each function uses linear probing to handle collisions and manage the hash table.
- **Special Handling**: Addresses how to manage empty and deleted slots effectively in a simple implementation.

---