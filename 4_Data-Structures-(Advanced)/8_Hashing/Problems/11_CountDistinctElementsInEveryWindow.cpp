//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> countDistinct(int A[], int n, int k)
    {
        // code here.
        vector<int> result;
        unordered_map<int, int> map;
        for (int i = 0; i < k; i++)
        {
            map[A[i]]++;
        }
        result.push_back(map.size());
        for (int i = k; i < n; i++)
        {
            map[A[i - k]]--;
            if (map[A[i - k]] == 0)
            {
                map.erase(A[i - k]);
            }
            map[A[i]]++;
            result.push_back(map.size());
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> result = obj.countDistinct(a, n, k);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends