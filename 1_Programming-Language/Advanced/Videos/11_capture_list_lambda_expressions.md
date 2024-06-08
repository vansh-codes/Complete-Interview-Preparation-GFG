## Capture List in Lambda Expression

In this video, we explore the concept of the capture list in Lambda expressions in C++. The capture list allows Lambda expressions to access variables from their enclosing scope. Here are the key points:

#### Key Concepts

1. **Capture List**:
   - Allows Lambda expressions to capture and use variables from their enclosing scope.
   - Variables in the capture list can be captured by value or by reference.

2. **Capture by Value**:
   - Variables are captured as read-only copies.
   - Syntax: `[=]` captures all variables by value.
   - Mutable keyword: Allows modification of captured variables by value.
   - Example:
     ```cpp
     [=]() mutable {
         x = x + a;
         y = y + a;
     };
     ```

3. **Capture by Reference**:
   - Variables are captured by reference, allowing modification.
   - Syntax: `[&]` captures all variables by reference.
   - Example:
     ```cpp
     [&]() {
         x = x + a;
         y = y + a;
     };
     ```

4. **Selective Capture**:
   - Allows selective capturing by value or by reference.
   - Example:
     - Capture all by value and `x` by reference: `[=, &x]`
     - Capture all by reference and `x` by value: `[&, x]`

5. **Static and Global Variables**:
   - Static and global variables are captured by default.
   - No need to include them in the capture list explicitly.

#### Example Code

1. **Capture by Reference**
   ```cpp
   #include <iostream>
   using namespace std;

   int main() {
       int x = 5, y = 10;
       int a = 20;
       [&]() {
           x = x + a;
           y = y + a;
       }();
       cout << x << " " << y << endl; // Output: 25 30
       return 0;
   }
   ```

2. **Capture by Value**
   ```cpp
   #include <iostream>
   using namespace std;

   int main() {
       int x = 5, y = 10;
       int a = 20;
       [=]() mutable {
           x = x + a;
           y = y + a;
       }();
       cout << x << " " << y << endl; // Output: 5 10
       return 0;
   }
   ```

3. **Static Variables**
   ```cpp
   #include <iostream>
   using namespace std;

   int main() {
       static int x = 5, y = 10;
       int a = 20;
       [a]() {
           x = x + a;
           y = y + a;
       }();
       cout << x << " " << y << endl; // Output: 25 30
       return 0;
   }
   ```

### Conclusion

Lambda expressions provide a powerful and concise way to pass functionality in C++. The capture list allows these expressions to access and modify variables from their enclosing scope, providing flexibility in how values are accessed and manipulated. By using different capture strategies, programmers can efficiently manage variable scope and lifetimes within Lambda expressions.