### Pointer Arithmetic in C++

#### Allowed Operations

- **Increment and Decrement**:
  - Both prefix (++ptr) and postfix (ptr++) increment and decrement operators are allowed on pointers.
  
- **Addition and Subtraction**:
  - Addition and subtraction of integer values to/from pointers are permitted.
  - Adding an integer moves the pointer forward, while subtracting moves it backward.
  
- **Subtraction between Pointers**:
  - Subtracting one pointer from another yields the number of elements between them.
  - The result is based on the number of elements, not bytes, and depends on the pointer type.

#### Example Illustration

- **Increment and Decrement**:
  - Incrementing (++ptr) moves the pointer forward by the size of the pointed-to type.
  - Decrementing (ptr--) moves it backward similarly.

- **Addition and Subtraction**:
  - Adding or subtracting integer values adjusts the pointer position accordingly based on the size of the pointed-to type.

- **Subtraction between Pointers**:
  - Subtracting one pointer from another provides the count of elements between them, considering the pointer type.

#### Importance of Pointer Arithmetic

- **Usefulness**:
  - Pointer arithmetic is valuable when dealing with arrays and sequences of objects.
  - It allows for efficient navigation within arrays and quick determination of element distances.

In conclusion, pointer arithmetic in C++ enables efficient manipulation and navigation within arrays and sequences of objects, facilitating various operations like movement, addition, subtraction, and comparison between pointers. Understanding pointer arithmetic is essential for effective memory management and efficient data manipulation in C++ programming.