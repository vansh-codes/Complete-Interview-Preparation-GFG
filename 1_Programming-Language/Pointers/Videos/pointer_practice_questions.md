### Practice Questions on Pointers

#### Question 1

- **Array of Integers**:
  - The array contains three integers, each taking 4 bytes.
  - `sizeof` operator yields total bytes allocated to the array.
  - Output: `12` bytes for the array.
  
- **Pointer Size**:
  - Size of the pointer is fixed, independent of the pointed-to type.
  - Output: `8` bytes for the pointer.

#### Question 2

- **Character Array and Pointer**:
  - Character array with three characters, each taking 1 byte.
  - `sizeof` operator provides the total bytes allocated to the array.
  - Output: `3` bytes for the array.
  
- **Pointer Size**:
  - Size of the pointer remains fixed.
  - Output: `8` bytes for the pointer.

#### Question 3

- **Array with Increment**:
  - Pointer increments using prefix `++` and dereference `*` operators.
  - `++*PTR` increments the value at the pointed address.
  - Output: Updated value at the first array position and the same address.

#### Question 4

- **Array with Postfix Increment**:
  - Pointer increments using postfix `++` and dereference `*` operators.
  - `*PTR++` returns the value at the current address and then moves to the next.
  - Output: Value at the initial address, value at the next address, and same address.

#### Question 5

- **Prefix Increment and Dereference**:
  - Pointer increments using prefix `++` and dereference `*` operators.
  - `++*++PTR` increments the pointer first, then increments the value at the new address.
  - Output: Updated value at the first array position and the same address.

In summary, the practice questions involve understanding pointer arithmetic and operator precedence, where the correct interpretation of expressions leads to expected outputs based on memory locations and value modifications.