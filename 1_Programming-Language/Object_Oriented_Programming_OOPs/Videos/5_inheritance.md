## Summary: Inheritance and Virtual Functions in C++

### Overview
This video discusses inheritance and virtual functions in C++. Inheritance promotes reusability by allowing classes to inherit attributes and methods from a base class, reducing redundancy.

### Inheritance

1. **Definition:**
   - Inheritance allows a new class (derived class) to inherit attributes and methods from an existing class (base class).

2. **Example Scenario:**
   - When designing a college management software, both `Student` and `Teacher` classes share common attributes like `ID`, `name`, and `address`.
   - These common attributes and methods are placed in a base class called `Person`.

3. **Protected Access Specifier:**
   - **Public:** Accessible anywhere outside the class.
   - **Private:** Not accessible outside the class.
   - **Protected:** Accessible within the class and its derived classes.

4. **Syntax:**
   - The derived class uses the syntax `class DerivedClass : access_specifier BaseClass`.
   - Example:
     ```cpp
     class Person {
     protected:
         string name;
         int id;
     public:
         // Other common methods
     };

     class Student : public Person {
     private:
         float marks;
     public:
         void print() {
             cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
         }
     };
     ```

5. **Access Specifiers in Inheritance:**
   - **Public Inheritance:** 
     - Public and protected members of the base class remain public and protected in the derived class.
     - Private members of the base class are not accessible in the derived class.
   - **Protected Inheritance:** 
     - Public and protected members of the base class become protected in the derived class.
     - Private members of the base class are not accessible.
   - **Private Inheritance:** 
     - Public and protected members of the base class become private in the derived class.
     - Private members of the base class are not accessible.

### Virtual Functions

1. **Definition:**
   - Virtual functions allow derived classes to override methods of the base class.
   - Ensures the correct function is called for an object, regardless of the type of reference used for function call.

2. **Usage:**
   - Declare the method in the base class as virtual using the `virtual` keyword.
   - Override the method in the derived class.

3. **Example:**
   ```cpp
   class Person {
   public:
       virtual void print() {
           cout << "Person" << endl;
       }
   };

   class Student : public Person {
   public:
       void print() override {
           cout << "Student" << endl;
       }
   };

   int main() {
       Person* p = new Student();
       p->print(); // Output: Student
       delete p;
       return 0;
   }
   ```

### Summary
- **Inheritance:** Promotes reusability by allowing derived classes to inherit common attributes and methods from a base class. The access specifiers determine the visibility of base class members in derived classes.
- **Virtual Functions:** Enable runtime polymorphism by allowing derived classes to override base class methods. The correct method is called based on the actual object type at runtime.

### Example Program

```cpp
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int id;
public:
    Person(string n, int i) : name(n), id(i) {}
    virtual void print() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Student : public Person {
private:
    float marks;
public:
    Student(string n, int i, float m) : Person(n, i), marks(m) {}
    void print() override {
        cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
    }
};

int main() {
    Person* p = new Student("John", 123, 95.5);
    p->print(); // Output: Name: John, ID: 123, Marks: 95.5
    delete p;
    return 0;
}
```