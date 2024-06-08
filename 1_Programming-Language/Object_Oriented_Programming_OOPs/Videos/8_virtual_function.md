## Summary: Virtual Functions in C++

### Overview
This video discusses the concept of virtual functions in C++, which are related to inheritance. Virtual functions allow for runtime polymorphism, enabling a base class pointer or reference to invoke derived class methods.

### Key Concepts

1. **Base Class Reference or Pointer to Derived Class Object:**
   - A base class type reference or pointer can refer to a derived class object.
   - Example:
     ```cpp
     class Base {};
     class Derived : public Base {};
     
     Base* basePtr = new Derived();
     Base& baseRef = derivedObj;
     ```

2. **Practical Use Case:**
   - Example: An organization with different employee types (e.g., Software Developer, Sales Executive).
   - Instead of maintaining separate arrays for each type, use an array of base class pointers pointing to different derived class objects.

3. **Virtual Functions:**
   - Virtual functions are used to override base class functions in derived classes, ensuring the correct function is called based on the actual object type at runtime.
   - Example:
     ```cpp
     class Base {
     public:
         virtual void print() { cout << "Base"; }
     };

     class Derived : public Base {
     public:
         void print() override { cout << "Derived"; }
     };
     
     Base* basePtr = new Derived();
     basePtr->print();  // Output: "Derived"
     ```

4. **Function Overriding vs. Function Overloading:**
   - **Function Overriding:** Same function name and signature in base and derived classes. Achieved using virtual functions.
   - **Function Overloading:** Same function name but different parameter types or numbers within the same scope.

5. **Runtime Polymorphism:**
   - Achieved through virtual functions.
   - Function calls are resolved at runtime based on the actual object type.

6. **Implementation of Virtual Functions:**
   - **VPTR (Virtual Pointer):** Maintained with every object, points to the vtable.
   - **VTable (Virtual Table):** Maintained for every class, stores addresses of all virtual functions.
   - When an object is created, the constructor sets the VPTR to the class’s vtable.
   - When a virtual function is called, the VPTR and vtable determine the correct function address.

7. **Performance Considerations:**
   - Virtual functions introduce some overhead due to VPTR and vtable maintenance.
   - Despite this, they simplify code and reduce complexity, making them worthwhile for most use cases.

8. **Override Keyword:**
   - Introduced in C++11 to make code more readable and error-free.
   - Ensures that a function is indeed overriding a virtual function in the base class.
   - Example:
     ```cpp
     class Base {
     public:
         virtual void print() {}
     };

     class Derived : public Base {
     public:
         void print() override {}  // Ensures this function is overriding Base::print
     };
     ```

### Summary
- **Virtual Functions:** Enable runtime polymorphism by allowing base class pointers to call derived class methods.
- **VPTR and VTable:** Used internally to manage virtual function calls.
- **Override Keyword:** Enhances code readability and prevents errors.
- **Function Overriding vs. Overloading:** Overriding is for runtime polymorphism; overloading is for compile-time polymorphism.
- **Performance:** Virtual functions add overhead but greatly simplify code and maintainability.
