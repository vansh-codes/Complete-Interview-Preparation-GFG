### Function Parameters and Pointers

#### Normal Parameter Passing

1. **Passed by Value**:
   - In C programming, parameters are passed by value by default.
   - When passing parameters, the value of the argument is copied into a new variable.
   - Changes made to the local variable within the function do not affect the original variable.

2. **Limitations**:
   - Passing parameters by value restricts the ability to modify the original variable within the function.
   - This limitation is significant when functions need to alter the values of variables passed to them.

#### Pointer Parameter Passing

1. **Passed by Reference**:
   - Pointers enable passing parameters by reference in C.
   - By passing the address of the variable instead of its value, changes made within the function affect the original variable.

2. **Advantages**:
   - **Local Variable Modification**: Functions can directly modify local variables of the calling function.
   - **Performance**: With large objects like structures, passing by pointer avoids copying the entire object.
     - Instead, only the address of the object is passed, resulting in improved performance, especially for large data types.

3. **Avoiding Global Variables**:
   - Pointers provide a safer alternative to using global variables for shared data manipulation.
   - Using pointers allows for localized changes, enhancing code maintainability and readability.

#### Conclusion

- Pointers offer significant advantages in function parameter passing, allowing for efficient memory usage and enabling functions to modify variables outside their scope.
- While normal parameter passing copies the entire object, passing by pointers only copies the memory address, resulting in better performance, especially for large data structures.
- Pointers facilitate safer and more localized variable modifications compared to global variables, contributing to better software design and development practices.