## Summary: Examples of Inheritance and Access Specifiers in C++

### Overview
This video explains the concept of inheritance and access specifiers in C++ with examples. Inheritance allows derived classes to reuse and extend the functionality of base classes.

### Key Concepts

1. **Base and Derived Classes:**
   - Base Class: The class from which other classes derive attributes and methods.
   - Derived Class: The class that inherits from the base class and can add its own attributes and methods.

2. **Constructors in Inheritance:**
   - When a derived class object is created, the base class constructor is called first, followed by the derived class constructor.
   - If a base class does not have a default constructor (a constructor without parameters), and the derived class does not explicitly call a parameterized constructor of the base class, a compiler error occurs.

### Examples and Explanations

1. **Example 1: Default Constructor Issue**
   - **Code:**
     ```cpp
     class Base {
     public:
         Base(int a) { cout << "Base" << endl; }
     };

     class Derived : public Base {
     public:
         int y;
         Derived(int a, int b) : Base(a) {
             y = b;
             cout << "Derived" << endl;
         }
         void print() { cout << "X: " << x << ", Y: " << y << endl; }
     };

     int main() {
         Derived d(10, 20);
         d.print();
         return 0;
     }
     ```
   - **Output:**
     ```
     Base
     Derived
     X: 10, Y: 20
     ```
   - **Explanation:**
     - The derived class `Derived` explicitly calls the parameterized constructor of the base class `Base` using an initializer list.
     - The base class constructor is called first, followed by the derived class constructor.

2. **Example 2: Access Specifiers**
   - **Protected Members:**
     - Protected members are accessible within the class and its derived classes but not outside.
     - **Code:**
       ```cpp
       class Base {
       protected:
           int x;
       public:
           Base(int a) : x(a) {}
       };

       class Derived : public Base {
       public:
           int y;
           Derived(int a, int b) : Base(a) {
               y = b;
           }
           void print() { cout << "X: " << x << ", Y: " << y << endl; }
       };

       int main() {
           Derived d(10, 20);
           d.print();
           return 0;
       }
       ```
     - **Output:**
       ```
       X: 10, Y: 20
       ```
     - **Explanation:**
       - `x` is protected in the base class and accessible within the derived class `Derived`.

   - **Private Members:**
     - Private members are not accessible outside the class.
     - **Code:**
       ```cpp
       class Base {
       private:
           int x;
       public:
           Base(int a) : x(a) {}
       };

       class Derived : public Base {
       public:
           int y;
           Derived(int a, int b) : Base(a) {
               y = b;
           }
           void print() { cout << "X: " << x << ", Y: " << y << endl; }
       };

       int main() {
           Derived d(10, 20);
           d.print();
           return 0;
       }
       ```
     - **Output:**
       - Compiler error because `x` is private in the base class and cannot be accessed in the derived class.

   - **Public Members:**
     - Public members are accessible anywhere.
     - **Code:**
       ```cpp
       class Base {
       public:
           int x;
           Base(int a) : x(a) {}
       };

       class Derived : public Base {
       public:
           int y;
           Derived(int a, int b) : Base(a) {
               y = b;
           }
           void print() { cout << "X: " << x << ", Y: " << y << endl; }
       };

       int main() {
           Derived d(10, 20);
           d.print();
           return 0;
       }
       ```
     - **Output:**
       ```
       X: 10, Y: 20
       ```
     - **Explanation:**
       - `x` is public in the base class and can be accessed directly in the derived class and outside the class.

   - **Protected Inheritance:**
     - Changes the access level of public members in the base class to protected in the derived class.
     - **Code:**
       ```cpp
       class Base {
       public:
           int x;
           Base(int a) : x(a) {}
       };

       class Derived : protected Base {
       public:
           int y;
           Derived(int a, int b) : Base(a) {
               y = b;
           }
           void print() { cout << "X: " << x << ", Y: " << y << endl; }
       };

       int main() {
           Derived d(10, 20);
           d.print();
           return 0;
       }
       ```
     - **Output:**
       - Compiler error because `x` is now protected in the derived class and cannot be accessed outside.

   - **Private Inheritance:**
     - Changes the access level of public and protected members in the base class to private in the derived class.
     - **Code:**
       ```cpp
       class Base {
       public:
           int x;
           Base(int a) : x(a) {}
       };

       class Derived : private Base {
       public:
           int y;
           Derived(int a, int b) : Base(a) {
               y = b;
           }
           void print() { cout << "X: " << x << ", Y: " << y << endl; }
       };

       int main() {
           Derived d(10, 20);
           d.print();
           return 0;
       }
       ```
     - **Output:**
       - Compiler error because `x` is private in the derived class and cannot be accessed outside.

### Summary
- **Inheritance:** Allows reuse of common attributes and methods from a base class.
- **Access Specifiers:** Determine the visibility of class members. Public, protected, and private inheritance affect the accessibility of inherited members.
- **Constructors:** When a derived class object is created, the base class constructor is called first, followed by the derived class constructor. If the base class does not have a default constructor, the derived class must explicitly call a parameterized constructor of the base class.