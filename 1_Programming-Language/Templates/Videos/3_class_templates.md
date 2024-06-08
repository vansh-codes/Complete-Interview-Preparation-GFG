## Summary: Class Templates in C++

### Overview
Class templates in C++ allow writing generic classes that can be used with various data types. This approach avoids code duplication and leverages the compiler to generate type-specific code when needed.

### Key Points

1. **Introduction to Class Templates:**
   - Class templates enable writing a class once and using it for multiple data types.
   - Examples include a stack class, queue, deque, hash tables, and self-balancing BSTs, which can be used for integers, floats, custom objects, etc.

2. **Example of a Class Template:**
   - A class template for a pair:
     ```cpp
     #include <iostream>
     using namespace std;

     template <typename T>
     struct Pair {
         T x, y;

         Pair(T i, T j) : x(i), y(j) {}

         T getFirst() {
             return x;
         }

         T getSecond() {
             return y;
         }
     };
     ```

3. **Usage of Class Templates:**
   - Creating objects of the template class:
     ```cpp
     int main() {
         Pair<int> p1(10, 20);
         Pair<char> p2('a', 'b');

         cout << "First element of p1: " << p1.getFirst() << endl;
         cout << "Second element of p1: " << p1.getSecond() << endl;

         cout << "First element of p2: " << p2.getFirst() << endl;
         cout << "Second element of p2: " << p2.getSecond() << endl;

         return 0;
     }
     ```
   - Output:
     ```
     First element of p1: 10
     Second element of p1: 20
     First element of p2: a
     Second element of p2: b
     ```

4. **Writing Function Definitions Outside the Class:**
   - You can define class functions outside the class using the following syntax:
     ```cpp
     template <typename T>
     T Pair<T>::getFirst() {
         return x;
     }

     template <typename T>
     T Pair<T>::getSecond() {
         return y;
     }
     ```

5. **Compiler Behavior:**
   - The compiler generates the necessary type-specific code based on the template provided.
   - For example, when `Pair<int>` is used, the compiler generates a version of the `Pair` class with `int` in place of `T`.

### Conclusion
Class templates in C++ provide a powerful way to create generic, reusable classes. This approach simplifies the codebase and lets the compiler handle type-specific code generation. In the next video, further examples and uses of class templates will be discussed.
