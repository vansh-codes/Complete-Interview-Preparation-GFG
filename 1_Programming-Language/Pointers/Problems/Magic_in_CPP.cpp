#include <bits/stdc++.h>
using namespace std;
void swap(int *A, int *B);
void swap(int&, int&);

void swap(int *A, int *B){
    
    // Your code here
    int temp = *A;
    *A = *B;
    *B = temp;
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
    int temp = A;
    A = B;
    B = temp;
  
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A,B;
        cin >> A >> B;

        swap (A, B);
        cout << A << " " << B << endl;

        swap(&A, &B);
        cout << A << " " << B << endl;
    }
    return 0;
}

void updateVar(int *a)
{
      // write your code here
      *a = *a + 10;
}