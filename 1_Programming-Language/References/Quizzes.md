# Question 1
```
int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun();
    return 0;
}

```
#### Output: 
```
30
```
#### Explanation: 
When a function returns by reference, it can be used as Ivalue. Since x is a static variable, it is shared among function calls and the initialization line 'static int x = 10;" is executed only once. The function call fun() = 30, modifies x to
30. The next call "cout << fun()" returns the modified value. 


# Question 2
```
int &fun()
{
    int x = 10;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun();
    return 0;
}
```
#### Output: 
```
May cause runtime error
```
#### Explanation: 
Since we return reference to a local variable, the memory location becomes invalid after function call is over. Hence it may result in segmentation fault runtime error.

# Question 3
```
int main()
{
    int x = 10;
    int &ref = x;
    ref = 20;
    cout << "x = " << x << endl;
    x = 30;
    cout << "ref = " << ref << endl;
    return 0;
}
```
#### Output: 
```
x = 20
ref = 30
```
#### Explanation: 
ref is an alias of x, so if we change either of them, we can see the change in other as well.

# Question 4
```
Which of the following functions must use reference.
1. Assignment operator function
2. Destructor
3. Copy Constructor
4. Parameterized constructor
```
#### Output: 
```
3. Copy Constructor
```
#### Explanation: 
copy constructor is called when an object is passed by value. Copy constructor itself is a function. So if we pass argument by value in a copy constructor, a call to copy constructor would be made to call copy constructor which
becomes a non-terminating chain of calls. Therefore compiler doesn't allow parameters to be pass by value.

# Question 5
```
Which of the following is FALSE about references in C++?
1. References cannot be NULL
2. Once a reference is created, it cannot be later made to reference another object; it cannot be
reset.
3. A reference must be initialized when declared
4. References cannot refer to constant value
```
#### Output: 
```
4. References cannot refer to constant value
```
#### Explanation: 
We can create a constant reference that refers to a constant. For example, the following program compiles and runs fine.
```
#include<iostream>
using namespace std;
int main()
{
    const int x = 10
    const int& ref = x
    cout << ref;
    return 0;
}
```

# Question 6
```
Pick the correct statement about references.
1. References can be assigned value NULL
2. Reference should not be initialized when created
3. References once assigned cannot be changed to refer another variable
4. Reference is the same as pointers
```
#### Output: 
```
3. References once assigned cannot be changed to refer another variable
```

# Question 7
```
Which of the following operator is used while declaring references?
1. *
2. &
3. @
4. ->
```
#### Output: 
```
2. &
```

# Question 8
```
Which of the following statement(s) is/are correct?
1. * operator is used to declare a reference
2. References must always be initialized inside classes
3. A reference variable defined to refer a particular variable can refer to any other variable also
4. A variable can have more than one references
```
#### Output: 
```
4. A variable can have more than one references
```

# Question 9
```
int main(int argc, char const)
{
int &q = 5;
cout<<q;
return 0;
}
```
#### Output: 
```
Compile Time Error
```

#### Explanation
References require are other names for variables not for a constant literal. No such assignment are allowed in C++.

# Question 10
```
int main(int argc, char const *argv[])
{
    int a = 5;
    int *p = &a;
    int *(&q) = p;
    cout << q;
    return 0;
}
```
#### Output: 
```
Address of pointer a
```

#### Explanation
The program is correct so the the program runs perfectly. It is way to assign pointers to references. The program prints the address of a because it is an alias for pointer p and pointer p stores the address of a therefore answer is
address of a.


# That's it folks! Happy Coding :)
