//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string reverseWords(string S)
    {
        vector<string> words;
        string temp = "";
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == '.')
            {
                words.push_back(temp);
                temp = "";
            }
            else
            {
                temp += S[i];
            }
        }
        words.push_back(temp);

        string res = "";
        for (int i = words.size() - 1; i >= 0; i--)
        {
            res += words[i];
            if (i != 0)
            {
                res += ".";
            }
        }
        return res;
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
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends