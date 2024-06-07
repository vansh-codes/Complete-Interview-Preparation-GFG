### Reading Strings in C++

#### Problem with `cin`

In the example provided, a program reads a user's name using `cin` and prints it. However, the issue is that `cin` stops reading input at the first space. Thus, if a user enters a full name with spaces, only the first part of the name is read.

Example:
- If the input is "Sandeep", the output is: "Your name is Sandeep".
- If the input is "Sandeep Jain", the output is still: "Your name is Sandeep".

#### Solution with `getline`

To read a full line, including spaces, `getline` should be used. `getline` reads input until the newline character is encountered, ensuring that the entire input string is captured, including spaces.

Example:
- If the input is "Sandeep Jain", the output is: "Your name is Sandeep Jain".

#### Usage of `getline`

The `getline` function can be used as follows:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Your name is " << name << std::endl;
    return 0;
}
```

This program reads the entire line entered by the user and outputs it correctly, even if it contains spaces.

#### Custom Delimiter with `getline`

The `getline` function can also accept a custom delimiter character, which specifies when to stop reading the input.

Example:
- To stop reading at a dollar sign (`$`), `getline` can be used as follows:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name (end with $): ";
    std::getline(std::cin, name, '$');
    std::cout << "Your name is " << name << std::endl;
    return 0;
}
```

In this case, if the input is "Sandeep Jain$", the output is: "Your name is Sandeep Jain".

### Summary

- **Problem with `cin`**: Stops reading at the first space.
- **Solution with `getline`**: Reads the entire line, including spaces.
- **Custom Delimiter with `getline`**: Allows specifying a character to stop reading.

By using `getline`, the program can read and handle strings with spaces effectively, addressing the limitation of `cin`.