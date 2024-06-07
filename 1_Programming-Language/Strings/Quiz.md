# Question 1
```
Which header file is used to include the string object functions in C++?
#include <string.h>
#include <string>
#include <cstring>
#include <string.cpp>
```
#### Output: 
```
#include <string>
```

# Question 2
```
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv){
    string sl = "Hello";
    string s2 = "World";
    string s3 = sl + + s2;
    cout<<s3;
    return 0;
}
```
#### Output: 
```
Hello World
```

# Question 3
```
Which function is used to get the length of a string object?
str.length()
str.size0
str.max_size()
both size() and length() function
```
#### Output: 
```
both size() and length() function
```

# Question 4
```
Which of the following is not a modifier function in string class?
operator+=()
push_back()
operator[]()
erase()
```
#### Output: 
```
operator[]()
```

# Question 5
```
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char const *argv){
    const char *a = "Hello World";
    cout<<a;
    return 0;
}
```
#### Output: 
```
*
```

# Question 6
```
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s('c');
    cout << s;
    return 0;
}
```
#### Output: 
```
Error
```

# Question 7
```
Pick the correct statement about string objects in C++.
String objects must be terminated by a null character('0')
String objects have a dynamic size
String objects have a static size
String objects use extra memory than required.

```
#### Output: 
```
String objects have a dynamic size
```

#### Explanation:
String objects are dynamic in nature i.e. their size varies as their value changes so they don't use any extra memory and it is not necessary to terminate a string object by 'O'.


# Question 8
```
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s("geeksforgeeks");
    s.front() = 'G';
    cout << s;
    return 0;
}
```
#### Output: 
```
Geeksforgeeks
```

# Question 9
```
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s = "Hello World";
    cout << s.substr(4);
    return 0;
}
```
#### Output: 
```
o World
```

# Question 10
```
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s("geeksforgeeks");
    cout << s.substr(3).substr(5);
    return 0;
}
```
#### Output: 
```
geeks
```


# That's it folks! Happy Coding :)