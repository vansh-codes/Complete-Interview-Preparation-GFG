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
int *reverse(int *);
int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int i, *p;
    // exchange values
    p = reverse(x);
    // output the array x
    for (i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
    }
    return 0;
}

int *reverse(int *p)
{
    int i;
    // exchange values
    for (i = 0; i < 2; i++)
    {
        int temp = *(p + i);
        *(p + 4 - i) = temp;
    }
    return p;
}
```
#### Output: 
```
None of the mentioned
```
#### Explanation: 
p points to array x then exchange values using pointer in the for loop to after exchanging value the last loop print the value but in this program reverse function
getting the address of the array and and address of the address p the reverse it but output is not mention output is 5 4 3 2 1

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
int main()
{
    int num[5];
    int *p;
    p = num;
    *p = 10;
    p++;
    *p = 20;
    p = &num[2];
    *p = 30;
    p = num + 3;
    *p = 40;
    p = num;
    *(p + 4) = 50;
    for (int i = 0; i < 5; i++)
        cout << num[i] << ", ";
    return 0;
}
```
#### Output: 
```
10, 20, 30, 40, 50,
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
    int arr[] = {4, 5, 6, 7};
    int *p = (arr + 1);
    cout << *p;
    return 0;
}
```
#### Output: 
```
5
```


# That's it folks! Happy Coding :)