# Question 1
```
Which of the following is incorrect in C++ ?
(1)When we write overloaded function we must code the function for each usage.
(2)When we write function template we code the function only once.
(3)lt is difficult to debug macros
(4)Templates are more efficient than macros
```
#### Output: 
```
All are correct
```

# Question 2
```cpp
#include <iostream>
using namespace std;

template <typename T>
void fun(const T&x){
    static int count = O;
    cout << "x = " << x << "count = " << ++count << endl;
    ++count;
    return;
}
int main(){
    fun<int>(1);
    cout << endl;
    fun<int>(1);
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    return 0;
}
```
#### Output: 
```
x = 1 count = 0
x = 1 count = 1
x = 1.1 count = 0
```

# Question 3
```cpp
#include <iostream>
using namespace std;
template <int i>
void fun()
{
    i = 20;
    cout << i;
}
int main()
{
    fun<10>();
    return 0;
}
```
#### Output: 
```
Compiler Error
```

# Question 4
```cpp
#include <iostream>
using namespace std;

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << max(3, 7) << std::endl;
    cout << max(3.0, 7.0) << std::endl;
    cout << max(3, 7.0) << std::endl;
    return 0;
}
```
#### Output: 
```
Compiler Error in last cout statement as call to max is ambiguous
```

# Question 5
```cpp
#include <iostream>
using namespace std;

template <class T>
class Test
{
private:
    T val;

public:
    static int count;
    Test() { count++; }
};

template <class T>
int Test<T>::count = 0;
int main()
{
    Test<int> a;
    Test<int> b;
    Test<double> c;
    cout << Test<int>::count << endl;
    cout << Test<double>::count << endl;
    return 0;
}
```
#### Output: 
```
2
1
```

# Question 6
```
Which of the following is true about templates.
1. Templates are a feature of C++ that allows us to write one code for different data types.
2. We can write one function that can be used for all data types including user defined types. Like sort(), max(), minO, ..etc.
3. We can write one class or struct that can be used for all data types including user defined types. Like Linked List, Stack, Queue ..etc.
4. Template is an example of compile time polymorphism.
```
#### Output: 
```
1,2,3 and 4
```

# Question 7
```
Which keyword can be used in template?
class
both class & typename
typename
function

```
#### Output: 
```
both class & typename
```


# Question 8
```cpp
#include <iostream>
using namespace std;

template <class T>
T max(T &a, T &b)
{
    return (a > b ? a : b);
}

int main()
{
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;
    k = max(i, j);
    n = max(l, m);
    cout << k << endl;
    cout << n << endl;
    return 0;
}
```
#### Output: 
```
6
10
```

# Question 9
```cpp
#include <iostream>
using namespace std;

template <int n>
struct funStruct
{
    static const int val = 2 * funStruct<n - 1>::val;
};
template <>
struct funStruct<0>
{
    static const int val = 1;
};
int main()
{
    cout << funStruct<10>::val << endl;
    return 0;
}
```
#### Output: 
```
1024
```

# Question 10
```
Which of the following is correct about templates?
It is a type of compile time polymorphism
Helps in generic programming
It allows the programmer to write one code for all data types
All of the mentioned
```
#### Output: 
```
All of the mentioned
```


# That's it folks! Happy Coding :)