//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int countSmallerRight(int *, int);

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << countSmallerRight(arr, n) << endl;
    }

    return 0;
}
// } Driver Code Ends

// User function template for C++
int countSmallerRight(int arr[], int n)
{
    if (n <= 1)
        return 0;

    int maxCount = 0;
    set<int> bst; // Use set for maintaining sorted order and handling duplicates

    for (int i = n - 1; i >= 0; --i)
    {
        // Count elements in bst that are smaller than arr[i]
        int smallerCount = distance(bst.begin(), bst.lower_bound(arr[i]));

        // Update maxCount if smallerCount is greater
        if (smallerCount > maxCount)
        {
            maxCount = smallerCount;
        }

        // Insert current element into the bst
        bst.insert(arr[i]);
    }

    return maxCount;
}
