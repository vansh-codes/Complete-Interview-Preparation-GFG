## Question 1
```markdown
A shared variable x, initialized to zero, is operated on by four concurrent processes W, X, Y, Z as follows. Each of the processes W and X read
x from memory, increments by one, stores it to memory, and then terminates. Each of the processes Y and Z reads x from memory,
decrements by two, stores it to memory, and then terminates. Each process before reading x invokes the P operation (i.e., wait) on a
counting semaphore S and invokes the V operation (i.e., signal) on the semaphore S after storing x to memory. Semaphore S is initialized to
two. What is the maximum possible value of x after all processes complete execution?
```
#### Output: 
```
2
```

## Question 2
```
A process executes the code as given below:
fork();
forkO;
forkO;
The number of child processes created:
```
#### Output: 
```
7
```

## Question 3
```
Consider the methods used by processes Pl and P2 for accessing their critical sections whenever needed, as given below. The initial values
of shared boolean variables Sl and S2 are randomly assigned.
//Method Used by PI
while (S1==S2)
// Critical Section
S1 = S2;
//Method Used by P2
while(S1 != S2)
// Critical Section
S2 = not (S1);
Which one of the following statements describes the properties achieved?
```
#### Output: 
```
Mutual Exclusion but not Progress
```

## Question 4
```
If the time-slice used in the round-robin scheduling policy is more than the maximum time required to execute any process, then the policy
will:
```
#### Output: 
```
degenerate to the First-Come-First-Serve algorithm
```

## Question 5
```markdown
The following are some events that occur after a device controller issues an interrupt while process L is under execution.
• (P) The processor pushes the process status of L onto the control stack.
• (Q) The processor finishes the execution of the current instruction.
• (R) The processor executes the interrupt service routine.
• (S) The processor pops the process status of L from the control stack.
• (T) The processor loads the new PC value based on the interrupt.
Which of the following is the correct order in which the events above occur?
```
#### Output: 
```
QPTRS
```

## Question 6
```
A starvation free job scheduling policy guarantees that no job indefinitely waits for a service. Which of the following job scheduling policies is
starvation free?
```
#### Output: 
Round Robin

## Question 7
```
Which of the following need not necessarily be saved on a context switch between processes?
```
#### Output: 
```
Translation look-aside Buffer
```


## Question 8
```cpp
What is the output of the following program?
// Code
```
#### Output: 
```
10 and 11
```

## Question 9
```cpp
Here are the two concurrent process P1, P2 with respective codes.
The code for P1 is as:
// code
The code for P2 is as:

```
#### Output: 
A = P(N)
B = v(M)
C = P(M)
D = V(N)
M = 0
N = 1


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