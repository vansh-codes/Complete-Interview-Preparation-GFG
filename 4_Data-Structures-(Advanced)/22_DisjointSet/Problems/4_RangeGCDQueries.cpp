//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>

using namespace std;

// Function to find gcd of 2 numbers.
int gcd(int a, int b)
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// get mid
int getMid(int s, int e)
{
    return s + (e - s) / 2;
}

// A recursive function that constructs Segment Tree for
// array[ss..se]. si is index of current node in segment
// tree st
int constructST(int arr[], int st[], int ss, int se, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return st[si];
    }
    int mid = getMid(ss, se);
    st[si] = gcd(constructST(arr, st, ss, mid, si * 2 + 1),
                 constructST(arr, st, mid + 1, se, si * 2 + 2));
    return st[si];
}

/* Function to construct segment tree from given array.
This function allocates memory for segment tree and
calls constructSTUtil() to fill the allocated memory */
int *constructSegmentTree(int arr[], int n)
{
    int height = (int)(ceil(log2(n)));
    int size = 2 * (int)pow(2, height) - 1;
    int *st = new int[size];
    constructST(arr, st, 0, n - 1, 0);
    return st;
}

// } Driver Code Ends
// User function template in C++

// st : segment tree
// n : size of the given array
// l and r : range to find gcd i.e L and R respectively

class Solution
{
public:
    // Function to find gcd of given range.
    // Function to find gcd of given range.

    int findRangeGcdUtil(int st[], int ss, int se, int qs, int qe, int si)
    {
        if (qs > se || qe < ss)
            return 0;
        if (qs <= ss && qe >= se)
            return st[si];
        int mid = getMid(ss, se);
        int leftGcd = findRangeGcdUtil(st, ss, mid, qs, qe, si * 2 + 1);
        int rightGcd = findRangeGcdUtil(st, mid + 1, se, qs, qe, si * 2 + 2);
        return gcd(leftGcd, rightGcd);
    }

    // Function to find gcd of given range.
    int findRangeGcd(int l, int r, int st[], int n)
    {
        if (l < 0 || r > n - 1 || l > r)
        {
            cout << "Invalid query" << endl;
            return -1;
        }
        return findRangeGcdUtil(st, 0, n - 1, l, r, 0);
    }

    void updateValueUtil(int st[], int ss, int se, int i, int diff, int si, int *arr)
    {
        if (i < ss || i > se)
            return;
        if (ss == se)
        {
            st[si] = diff;
            arr[i] = diff;
            return;
        }
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, si * 2 + 1, arr);
        updateValueUtil(st, mid + 1, se, i, diff, si * 2 + 2, arr);
        st[si] = gcd(st[si * 2 + 1], st[si * 2 + 2]);
    }

    // Function to update a value in input array and segment tree.
    void updateValue(int index, int new_val, int *arr, int st[], int n)
    {
        if (index < 0 || index >= n)
        {
            cout << "Invalid index" << endl;
            return;
        }
        int diff = new_val;
        updateValueUtil(st, 0, n - 1, index, diff, 0, arr);
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Build segment tree from given array
        int *st = constructSegmentTree(a, n);
        int type;
        while (q--)
        {
            // cin.ignore(INT_MAX, '\n');
            cin >> type;

            if (type == 0)
            {
                int l, r;
                cin >> l >> r;
                Solution obj;
                cout << obj.findRangeGcd(l, r, st, n) << endl;
            }
            else
            {
                int ind, val;
                cin >> ind >> val;
                Solution obj;
                obj.updateValue(ind, val, a, st, n);
            }
        }
    }

    return 0;
}
// } Driver Code Ends