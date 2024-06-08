## Smart Pointers in C++

**Problem with Normal Pointers:**
- Memory leaks occur when dynamically allocated memory is not deallocated.
- Compiler does not give errors or warnings for memory leaks.
- Responsibility lies with the programmer to deallocate memory.
- Memory leaks can lead to program crashes, especially in long-running processes like servers.

**Introduction to Smart Pointers:**
- Smart pointers solve memory leak problems by wrapping pointers in class objects.
- This ensures automatic deallocation of memory when the pointer is no longer in use.

**Example of Basic Smart Pointer Class:**
- Demonstrates a simple smart pointer class that wraps an integer pointer.
- Overloads `*` operator to dereference pointer and access its value.
- Automatically deallocates memory in destructor.

**Example without Smart Pointers:**
- Illustrates the problem of memory leaks when using raw pointers.
- Shows how dynamic memory allocation without deallocation leads to resource leaks.

**Implementation of Smart Pointer Class for Custom Types:**
- Introduces a smart pointer class using templates to support any data type.
- Overloads `*` and `->` operators for dereferencing and member access.
- Demonstrates usage with a custom test class.

**Problem with Smart Pointers:**
- Demonstrates a scenario where multiple smart pointers reference the same memory.
- Shows how automatic deallocation can lead to dangling pointers and runtime errors.
- Discusses the need for reference counting to handle such scenarios.


### Basic Smart Pointer Class Example:
```cpp
#include <iostream>
using namespace std;

class SmartPointer {
private:
    int* ptr;

public:
    SmartPointer(int* p = nullptr) : ptr(p) {}
    ~SmartPointer() {
        delete ptr;
    }
    int& operator*() {
        return *ptr;
    }
};

int main() {
    SmartPointer sp(new int(20));
    cout << *sp; // Prints: 20
    return 0;
}
```

### Smart Pointer Class for Custom Types Example:
```cpp
#include <iostream>
using namespace std;

template<typename T>
class SmartPointer {
private:
    T* ptr;

public:
    SmartPointer(T* p = nullptr) : ptr(p) {}
    ~SmartPointer() {
        delete ptr;
    }
    T& operator*() {
        return *ptr;
    }
    T* operator->() {
        return ptr;
    }
};

class Test {
public:
    int x, y;
    Test(int a, int b) : x(a), y(b) {}
};

int main() {
    SmartPointer<Test> sp(new Test(10, 20));
    cout << sp->x << ", " << sp->y; // Prints: 10, 20
    return 0;
}
```