The problem involves moving disks from Tower A to Tower C using Tower B as an auxiliary, adhering to specific rules. This problem is commonly known as the Tower of Hanoi problem.

### Problem Description
- **Objective**: Move all disks from Tower A to Tower C.
- **Rules**:
  1. Only one disk can be moved at a time.
  2. A larger disk cannot be placed on top of a smaller disk.
  3. Only the top disk of any tower can be moved.

### Examples
1. **1 Disk**:
   - Move disk from A to C.
2. **2 Disks**:
   - Move disk 1 from A to B.
   - Move disk 2 from A to C.
   - Move disk 1 from B to C.
3. **3 Disks**:
   - Move disks 1 and 2 from A to B using C as auxiliary.
   - Move disk 3 from A to C.
   - Move disks 1 and 2 from B to C using A as auxiliary.

### Recursive Solution
- **Base Case**: If there is only one disk, move it directly from source (A) to destination ( C).
- **Recursive Case**:
  1. Move the top `n-1` disks from A to B using C as auxiliary.
  2. Move the `nth` (largest) disk from A to C.
  3. Move the `n-1` disks from B to C using A as auxiliary.

### Recursive Function
```cpp
#include<bits/stdc++.h>
using namespace std;

static int count=0;
void TOH(int n, char Source, char Auxiliary, char Destination){
    if(n==1){ 
        cout<<"Move Disc "<< n <<" from "<< Source <<" to "<< Destination <<endl;
        return;
    }
    TOH(n-1, Source, Destination, Auxiliary);
    cout<<"Move Disc "<< n <<" from "<< Source <<" to "<< Destination <<endl;
    TOH(n-1, Auxiliary, Source, Destination);
    
}

int main(){
    int n;
    cin>>n;

    TOH(n, 'Source', 'Auxiliary', 'Destination');

    return 0;
}
```

### Working of the Recursive Function
- For `n = 2`:
  1. Move disk 1 from A to B.
  2. Move disk 2 from A to C.
  3. Move disk 1 from B to C.
- For `n = 3`:
  1. Move disks 1 and 2 from A to B.
  2. Move disk 3 from A to C.
  3. Move disks 1 and 2 from B to C.

### Correct Disk Movement
- The function ensures that the disk numbers are printed correctly based on the recursive calls and the rules defined.

### Counting Number of Moves
- **Pattern**:
  - `T(1) = 1`
  - `T(2) = 3`
  - `T(3) = 7`
- **Formula**:
  - The number of moves required is $2^n - 1$.

### Conclusion
- The Tower of Hanoi problem can be efficiently solved using recursion, leveraging the solution for `n-1` disks to solve for `n` disks.
- The recursive solution ensures correct disk movement while adhering to the rules of the problem.
- The time complexity of the solution is exponential, $O(2^n)$, with the number of moves required being $2^n - 1$.