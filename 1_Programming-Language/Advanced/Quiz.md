## Question 1
```
Which of the following is the default mode of the opening using the fstream class?
ios::in
ios::in|ios::out
ios::out
ios::trunc
```
#### Output: 
```
ios::in|ios::out
```

#### Explanation:
By default, the file is opened in ios::inlios::out mode if the file object we are using is of fstream class.

## Question 2
```
What is the syntax of defining lambda expression?
[capture clause](parameters) -> return_type {body of the function }
[parameters](capture clause)-> return_type {body of the function}
[parameters:capture clause]() -> return _ type { body of the function }
[capture clause:parameters]() -> return _ type { body of the function }
```
#### Output: 
```
[capture clause](parameters) -> return_type {body of the function }
```

## Question 3
```
What is the correct statement about lambda expression?
The return type of lambda expression can be neglected in some cases
Lambda expression should be very large functions
The return type of lambda expression must be specified in all cases
NONE
```
#### Output: 
```
The return type of lambda expression can be neglected in some cases
```

## Question 4
```
Which is the correct syntax of capturing a variable 'X' by reference and other variable 'Y' by value in lambda expression?
[&X, Y]
[X, &y]
[X,Y]
[&x,&y]
```
#### Output: 
```
[&X, Y]
```

## Question 5
```
Which operator is used in pointer to member function?
.*
->*
Both .* & ->*
$*
```
#### Output: 
```
Both .* & ->*
```

## Question 6
```
What is the operation for .*?
It combines the first operand and the second operand
It reduces the data size
It separates the first operand and the second operand
It combines the first operand and the second operand and
terminates third operand
```
#### Output: 
```
It combines the first operand and the second operand
```

## Question 7
```
To use command line arguments in C++, how many parameters are passed to the main function?
1
2
3
4
```
#### Output: 
```
2
```

## Question 8
```
Which character is used to separate different arguments?
#
$
space
|
```
#### Output: 
```
space
```

## Question 9
```
Which function is used to reposition the file pointer?
moveg()
seekg()
changep()
go_p()
```
#### Output: 
```
seekg()
```

## Question 10
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    int b = 5;
    auto check = [&a]()
    {
        a = 10;
        b = 10;
    } 
    check();
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    return 0;
}
```
#### Output: 
```
Error
```