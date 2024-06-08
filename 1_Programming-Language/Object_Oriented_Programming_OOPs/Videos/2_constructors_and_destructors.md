## Summary: Constructors and Destructors in C++

### Overview
This video provides a detailed explanation of constructors and destructors in C++.

### Constructors

1. **Definition:**
   - Special functions that initialize objects.
   - Have the same name as the class and no return type.

2. **Types:**
   - Default Constructor: No parameters, initializes objects with default values.
   - Parameterized Constructor: Takes parameters to initialize objects with specific values.
   - Copy Constructor: Initializes an object using another object of the same class.

3. **Usage:**
   - Called automatically when an object is created, either on the stack or heap.
   - Example of default and parameterized constructors in a `Point` class:
     ```cpp
     class Point {
     private:
         int x, y;
     public:
         Point() : x(0), y(0) {}
         Point(int x1, int y1) : x(x1), y(y1) {}
         void print() {
             cout << x << ", " << y << endl;
         }
     };
     ```

4. **Initializer List:**
   - Preferred way to initialize data members.
   - Provides better performance by initializing members directly.
   - Example:
     ```cpp
     class Point {
     private:
         int x, y;
     public:
         Point() : x(0), y(0) {}
         Point(int x1, int y1) : x(x1), y(y1) {}
         void print() {
             cout << x << ", " << y << endl;
         }
     };
     ```

5. **Copy Constructor:**
   - Needed when an object is created from another object.
   - Default copy constructor performs shallow copy.
   - Custom copy constructor is required for deep copy, especially with dynamic memory allocation.
   - Example:
     ```cpp
     class Test {
     private:
         int* ptr;
     public:
         Test(int val) {
             ptr = new int(val);
         }
         Test(const Test& t) {
             ptr = new int(*(t.ptr));
         }
         ~Test() {
             delete ptr;
         }
         void print() {
             cout << *ptr << endl;
         }
     };
     ```

### Destructors

1. **Definition:**
   - Opposite of constructors, called when an object is destroyed.
   - Have the same name as the class preceded by a tilde (~).
   - No return type and cannot take parameters.

2. **Usage:**
   - Called automatically when an object goes out of scope or is explicitly deleted.
   - Only one destructor per class.
   - Default destructor created by the compiler if not defined.

3. **Custom Destructor:**
   - Necessary when dynamic memory is allocated in the constructor to prevent memory leaks.
   - Example:
     ```cpp
     class Test {
     private:
         int* ptr;
     public:
         Test(int val) {
             ptr = new int(val);
         }
         ~Test() {
             delete ptr;
         }
         void print() {
             cout << *ptr << endl;
         }
     };
     ```

### Key Points
- **Constructors** initialize objects and can be of different types (default, parameterized, copy).
- **Destructors** clean up when an object is destroyed.
- Use **initializer lists** for efficient initialization.
- Write **custom copy constructors** and destructors when dealing with dynamic memory.

### Example Program
```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point() : x(0), y(0) {}  // Default Constructor
    Point(int x1, int y1) : x(x1), y(y1) {}  // Parameterized Constructor
    void print() {
        cout << x << ", " << y << endl;
    }
};

class Test {
private:
    int* ptr;
public:
    Test(int val) {
        ptr = new int(val);
    }
    Test(const Test& t) {  // Copy Constructor
        ptr = new int(*(t.ptr));
    }
    ~Test() {  // Destructor
        delete ptr;
    }
    void print() {
        cout << *ptr << endl;
    }
};

int main() {
    Point p1;
    Point p2(10, 20);
    p1.print();  // Output: 0, 0
    p2.print();  // Output: 10, 20

    Test t1(10);
    Test t2(t1);
    t1.print();  // Output: 10
    t2.print();  // Output: 10
    return 0;
}
