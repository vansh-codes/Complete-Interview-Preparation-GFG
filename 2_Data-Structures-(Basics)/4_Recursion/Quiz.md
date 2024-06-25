## Question 1
```markdown
What is the main characteristic of recursion?
```
#### Output: 
The execution of a function within itself


## Question 2
```
What is a base case in recursion?
```
#### Output: 
```
The condition that stops the function from calling itself
```

## Question 3
```
What happens if the base case is not defined in a recursive function?
```
#### Output: 
The function will run forever, resulting in a stack overflow error


## Question 4
```
Which of the following statement isn't correct between tail recursion and non-tail recursion?
```
#### Output: 
```
Tail recursion is a type of recursion that occurs when the recursive call is at the beginning of the function, whereas non-tail recursion occurs when it is at the end
```

## Question 5
```markdown
What is the result of the following pseudocode when called with an input of 4?
function recursion(n)
    if n==1
        return 1
    else
        return n * recursion(n-1)
print(recursion(4))
```
#### Output: 
```
24
```

## Question 6
```
What is the output of the following pseudocode when called with an input of 3?
function recursion(n)
        if n==0
            return 0
        return n + recursion(n-1)
print(recursion(3))
```
#### Output: 
6

## Question 7
```
How many times will the following pseudocode be executed when called with an input of 3?
function recursion(n)
        if n==0
            return 0
        return n + recursion(n-1)
print(recursion(3))
```
#### Output: 
```
4
```


## Question 8
```cpp
What is the purpose of the stack data structure when used in a recursive algorithm?
```
#### Output: 
```
All of the above
```

## Question 9
```cpp
What is the time complexity of the Fibonacci sequence when calculated using a recursive algorithm?
```
#### Output: 
O(2^n)


## Question 10
```cpp
What is the time complexity of the Tower of Hanoi problem when solved using a recursive algorithm?
```
#### Output: 
```
O(2^n)
```

---