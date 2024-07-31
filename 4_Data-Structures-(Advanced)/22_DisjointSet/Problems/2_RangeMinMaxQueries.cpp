//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;

int getMid(int s, int e) { return s + (e - s) / 2; }

void constructSTUtil(int *arr, int ss, int se, PII *st, int si)
{
    if (ss == se)
    {
        st[si].first = st[si].second = arr[ss];
        return;
    }
    int mid = getMid(ss, se);
    constructSTUtil(arr, ss, mid, st, si * 2 + 1);
    constructSTUtil(arr, mid + 1, se, st, si * 2 + 2);

    st[si].first = min(st[si * 2 + 1].first, st[si * 2 + 2].first);
    st[si].second = max(st[si * 2 + 1].second, st[si * 2 + 2].second);

    return;
}

PII *constructST(int *arr, int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2 * (int)pow(2, x) - 1;
    PII *st = new PII[max_size];
    constructSTUtil(arr, 0, n - 1, st, 0);
    return st;
}

void updateValue(int *, PII *, int, int, int);
PII getMinMax(PII *, int *, int, int, int);

// } Driver Code Ends
// User function template for C++

// arr : given array arr
// st : segment tree of the given array arr
// n :  size of arr array
// qs and qe : index range to find Min and Max value between these indexes.
// PII :  return pair denoting min,max respectively.
// index : given index to update with new_val

void updateValueUtil(PII *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;
    if (ss == se)
    {
        st[si].first += diff;
        st[si].second += diff;
        return;
    }
    int mid = getMid(ss, se);
    updateValueUtil(st, ss, mid, i, diff, si * 2 + 1);
    updateValueUtil(st, mid + 1, se, i, diff, si * 2 + 2);
    st[si].first = min(st[si * 2 + 1].first, st[si * 2 + 2].first);
    st[si].second = max(st[si * 2 + 1].second, st[si * 2 + 2].second);
}

// Function to update a value in input array and segment tree.
void updateValue(int *arr, PII *st, int n, int index, int new_val)
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

PII getMinMaxUtil(PII *st, int ss, int se, int qs, int qe, int si)
{
    if (qs > se || qe < ss)
        return make_pair(INT_MAX, INT_MIN);
    if (qs <= ss && qe >= se)
        return st[si];
    int mid = getMid(ss, se);
    PII left = getMinMaxUtil(st, ss, mid, qs, qe, si * 2 + 1);
    PII right = getMinMaxUtil(st, mid + 1, se, qs, qe, si * 2 + 2);
    return make_pair(min(left.first, right.first), max(left.second, right.second));
}

// Function to return minimum and maximum of elements in range from index
// qs (quey start) to qe (query end).
PII getMinMax(PII *st, int *arr, int n, int qs, int qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        cout << "Invalid query" << endl;
        return make_pair(-1, -1);
    }
    return getMinMaxUtil(st, 0, n - 1, qs, qe, 0);
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

        PII *st = constructST(arr, num);
        int L, R, index, val;
        char type;
        while (query--)
        {
            cin.ignore(INT_MAX, '\n');
            cin >> type;
            if (type == 'G')
            {
                cin >> L >> R;
                PII ans = getMinMax(st, arr, num, L, R);
                cout << ans.first << " " << ans.second << endl;
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