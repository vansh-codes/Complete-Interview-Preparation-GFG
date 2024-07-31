//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int getMid(int s, int e)
{
    return s + (e - s) / 2;
}

ll constructSTUtil(int *arr, int ss, int se, ll *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] = constructSTUtil(arr, ss, mid, st, si * 2 + 1) +
             constructSTUtil(arr, mid + 1, se, st, si * 2 + 2);
    return st[si];
}

ll *constructST(int *arr, int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2 * (int)pow(2, x) - 1;
    ll *st = new ll[max_size];
    constructSTUtil(arr, 0, n - 1, st, 0);
    return st;
}

ll getsum(ll *st, int n, int l, int r);
void updateValue(int *, ll *, int, int, int);

// } Driver Code Ends
// User function template for C++

// arr : given array
// n : size of arr
// index : need to update
// new_val : given value to which we need to update index
// st : constructed segment-tree

void updateValueUtil(ll *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;
    st[si] += diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, si * 2 + 1);
        updateValueUtil(st, mid + 1, se, i, diff, si * 2 + 2);
    }
}

// Function to update a value in input array and segment tree.
// Function to update a value in input array and segment tree.
void updateValue(int *arr, ll *st, int n, int index, int new_val)
{
    if (index < 0 || index >= n)
    {
        cout << "Invalid index" << endl;
        return;
    }
    int diff = new_val - arr[index];
    arr[index] = new_val;
    updateValueUtil(st, 0, n - 1, index, diff, 0);
}

ll getSumUtil(ll *st, int ss, int se, int qs, int qe, int si)
{
    if (qs > se || qe < ss)
        return 0;
    if (qs <= ss && qe >= se)
        return st[si];
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, si * 2 + 1) +
           getSumUtil(st, mid + 1, se, qs, qe, si * 2 + 2);
}

// Function to return sum of elements in range from index qs (query start)
// to qe (query end).
ll getsum(ll *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        cout << "Invalid query" << endl;
        return -1;
    }
    return getSumUtil(st, 0, n - 1, qs, qe, 0);
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, query;
        cin >> num >> query;
        int arr[num];
        for (int i = 0; i < num; i++)
            cin >> arr[i];

        ll *st = constructST(arr, num);
        int L, R, index, val;
        char type;
        while (query--)
        {
            cin.ignore(INT_MAX, '\n');
            cin >> type;
            if (type == 'G')
            {
                cin >> L >> R;
                cout << getsum(st, num, L, R) << endl;
            }
            else
            {
                cin >> index >> val;
                updateValue(arr, st, num, index, val);
            }
        }
    }

    return 0;
}

// } Driver Code Ends