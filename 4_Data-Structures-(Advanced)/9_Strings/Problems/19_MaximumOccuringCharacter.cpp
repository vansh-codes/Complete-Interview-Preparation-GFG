//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char, int> mp;
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]]++;
        }
        char ans = '\0';
        int mx = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            char key = it->first;
            int val = it->second;
            if (val > mx || (val == mx && key < ans))
            {
                ans = key;
                mx = val;
            }
        }
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
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;
    }
}
// } Driver Code Ends