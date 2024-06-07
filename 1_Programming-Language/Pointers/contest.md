# Coding Question 1 - Product of Array
Your Task:

The task is to complete the function search() which takes the array arr. its size n and the element x as inputs and returns the index of first occurrence of x in the given array. If the element X does not exist in the array, the function should return -1.

Expected Time Complexity: O(n)

Expected Auxiliary Space: O(1).

Constraints:
1 <= n <= 100
1 <= arr[i] <= 100
1 <= x <= 100

#### Solution code:-

```
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// arr[] is the array
// n number of element in array
// mod modulo value;

long long int product(int arr[], int n, long long int mod)
{

    // code here
    long long product = 1;

    for (int i = 0; i < n; i++)
    {
        product = (product * arr[i]) % mod;
    }
    return product;
}
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[100001] = {0};

        for (int i = 0; i < n; i++)

            cin >> arr[1];

        long long int mod = 1000000007;
        cout << product(arr, n, mod) << endl;
    }
    return 0;
}
```


# Coding Question 2 - Search in an Array
Given an integer array arr & its size n and another integer element x. 
You have to find if the given element is present in array or not. If present then return its index position to the 
function search() and if not then return -1.

Example 1:

Input:
n = 4
arr[] = [1, 2, 3, 4]
x = 3

Output: 
2

Example 2:

Input: 
n = 5
arr[] = [1, 2, 3, 4, 5]
x = 6

Output: 
-1

Your Task:
The task is to complete the function search() which takes the array arr[], its size n and the element x 
as inputs and returns the index of first occurrence of x in the given array. If the element X does not 
exist in the array, the function should return -1.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1).

Constraints:
1 <= n <= 100
1 <= arr[i] <= 100
1 <= x <= 100

#### Solution code:-
```
#include <bits/stdc++.h>
using namespace std;

// Function to search x in arr

int search(int arr[], int n, int x)
{

    // Your code here

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == x)
        {
            return i;
        }
        return -1;
    }
}

    // Driver Code Starts.
    int main()
    {
        int testcases;
        cin >> testcases;

        while (testcases -)
        {

            int sizeOfArray;

            cin >> sizeOfArray;

            int arr[sizeOfArray];

            int x;

            for (int i = 0; i < sizeOfArray; i++)
            {
                cin >> arr[i];
            }
            cin >> x;

            cout << search(arr, sizeOfArray, x) << endl;
        }

        return 0;
    }
```


# Coding Question 3 - Have Fun with OR
You are given an array arr[], you have to re-construct an array arr[].
The values in arr[] are obtained by doing OR(bitwise or) of consecutive elements in the array.

Example 1:
Input: 
arr[] = {10, 11, 1, 2, 3}

Output: 
11 11 3 3 3

Explanation: <br>
At index 0, arr[0] or arr[1] = 11 <br>
At index 1, arr[1] or arr[2] = 11 <br>
At index 2, arr[2] or arr[3] = 3 <br>
. <br>
. <br>
At index 4, No element is left So, it will remain as it is.

New Array will be {11, 11, 3, 3, 3}.

Example 2:

Input: 
arr[] = {5, 9, 2, 6}

Output: 
13 11 6 6

#### Solution code:-
```
#include<bits/stdc++.h>
using namespace std;

// Driver Code Starts
int* fun_with_number(int arr[], int n) {
    // Complete the function
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i] | arr[i + 1];
    }
    return arr;
}

// Driver Code Ends
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int *arr2;
        arr2 = fun_with_number(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr2[i] << " ";
        cout << endl;
    }
}

```