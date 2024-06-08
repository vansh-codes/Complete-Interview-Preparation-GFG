## Reading from a file:
The task discussed in this video is reading text from a file within a C++ program. A file named "test.txt" is used for this purpose, containing some text. The process involves creating a stream to read input from the file, opening the file, and then using the `get()` function to read each character from the file one by one. The process continues until the end of the file is reached.

**Code Example:**
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;
    ifstream file("test.txt"); // Open the file

    while (!file.eof()) { // Read characters until end of file
        file.get(ch); // Get character
        cout << ch; // Print character
    }

    file.close(); // Close the file
    return 0;
}
```

In this code:
- A character variable `ch` is declared to store each character read from the file.
- An input file stream `file` is created and opened with the file name "test.txt".
- Inside the `while` loop, `file.get(ch)` is used to read each character from the file.
- The loop continues until the end of the file is reached, as determined by `file.eof()`.
- Each character read is printed to the console using `cout`.
- Finally, the file is closed using `file.close()`.

The program reads the contents of "test.txt" character by character and prints them to the console, demonstrating the process of reading text from a file in C++.