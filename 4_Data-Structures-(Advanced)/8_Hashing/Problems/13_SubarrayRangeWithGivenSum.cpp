//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        // Your code here
        unordered_map<int, int> mp;
        int curr_sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            curr_sum += arr[i];

            if (curr_sum == sum)
                count++;

            if (mp.find(curr_sum - sum) != mp.end())
                count += mp[curr_sum - sum];

            mp[curr_sum]++;
        }

        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int sum = stoi(ks);
        Solution obj;
        int res = obj.subArraySum(arr, sum);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends