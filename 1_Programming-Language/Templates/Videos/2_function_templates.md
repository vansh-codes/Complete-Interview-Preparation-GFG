# **Function Templates in C++**

**Overview:** <br>
Function templates in C++ allow writing generic functions that can be used with different data types. This avoids code duplication and lets the compiler generate type-specific code as needed.

**Key Points:**

1. **Introduction to Function Templates:**
   - Function templates enable writing a function once and using it for multiple data types.
   - The compiler generates the appropriate code for each data type when the function is used.

2. **Usage Examples:**
   - Function templates are useful for operations like sorting, searching, and finding maximum values in arrays or other containers.
   - Templates can be used with different data structures such as arrays, vectors, and lists in STL (Standard Template Library).

3. **Example of a Function Template:**
   - A function template to find the maximum value in an array:
     ```cpp
     template <typename T>
     T arrayMax(T arr[], int n) {
         T result = arr[0];
         for (int i = 1; i < n; ++i) {
             if (arr[i] > result) {
                 result = arr[i];
             }
         }
         return result;
     }
     ```
   - Usage:
     ```cpp
     int arrInt[] = {10, 20, 30, 40};
     float arrFloat[] = {10.5, 20.5, 30.5, 40.5};
     int maxInt = arrayMax<int>(arrInt, 4);
     float maxFloat = arrayMax<float>(arrFloat, 4);
     ```

4. **Compiler Process:**
   - The compiler creates a specific version of the function for each data type used.
   - For example, calling `arrayMax<int>` generates a function with `int` as the data type, while `arrayMax<float>` generates a function with `float` as the data type.

5. **Parameterizing Templates with Values:**
   - Templates can also accept non-type parameters (e.g., an integer limit).
   - Example:
     ```cpp
     template <typename T, int limit>
     T arrayMax(T arr[], int n) {
         if (n > limit) {
             throw std::runtime_error("Array size exceeds limit");
         }
         T result = arr[0];
         for (int i = 1; i < n; ++i) {
             if (arr[i] > result) {
                 result = arr[i];
             }
         }
         return result;
     }
     ```
   - Usage:
     ```cpp
     int arrInt[] = {10, 20, 30, 40};
     const int LIMIT = 100;
     int maxInt = arrayMax<int, LIMIT>(arrInt, 4);
     ```

6. **Const Parameters:**
   - Non-type template parameters must be constants since the compiler needs to know their values at compile time.
   - For example, `const int LIMIT = 100;` can be used as a non-type template parameter.

**Conclusion:**
Function templates in C++ offer a powerful way to write generic, reusable code. They simplify the codebase by avoiding repetition and leveraging the compiler's ability to generate specific functions for various data types. This video covered an example of finding the maximum value in an array using a function template and discussed the use of non-type parameters in templates. The next video will focus on class templates.