**Multi-Dimensional Arrays in C++**

In this video, we discuss multi-dimensional arrays in C++, including their declaration, initialization, traversal, and various methods to create them dynamically.

**1. Basic 2D Array Declaration and Initialization:**
- We declare a 2D array with 3 rows and 2 columns:
  ```cpp
  int arr[3][2] = { {10, 20}, {30, 40}, {50, 60} };
  ```
- Each element is accessed using row and column indices:
  ```cpp
  arr[0][0] = 10; // first element in the first row
  ```

**2. Traversing a 2D Array:**
- Use nested loops to traverse the array:
  ```cpp
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
          cout << arr[i][j] << " ";
      }
  }
  ```
  This prints the elements in row-major order: 10, 20, 30, 40, 50, 60.

**3. Key Points About Multi-Dimensional Arrays:**
- **Row-Major Order:** Elements are stored row by row in contiguous memory locations.
- **Curly Brackets Optional:** Internal curly brackets for initialization are optional but improve readability.
- **Omitting Dimensions:** When initializing, you can omit only the first dimension.
  ```cpp
  int arr[][2] = { {10, 20}, {30, 40}, {50, 60} };
  ```

**4. Variable Sized Arrays (C++14 and later):**
- Allows using variables as array dimensions.
  ```cpp
  int m = 3, n = 2;
  int arr[m][n];
  ```

**5. Methods for Creating Multi-Dimensional Arrays Dynamically:**
- **Method 1: Double Pointer**
  ```cpp
  int **arr = new int*[m];
  for (int i = 0; i < m; i++) {
      arr[i] = new int[n];
  }
  // Access and manipulate array
  ```

- **Method 2: Array of Pointers**
  ```cpp
  int *arr[m];
  for (int i = 0; i < m; i++) {
      arr[i] = new int[n];
  }
  // Access and manipulate array
  ```

- **Method 3: STL Vector (Dynamic Row Sizes)**
  ```cpp
  vector<vector<int>> arr(m, vector<int>(n, 10));
  // Access and manipulate array
  ```

- **Method 4: Vector of Vectors (Fully Dynamic)**
  ```cpp
  vector<vector<int>> arr;
  for (int i = 0; i < m; i++) {
      vector<int> row(n, 10);
      arr.push_back(row);
  }
  // Access and manipulate array
  ```

**6. Advantages and Disadvantages:**
- **Double Pointer and Array of Pointers:** Allow jagged arrays but are not cache-friendly.
- **Vector Methods:** Provide dynamic resizing of rows and columns but are also not cache-friendly.

**Example Programs:**

1. **2D Array Traversal:**
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int arr[3][2] = { {10, 20}, {30, 40}, {50, 60} };
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
    ```

2. **Dynamic 2D Array Using Double Pointer:**
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int m = 3, n = 2;
        int **arr = new int*[m];
        for (int i = 0; i < m; i++) {
            arr[i] = new int[n];
        }

        // Initialize and print the array
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = 10;
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        // Free dynamically allocated memory
        for (int i = 0; i < m; i++) {
            delete[] arr[i];
        }
        delete[] arr;

        return 0;
    }
    ```

3. **2D Array Using Vector of Vectors:**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        int m = 3, n = 2;
        vector<vector<int>> arr;

        for (int i = 0; i < m; i++) {
            vector<int> row(n, 10);
            arr.push_back(row);
        }

        // Print the array
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }
    ```

In conclusion, we discussed the declaration, traversal, and various methods to create multi-dimensional arrays in C++. We also explored the advantages and disadvantages of each method and provided example code for practical implementation.