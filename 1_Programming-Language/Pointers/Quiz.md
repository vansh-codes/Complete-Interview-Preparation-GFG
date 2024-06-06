# Question 1
```
int main()
{
    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;
    cho += a;
    *ptr += ch;
    cout << a << ", " << ch << endl;
    return 0;
}
```
#### Output: 
```
129, a
```
#### Explanation: 
The "ptr" variable is a pointer which holds the address of variable "a". And "*ptr" returns the value of "a" variable. "Cho" is a reference variable to "Ch". So any change rnade to "Cho" will be reflected to "Ch". As such, when "Cho" is
increased by 32, it adds to the ASCII value of is 65, and this results to 97 which is the ASCII value of "a"(from the alphabet). So this "a" gets stored in "Ch". As for when "*ptr" is incremented by "Ch", it gives value 97+32=129.


# Question 2
```
int main()
{
    const int i = 20;
    const int *const ptr = &i;
    (*ptr)++;
    int j = 15;
    ptr = &j;
    cout << i;
    return 0;
}
```
#### Output: 
```
Compile error
```
#### Explanation: 
Here •ptr" has been defined as a constant pointer that holds address ofa constant integer "i". So, neither can the value of "ptr" be changed, nor can the value held by it can be changed. Thus the lines and are
invalid, as they are trying to modify the variable i's content and the value of the pointer respectively. This gives an error.

# Question 3
```
int main()
{
    int arr[] = {4,5,6,7};
    int *p = (arr+1);
    cout << *arr + 10;
    return 0;
}
```
#### Output: 
```
14
```
#### Explanation: 
'arr' works as a pointer to the array. So 'arr' points to the first location in the array. Similarly 'arr + 1' points to the second location in the array, and so on. Therefore, *arr accesses the first value in the array, which is 4, and adds it to 10.
This gives 14 as output.

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
The operator used for dereferencing or indirection is ....
```
#### Output: 
```
*
```

# Question 6
```
Which of the following is NOT correct?
```
#### Output: 
```
int i; double* dp = &i;
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
Which one of the following is not a possible state for a pointer.
hold the address of the specific object
zero
point one past the end of an object
point to a type
```
#### Output: 
```
point to a type
```

# Question 9
```
int main()
{
    char arr[20];
    int i;
    for (i = 0; i < 8; i++)
        *(arr + i) = 65 + i;
    *(arr + i) = '\0';
    cout << arr;
    return 0;
}
```
#### Output: 
```
ABCDEFGH
```

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