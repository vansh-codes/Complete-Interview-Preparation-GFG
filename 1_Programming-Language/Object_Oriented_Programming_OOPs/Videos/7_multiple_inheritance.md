## Summary: Multiple Inheritance and Virtual Functions in C++

### Overview
This video discusses the concepts of multiple inheritance and virtual functions in C++. Multiple inheritance allows a class to inherit from more than one base class, whereas multi-level inheritance involves a class hierarchy with multiple levels of inheritance.

### Key Concepts

1. **Multiple Inheritance:**
   - **Definition:** A class inherits from two or more classes.
   - **Example:**
     ```cpp
     class A {};
     class B {};
     class C : public A, public B {};
     ```
   - When an object of the derived class is created, constructors of all base classes are called in the order they are inherited.

2. **Multi-Level Inheritance:**
   - **Definition:** A class hierarchy where a class is derived from another derived class.
   - **Example:**
     ```cpp
     class A {};
     class B : public A {};
     class C : public B {};
     ```

### Example of Multiple Inheritance

- **Code Example:**
  ```cpp
  class A {
  public:
      A() { cout << "A's Constructor called" << endl; }
  };

  class B {
  public:
      B() { cout << "B's Constructor called" << endl; }
  };

  class C : public A, public B {
  public:
      C() { cout << "C's Constructor called" << endl; }
  };

  int main() {
      C obj;
      return 0;
  }
  ```

- **Output:**
  ```
  A's Constructor called
  B's Constructor called
  C's Constructor called
  ```

### Diamond Problem

- **Description:** Occurs when two classes inherit from the same base class and another class inherits from both of them, causing ambiguity and multiple copies of the base class members.
- **Example:**
  ```cpp
  class A {
  public:
      int x;
      A() { cout << "A's Constructor called" << endl; }
  };

  class B : public A {
  public:
      B() { cout << "B's Constructor called" << endl; }
  };

  class C : public A {
  public:
      C() { cout << "C's Constructor called" << endl; }
  };

  class D : public B, public C {
  public:
      D() { cout << "D's Constructor called" << endl; }
  };

  int main() {
      D obj;
      return 0;
  }
  ```

- **Problem:** Compiler error due to ambiguity in accessing members of class `A`.

### Solution: Virtual Inheritance

- **Definition:** Using the `virtual` keyword to ensure only one instance of the base class is inherited, even through multiple paths.
- **Code Example:**
  ```cpp
  class A {
  public:
      int x;
      A() { cout << "A's Constructor called" << endl; }
  };

  class B : virtual public A {
  public:
      B() { cout << "B's Constructor called" << endl; }
  };

  class C : virtual public A {
  public:
      C() { cout << "C's Constructor called" << endl; }
  };

  class D : public B, public C {
  public:
      D() { cout << "D's Constructor called" << endl; }
  };

  int main() {
      D obj;
      return 0;
  }
  ```

- **Output:**
  ```
  A's Constructor called
  B's Constructor called
  C's Constructor called
  D's Constructor called
  ```

- **Explanation:** The `virtual` keyword ensures that `A`'s constructor is called only once, preventing the diamond problem.

### Summary

- **Multiple Inheritance:** A class can inherit from multiple base classes.
- **Multi-Level Inheritance:** A class hierarchy with multiple levels of inheritance.
- **Diamond Problem:** An ambiguity problem in multiple inheritance solved by virtual inheritance.
- **Virtual Inheritance:** Ensures a single instance of a base class is inherited, resolving ambiguities in multiple inheritance scenarios.