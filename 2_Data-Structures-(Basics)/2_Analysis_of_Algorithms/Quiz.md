## Question 1
```cpp
int fun(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            count = count + 1;
    return count;
}
```
#### Output: 
$\Theta(n^2)$


## Question 2
```
O(n) is the worst case time complexity, so among the given options it can represent :-
O(n^2)
O(nlogn)
0(1)
None of the above
```
#### Output: 
```
O(1)
```

#### Explanation:
If $O(n)$ is the worst-case time complexity, it means that the algorithm's time complexity grows linearly with the size of the input ((n)). Among the given option:
- $O(n^2)$ represents a quadratic time complexity, which is worse than linear $O(n)$.
- $O(1)$ represents constant time complexity, which is better than linear $O(n)$.
- $O(n log n)$ represents a time complexity between linear and quadratic, known as linearithmic or log-linear time complexity.
Therefore, among the given options, $O(1)$ is the one that represents a better (more efficient) time complexity than $O(n)$. So, the
correct answer is: $O(1)$

## Question 3
```
Which of the following is not O(n2)?
(15) * n2
n3/(sqrt(n))
n^1.96
(20) * n2
```
#### Output: 
```
n3/(sqrt(n))
```

#### Explanation:
The order of growth of option c is $n^{2.5}$ which is higher than $n^2$.

## Question 4
```
Which of the given options provides the increasing order of asymptotic complexity of functions €1, f2, f3, and f4?
f1(n) = 2^n
f2(n) = n^(3/2)
f3(n) = n*log(n)
f4(n) = n^(log(n))
```
#### Output: 
```
f3,f2,f4,f1
```

#### Explanation:
Given functions:

- $f_1(n) = 2^n$
- $f_2(n) = n^{3/2}$
- $f_3(n) = n \log(n)$
- $f_4(n) = n^{\log(n)}$

Except for $f_3$, all other functions are exponential. So, $f_3$ is definitely first in the output. Among the remaining functions, $n^{3/2}$ is next. One way to compare $f_1$ and $f_4$ is to take the logarithm of both functions. The order of growth of $\log(f_1(n))$ is $\Theta(n)$ and the order of growth of $\log(f_4(n))$ is $\Theta(\log(n) \cdot \log(n))$. Since $\Theta(n)$ has a higher growth rate than $\Theta(\log(n) \cdot \log(n))$, $f_1(n)$ grows faster than $f_4(n)$.

Another way to compare $f_1$ and $f_4$ is to take a few values to compare:

- For $n = 32$:
  - $f_1 = 2^{32}$
  - $f_4 = 32^5 = 2^{25}$

- For $n = 64$:
  - $f_1 = 2^{64}$
  - $f_4 = 64^6 = 2^{36}$

Therefore, the order of growth comparison of the given functions is:
\[ f_3(n) \lt f_2(n) \lt f_4(n) \lt f_1(n) \]



## Question 5
```cpp
int unknown(int n) {
    int i, j, k=0;
    for (i = n/2; i<=n; i++)
        for(j=2;j<=n;j=j*2)
            k = k + n/2;
    return k;
}
```
#### Output: 
```
n logn
```

#### Explanation:
In the below explanation, 'A' is used to represent exponent: The outer loop runs n/2 or Theta(n) times. The inner loop runs (Logn) times (Note that j is multiplied by 2
in every iteration). So the overall time complexity is nLogn.

## Question 6
```
The recurrence equation
T(1) = 1
t(n) = 2T(n - 1) + n, n>=2
evaluates to

```
#### Output: 
a. $2^{n+1}-n-2$

## Question 7
```
Consider the following three claims:
I (n + k)^m = Theta(nm) where k and m are constants
II 2^(n+1) = O(2^n)
III 2^(2n+1) = O(2^n)
Which of these claims is correct? (GATE CS 2003)
```
#### Output: 
```
I and II
```


## Question 8
```cpp
//Consider the following code segment:
int f (int x){
    if (x < 1) return 1;
    else return (f(x-1) + g(x));
}
int g (int x){
    if (x < 2) return 2;
    else return (f(x-1) + g(x/2));
}
//Of the following, which best describes the growth of f(x) as a function of x?
```
#### Output: 
```
Exponential
```

## Question 9
```cpp
//What is the time complexity of following function fun()? Assume that log(x) retums log value in base 2.
void fun(int n){
    int i, j;
    for (i=1; i<=n; i++)
        for (j=1; j<=log(i); j++)
            printf( "GeeksforGeeks" ) ;
}
```
#### Output: 
$\Theta(n log n)$

## Question 10
```cpp
//What is the output of the following recursive function when called with n=5?
//C/C++ Code
int foo(int n) {
    if(n == 0)
    return 1;
    else
    return n * foo(n-1);
}
```
#### Output: 
```
120
```

#### Explanation:
The given recursive function calculates the factorial of a non-negative integer n.
When the function is called with n=5, the function checks whether n is equal to 0. Since n is not equal to zero, it returns the value of n times the value of the same
function called with n-1 as input. This recursive call continues until the base case is reached. <br>
The calculation for foo(5) would be: <br> 
foo(5) = 5 * foo(4) foo(4) = 4 * foo(3) foo(3) = 3 * foo(2) foo(2) = 2 * foo(1) foo(1) = 1 * foo(0) foo(0) = 1 <br>
Substituting foo(0) = 1 in foo(1): <br> 
foo(1) = 1 * 1 = 1 <br>
Substituting foo(1) = 1 in foo(2):<br>
foo(2) = 2 * 1 = 2 <br>
Substituting foo(2) = 2 in foo(3):<br> 
foo(3) * 2 = 6 <br>
Substituting foo(3)=6 in foo(4): <br> 
foo(4) = 4 * 6 = 24 <br>
Substituting foo(4) = 24 in foo(5):<br> foo(5) = 5 * 24 = 120 <br>
Therefore, the output of the function when called with is 120, which is option C.

---