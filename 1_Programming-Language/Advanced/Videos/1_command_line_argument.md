### Summary:

The video discusses command-line arguments in C++, covering three main arguments: `argc`, `argv`, and environmental variables (`envp`). 

### Explanation of Command-Line Arguments:

- **`argc` (Argument Count):** Stores the number of arguments passed to the program.
- **`argv` (Argument Vector):** Stores an array of character pointers listing all the arguments passed to the program.
- **Environmental Variables (`envp`):** Stores environmental variables.

### Usage Example:

1. Running the program from the command line with arguments like `g++ test.cpp -o output`, where `test.cpp` is the name of the file, `-o` is the name of the program, and additional arguments are passed.
2. Printing the count of arguments passed (`argc`) and printing all the arguments (`argv`).
3. Printing all the environmental variables present (`envp`).

### Code Execution:

- Compile the code using `g++ test.cpp -o output`.
- Run the program by passing arguments, which will display the count of arguments and list all the passed arguments.
- Pressing enter again displays all the environmental variables present.
- Upon pressing enter again, the program successfully ends.

### Example:
```cpp
#include <iostream>

int main(int argc, char* argv[], char* envp[]) {
    cout << "Number of arguments passed: " << argc << endl;

    // Print all the arguments passed
    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    // Print all the environmental variables present
    cout << "\nEnvironmental Variables:\n";
    for (int i = 0; envp[i] != nullptr; ++i) {
        cout << envp[i] << endl;
    }

    cout << "\nPress Enter to exit..." << endl;
    cin.get();
    return 0;
}
```
This code takes advantage of the `argc` and `argv` parameters to the `main` function to print out the command-line arguments passed to the program. Additionally, it prints out all the environmental variables using the `envp` array. Finally, it waits for the user to press Enter before exiting the program.

### Check using:
```
// Open cmd on the folder (ctrl+shift+c)
// Syntax: 
- g++ <fileName> -o <outputFileName>
- <outputFileName> argumentsHere

// In our case:
- g++ 1_command_line_argument.cpp -o main
- main 1 2 3 4
```