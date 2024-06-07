### Converting Binary to Decimal in C++

This summary outlines the method for converting a binary number (represented as a string) to its decimal equivalent in C++.

#### Problem Statement
Given a binary number in the form of a string, convert it to a decimal number. For example:
- Input: `"100"`
  - Output: `4`
- Input: `"1010"`
  - Output: `10`

#### Approach
1. **Initialize Variables**:
   - `base = 1`: This represents the power of 2. It starts from `2^0` which is 1.
   - `ans = 0`: This will hold the final decimal result.
   - `size = s.length()`: Get the length of the binary string.

2. **Iterate Over the String**:
   - Start from the end of the string (least significant bit).
   - For each character, convert it to its integer form.
   - Multiply this integer with the current `base` value and add it to `ans`.
   - Update the `base` to the next power of 2 for the next iteration.

3. **Character to Integer Conversion**:
   - The character '0' has a decimal value of 48 and '1' has a decimal value of 49. 
   - Subtract the character '0' (i.e., 48) from the current character to get its integer form.

#### Example
For the binary string `s = "1010"`:
- Start from the last character and move to the first.
- Convert each character to an integer, multiply by the base, add to `ans`, and update the base.

#### Code Implementation

```cpp
#include <iostream>
#include <string>

int binaryToDecimal(const std::string& s) {
    int base = 1;
    int ans = 0;
    int size = s.length();
    
    for (int i = size - 1; i >= 0; --i) {
        int digit = s[i] - '0';
        ans += digit * base;
        base *= 2;
    }
    
    return ans;
}

int main() {
    std::string binaryString;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryString;
    
    int decimalValue = binaryToDecimal(binaryString);
    std::cout << "Decimal value: " << decimalValue << std::endl;
    
    return 0;
}
```

#### Detailed Steps
1. **Take Input**: 
   - `std::cin >> binaryString;`
2. **Initialize Variables**: 
   - `int base = 1;`
   - `int ans = 0;`
   - `int size = binaryString.length();`
3. **Loop to Convert Binary to Decimal**:
   ```cpp
   for (int i = size - 1; i >= 0; --i) {
       int digit = binaryString[i] - '0';
       ans += digit * base;
       base *= 2;
   }
   ```
4. **Print Result**: 
   - Print the decimal value obtained after conversion.

#### Output Examples
For input `1010`:
- Output: `10`

This method efficiently converts a binary string to its decimal equivalent by iterating from the least significant bit to the most significant bit, multiplying each bit by the appropriate power of 2, and summing the results.