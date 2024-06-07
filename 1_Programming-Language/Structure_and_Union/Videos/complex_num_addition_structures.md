### Summary: Adding Two Complex Numbers Using Structures in C++

1. **Introduction to Complex Numbers:**
   - A complex number is represented as \( a + bi \), where \( a \) is the real part and \( b \) is the imaginary part.
   - The goal is to add two complex numbers.

2. **Addition of Complex Numbers:**
   - Given two complex numbers \( a + bi \) and \( c + di \), the addition involves:
     - Adding the real parts: \( (a + c) \)
     - Adding the imaginary parts: \( (b + d)i \)
   - Example: Adding \( 1 + 2i \) and \( 3 + 4i \) results in \( 4 + 6i \).

3. **Code Explanation:**
   - Define a structure `Complex` to represent a complex number with two members: `real` and `imaginary`.
   - Declare three complex numbers: `n1` and `n2` for input, and `n3` for storing the result.
   - Take input for the real and imaginary parts of `n1` and `n2`.
   - Add the real parts of `n1` and `n2`, and store in `n3.real`.
   - Add the imaginary parts of `n1` and `n2`, and store in `n3.imaginary`.
   - Print the result stored in `n3`.

4. **Example Code:**

```cpp
#include <iostream>
using namespace std;

struct Complex {
    int real;
    int imaginary;
};

int main() {
    Complex n1, n2, n3;
    
    // Taking input for first complex number
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> n1.real >> n1.imaginary;
    
    // Taking input for second complex number
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> n2.real >> n2.imaginary;
    
    // Adding the real parts
    n3.real = n1.real + n2.real;
    
    // Adding the imaginary parts
    n3.imaginary = n1.imaginary + n2.imaginary;
    
    // Displaying the result
    cout << "The sum of the complex numbers is: ";
    cout << n3.real << " + " << n3.imaginary << "i" << endl;

    return 0;
}
```

5. **Sample Output:**
   - For input:
     ```
     Enter real and imaginary part of first complex number: 1 2
     Enter real and imaginary part of second complex number: 3 4
     ```
   - Output:
     ```
     The sum of the complex numbers is: 4 + 6i
     ```

6. **Conclusion:**
   - Structures in C++ provide a way to group related data together.
   - They are particularly useful for operations involving composite data types like complex numbers.
   - The approach demonstrated can be applied to other operations on complex numbers or similar composite data types.