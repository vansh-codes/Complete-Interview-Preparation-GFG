//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n)
    {
        // code here
        unordered_map<long long int, long long int> prefixSumCount;
        long long int count = 0;
        long long int prefixSum = 0;

        // Initialize the map with 0 to handle the subarrays starting from index 0
        prefixSumCount[0] = 1;

        for (int i = 0; i < n; ++i)
        {
            prefixSum += arr[i];

            // If prefixSum is found in the map, it means there is a subarray (ending at index i)
            // with sum zero. The value of prefixSumCount[prefixSum] gives the count of such subarrays.
            if (prefixSumCount.find(prefixSum) != prefixSumCount.end())
            {
                count += prefixSumCount[prefixSum];
            }

            // Increment the count of prefixSum in the map
            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; // input size of array

        vector<long long int> arr(n, 0);

        for (int i = 0; i < n; i++)
            cin >> arr[i]; // input array elements
        Solution ob;
        cout << ob.findSubarray(arr, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends