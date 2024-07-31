//{ Driver Code Starts
// Initial Template for C++

// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

vector<string> powerSet(string s)
{
    vector<string> ans;
    int n = s.size();
    ans.push_back(""); // add empty string to the power set
    for (int i = 0; i < pow(2, n); i++)
    {
        string res = "";
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
                res.push_back(s[j]);
        }
        if (!res.empty()) // skip empty string
            ans.push_back(res);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

//{ Driver Code Starts.

// Driver code
int main()
{
    int T;
    cin >> T; // testcases
    while (T--)
    {
        string s;
        cin >> s; // input string

        // calling powerSet() function
        vector<string> ans = powerSet(s);

        // sorting the result of the powerSet() function
        sort(ans.begin(), ans.end());

        // printing the result
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends