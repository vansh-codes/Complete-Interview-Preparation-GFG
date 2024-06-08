# **Templates in C++**

**Overview:** <br>
Templates in C++ allow the creation of generic code that can be used for any data type. This technique enables the compiler to generate specific data type code when required, minimizing the need for repetitive code writing.

**Key Points:**

1. **Introduction to Templates:**
   - Templates provide a way to write generic code.
   - The compiler generates data type-specific code as needed.
   - Templates help avoid typing the same code for different data types.

2. **Types of Templates:**
   - **Function Templates:** Used for functions like sort, linear search, binary search, etc. A single template can be used for various data types like int, char, float, and user-defined types.
   - **Class Templates:** Used for creating generic classes, such as stacks, queues, and other data structures, which can handle different data types.

3. **Standard Template Library (STL):**
   - STL in C++ is heavily based on templates.
   - STL provides generic classes and functions that can be used with any data type.

4. **Example of Function Template:**
   - A function template to find the maximum of two values:
     ```cpp
     template <typename T>
     T myMax(T a, T b) {
         return (a > b) ? a : b;
     }
     ```
   - Usage:
     ```cpp
     int maxInt = myMax(3, 7);       // For integers
     char maxChar = myMax('C', 'G'); // For characters
     ```
   - The compiler generates the appropriate function for the data type used in the call.

5. **Differences Between Macros and Templates:**
   - **Macros:**
     - Preprocessed before compilation.
     - Simply perform text replacement without type checking.
     - Error-prone and difficult to debug.
   - **Templates:**
     - Handled by the compiler, providing type checking.
     - Generate type-specific functions or classes at compile time.
     - Less error-prone and easier to debug.

**Advantages of Templates:**
- **Code Reusability:** Write once, use for any data type.
- **Type Safety:** Type checking is done by the compiler.
- **Maintainability:** Easier to maintain and modify.

**Conclusion:**
Templates in C++ are a powerful feature that enhances code reusability and type safety. They are the foundation of the STL, enabling the creation of flexible and efficient code. In upcoming discussions, function templates and class templates will be covered in more detail.