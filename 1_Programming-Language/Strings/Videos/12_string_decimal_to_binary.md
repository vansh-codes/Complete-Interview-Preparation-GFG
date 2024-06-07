### Converting Decimal to Binary in C++

This summary discusses how to convert a decimal number to a binary number using C++.

#### Problem Description
The task is to convert a given decimal number into its binary representation.

#### Example
- Input: 5
  Output: 101
- Input: 100
  Output: 1100100

#### Approach
1. **Binary Conversion Process**:
   - Start with the given decimal number.
   - Continuously divide the number by 2.
   - Store the remainder obtained from each division.
   - Iterate until the number becomes 0.
   - Reverse the obtained remainders to get the binary representation.

2. **String Representation**:
   - Store the binary representation as a string since it can accommodate larger values than integers.

#### Code Implementation

```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string decimalToBinary(int n) {
    std::string s;
    
    while (n > 0) {
        int remainder = n % 2;
        s += std::to_string(remainder);
        n /= 2;
    }
    
    std::reverse(s.begin(), s.end());
    return s;
}

int main() {
    int n;
    std::cout << "Enter a decimal number: ";
    std::cin >> n;
    
    std::string binary = decimalToBinary(n);
    std::cout << "Binary representation: " << binary << std::endl;
    
    return 0;
}
```

#### Detailed Explanation
1. **Input**:
   - Accept input for the decimal number.
2. **Decimal to Binary Conversion**:
   - Use a `while` loop to repeatedly divide the number by 2 and store the remainders.
   - Convert each remainder to a string and append it to the binary representation.
   - Reverse the string to obtain the correct binary representation.
3. **Output**:
   - Print the binary representation of the decimal number.

#### Output Example
For input `5`, the output will be `101`.
For input `100`, the output will be `1100100`.

This method efficiently converts a decimal number to its binary representation by performing repeated divisions and storing the remainders as a string.