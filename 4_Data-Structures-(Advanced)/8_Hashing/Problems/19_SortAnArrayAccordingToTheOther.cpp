//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]

    // Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M)
    {
        // Your code here
        unordered_map<int, int> mp;
        for (int i = 0; i < M; i++)
        {
            mp[A2[i]] = i;
        }

        sort(A1.begin(), A1.end(), [&](int a, int b)
             {
        if(mp.find(a)!= mp.end() && mp.find(b)!= mp.end()) {
            return mp[a] < mp[b];
        } else if(mp.find(a)!= mp.end()) {
            return true;
        } else if(mp.find(b)!= mp.end()) {
            return false;
        } else {
            return a < b;
        } });

        return A1;
    }
};

//{ Driver Code Starts.

int main(int argc, char *argv[])
{

    int t;

    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;

        vector<int> a1(n);
        vector<int> a2(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }

        Solution ob;
        a1 = ob.sortA1ByA2(a1, n, a2, m);

        for (int i = 0; i < n; i++)
            cout << a1[i] << " ";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends