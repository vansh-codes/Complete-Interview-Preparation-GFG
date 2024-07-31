//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<string> permute(string S)
    {
        // code here

        // Code here there
        if (S.size() == 0)
        {
            return {""};
        }
        vector<string> v = permute(S.substr(1));
        vector<string> ans;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j <= v[i].size(); j++)
            {
                // BC CB
                //  adding A to every position of every word in v;

                ans.push_back(v[i].substr(0, j) + S[0] + v[i].substr(j));
            }
        }

        // removing duplicates
        // you can use set also and then convert it to vector after
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        vector<string> ans;
        ans = obj.permute(s);
        sort(ans.begin(), ans.end());
        for (auto x : ans)
            cout << x << " ";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends