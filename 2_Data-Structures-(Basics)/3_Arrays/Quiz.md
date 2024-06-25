## Question 1
```markdown
A program P reads in 500 integers in the range [0..100] representing the scores of 500 students. It then prints the frequency of each score above 50. What would be the best way
for P to store the frequencies?
```
#### Output: 
An Array of 50 numbers


## Question 2
```
What will the output of the below code?

#include <iostream>
using namespace std;
int main(){
int arr[2] = {1, 2};
cout << 0[arr] <<","<< 1[arr] << endl;
return 0;
}
```
#### Output: 
```
1,2
```

## Question 3
```
The minimum number of comparisons required to determine if an integer appears more than n/2 times in a sorted array of n integers is
```
#### Output: 
$\Theta(logn)$


## Question 4
```
Let A be a square matrix of size n x n. Consider the following program. What is the expected output?
c = 100
for i = 1 to n do
    for j = 1 to n do
    {
        Temp = A[i][j] + C
        A[i][j] = A[j][i]
        A[j][i] = Temp - C
    }
for i = 1 to n do
    for j = 1 to n do
        Output(A[i][j])
```
#### Output: 
```
The Matrix A itself
```

## Question 5
```markdown
An algorithm performs (logN)^1/2 find operations, N insert operations, (logN)^1/2 delete operations, and (logN)^1/2 decrease-key operations on a set of data items with keys drawn
from a linearly ordered set. For a delete operation, a pointer is provided to the record that must be deleted. For the decrease-key operation, a pointer is provided to the record
that has its key decreased. Which one of the following data structures is the most suited for the algorithm to use, if the goal is to achieve the best total asymptotic complexity
considering all the operations?
```
#### Output: 
```
Unsorted Array
```

## Question 6
```
What will the output of the below code, be if the base address of the array is 1200?
int main(){
int arr[] = {1, 2, 3, 4, 5};
cout << arr << "," << &arr << "," << &arr[0] << endl;
return 0;
}
```
#### Output: 
1200, 1200, 1200

## Question 7
```
Let A[l...n] be an array of n distinct numbers. If i < j and Ali] > AOI, then the pair (i, j) is called an inversion of A. What is the expected number of inversions in any permutation on n
elements ?
```
#### Output: 
```
n(n-1)/4
```


## Question 8
```cpp
A three dimensional array in 'C++' is declared as int A[x][y][z] Consider that array elements are stored in row major order and indexing begins from 0. Here, the address of an
item at the location A[p][q][r] can be computed as follows (where w is the word length of an integer):
```
#### Output: 
```
&A[0][0][0] + w(y * z * p + z*q + r)
```

## Question 9
```cpp
Which of the following correctly declares an array?
```
#### Output: 
int geeks[20];


## Question 10
```cpp
Consider a two dimensional array A[20][10]. Assume 4 words per memory cell, the base address of array A is 100, elements are stored in row-major order and first element is A[0]
[0]. What is the address of A[11][5] ?
```
#### Output: 
```
560
```

---